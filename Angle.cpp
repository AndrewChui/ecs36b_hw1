// name: Kwok Chui
// Student ID: 923 216 256
#include "Angle.h"
#include <iostream>
using namespace std;

// starts at 30degrees when created
Angle::Angle()
{
	// constrctor code here
	theta = 30;
}

// return the current angle value
int Angle::get()
{
	return theta;
}

void Angle::change(int dt)
{
	// compute what the new angle should be
	int newAngle = theta + dt;
	set(newAngle);
}

void Angle::set(int t)
{
	if (t < -60)
	{
		theta = -60;
	}
	else if (t > 120)
	{
		theta = 120;
	}
	else
	{
		theta = t;
	}
}

void Angle::print(void)
{
	cout << "The angle is " << theta << " degrees" << endl;
}
// only change through the change(int dt) function

// any out of range vaule should be changed to the nearest limit//
