#include "robot.h"
#include <iostream>

using namespace std;



/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/
void Robot :: display() const
{
   position.display();
   cout << " - Energy: " << getEnergy();
}

//comments
void Robot::setEnergy(int energy)
{
   Robot::energy = std::abs(energy);
}

//comments
int Robot::getEnergy()const
{
   return Robot::energy;
}

void Robot::setPosition(Point position)
{
   this->position = position;
}
Robot::Robot() : Robot(Point(),100)
{
  assert(validate());
}

Robot::Robot(Point position, int energy) : energy(100)
{
   setPosition(position);
   setEnergy(energy);
   assert(validate());
}

Robot::Robot(int energy)
{
   setEnergy(energy);
   assert(validate());
}

bool Robot::validate() const
{
   return position.getY() >= 1 && position.getY() <= 10 && position.getX() >= 1 && position.getX() <= 10 && energy >= 0 ;
}