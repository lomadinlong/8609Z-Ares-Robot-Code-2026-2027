#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor Leftlift(1);
inline pros::Motor Rightlift(10);
inline pros::Motor Clampmotor(8);
inline ez::Piston Clamp('A');
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');