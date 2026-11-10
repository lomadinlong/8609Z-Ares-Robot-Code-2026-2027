#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor Leftlift(5);
inline pros::Motor Rightlift(8);
inline pros::Motor Clampmotor(14);
inline ez::Piston Clamp('A');
inline pros::Motor Toggle(19);
inline pros::Motor Intake(18);
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');