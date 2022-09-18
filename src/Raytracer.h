﻿// Raytracer.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include "vec3.h"

// TODO: Reference additional headers your program requires here.


//Function declarations
colour ray_colour(const ray&);
double hit_sphere(const ray&, const point3&, double);