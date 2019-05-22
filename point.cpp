#include "point.h"

#include <iostream>
using namespace std;

/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point :: display() const
{
   // Note: We could just use x and y here and not the getters
   // because it's a member function. But this will force you
   // to deal with const :-)...
   assert(validate());
   cout << "(" << getX() << ", " << getY() << ")";
}

Point::Point() : x(5), y(5)
{
   assert(validate());
}

Point::Point(int x, int y) :x(5), y(5)
{
   setX(x);
   setY(y);
   assert(validate());
}

//comment goes here
void Point::setX(int x)
{
   if (x > 10)
      this->x = 10;
   else if (x < 0)
      this->x = 1;
   else
      this->x = x;
   assert(validate());
}

//comment
void Point::setY(int y)
{
   if (y > 10)
      this-> y = 10;
   else if (y < 0)
      this->y = 1;
   else
      this->y = y;
   assert(validate());
}

bool Point::validate() const
{
   return y >= 1 && y <= 10 && x >= 1 && x <= 10;    
}