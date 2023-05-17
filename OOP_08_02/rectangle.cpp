#include <stdexcept>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "wrong_figure_exception.h"

void Rectangle::check_parameters(double a, double b, double c, double d, double A, double B, double C, double D)
{
    this->Quadrilateral::check_parameters(a, b, c, d, A, B, C, D);
    
    if(!( (a == c) && (b == d) ))
    {
        throw WrongFigureException("Cannot create a rectangle with such parameters. Opposite sides must have the same lengths.");
    }
    if(!( (A == 90.0) && (B == 90.0) && (C == 90.0) && (D == 90.0) ))
    {
        throw WrongFigureException("Cannot create a rectangle with such parameters. All angles must equal 90 degrees.");
    }
}
