#include <stdexcept>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "wrong_figure_exception.h"

void Right_Triangle::check_parameters(double a, double b, double c, double A, double B, double C)
{
    this->Triangle::check_parameters(a, b, c, A, B, C);
    
    if(C != 90.0)
    {
        throw WrongFigureException("Cannot create a right triangle with such parameters. The angle C must equal 90 degrees.");
    }
}
