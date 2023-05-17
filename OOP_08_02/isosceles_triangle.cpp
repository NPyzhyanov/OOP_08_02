#include <stdexcept>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "isosceles_triangle.h"
#include "wrong_figure_exception.h"

void Isosceles_Triangle::check_parameters(double a, double b, double c, double A, double B, double C)
{
    this->Triangle::check_parameters(a, b, c, A, B, C);
    
    if (a != c)
    {
        throw WrongFigureException("Cannot create an isosceles triangle with such parameters. Sides a and c must have the same length.");
    }
    if (A != C)
    {
        throw WrongFigureException("Cannot create an isosceles triangle with such parameters. Angles A and C must have the same value.");
    }
}
