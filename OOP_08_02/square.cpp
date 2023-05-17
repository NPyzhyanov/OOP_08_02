#include <stdexcept>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"
#include "square.h"
#include "wrong_figure_exception.h"

void Square::check_parameters(double a, double b, double c, double d, double A, double B, double C, double D)
{
    this->Quadrilateral::check_parameters(a, b, c, d, A, B, C, D);
    
    if(!( (a == b) && (a == c) && (a == d) ))
    {
        throw WrongFigureException("Cannot create a square with such parameters. All sides must have the same length.");
    }
    if(!( (A == 90.0) && (B == 90.0) && (C == 90.0) && (D == 90.0) ))
    {
        throw WrongFigureException("Cannot create a square with such parameters. All angles must equal 90 degrees.");
    }
}
