#pragma once

#include "Matrix.h"
#include "Vector.h"

class SchrodingerEquation {
private:
    int gridSizeX;
    int gridSizeY;
    double dx;
    double dy;
    double mass;
    double hbar;

public:     

     Vector equationVariables(); 
};