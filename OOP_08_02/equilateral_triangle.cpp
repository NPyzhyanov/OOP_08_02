#include <stdexcept>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "equilateral_triangle.h"
#include "wrong_figure_exception.h"

void Equilateral_Triangle::check_parameters(double a, double b, double c, double A, double B, double C)
{
    this->Triangle::check_parameters(a, b, c, A, B, C);
    
    if (!((a == b) && (a == c)))
    {
        throw WrongFigureException("Cannot create an equilateral triangle with such parameters. All sides must have the same length.");
    }
    if (!((A == 60.0) && (B == 60.0) && (C == 60.0)))
    {
        throw WrongFigureException("Cannot create an equilateral triangle with such parameters. All angles must equal 60 degrees.");
    }
}
