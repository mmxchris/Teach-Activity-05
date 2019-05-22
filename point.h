#ifndef POINT_H
#define POINT_H
#include <cassert>
class Point
{
private:
   int x;
   int y;
   bool validate() const;

public:
   Point();
   Point(int x, int y);
   void display() const;
   void setX(int x);
   void setY(int y);
   int getX()const
   {
      assert(validate());
      return x;
   }

   int getY()const
   {
      assert(validate());
      return y;
   }

};

#endif
