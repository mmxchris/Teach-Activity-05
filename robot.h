#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
   Point position;
   int energy;
   bool validate()const;

public:
   Robot();
   Robot(Point position, int energy);
   Robot(int energy);
   void display() const;
   void setEnergy(int energy);
   int getEnergy()const;
   void setPosition(Point position);
   
};

#endif
