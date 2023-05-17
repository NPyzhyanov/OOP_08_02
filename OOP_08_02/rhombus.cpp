#include <stdexcept>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"
#include "rhombus.h"
#include "wrong_figure_exception.h"

void Rhombus::check_parameters(double a, double b, double c, double d, double A, double B, double C, double D)
{
    this->Quadrilateral::check_parameters(a, b, c, d, A, B, C, D);
    
    if(!( (a == b) && (a == c) && (a == d) ))
    {
        throw WrongFigureException("Cannot create a rhombus with such parameters. All sides must have the same length.");
    }
    if(!( (A == C) && (B == D) ))
    {
        throw WrongFigureException("Cannot create a rhombus with such parameters. Opposite angles must have the same values.");
    }
}
