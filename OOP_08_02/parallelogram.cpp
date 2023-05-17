#include <stdexcept>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"
#include "parallelogram.h"
#include "wrong_figure_exception.h"

void Parallelogram::check_parameters(double a, double b, double c, double d, double A, double B, double C, double D)
{
    this->Quadrilateral::check_parameters(a, b, c, d, A, B, C, D);
    
    if(!( (a == c) && (b == d) ))
    {
        throw WrongFigureException("Cannot create a parallelogram with such parameters. Opposite sides must have the same lengths.");
    }
    if(!( (A == C) && (B == D) ))
    {
        throw WrongFigureException("Cannot create a parallelogram with such parameters. Opposite angles must have the same values.");
    }
}
