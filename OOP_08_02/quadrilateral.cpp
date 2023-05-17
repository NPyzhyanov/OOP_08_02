#include <stdexcept>
#include <iostream>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"
#include "wrong_figure_exception.h"

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
{
    check_parameters(a, b, c, d, A, B, C, D);
    
    sides_amount = 4;
    figure_name = "Quadrilateral";
    p_sides = create_sides(4, p_sides_names);
    p_angles = create_angles(4, p_angles_names);
    
    set_sides_values(a, b, c, d);
    set_angles_values(A, B, C, D);
}

Quadrilateral::~Quadrilateral()
{
    delete[] p_sides;
    p_sides = nullptr;
    delete[] p_angles;
    p_angles = nullptr;
}

void Quadrilateral::set_sides_values(double a, double b, double c, double d)
{
    p_sides[0].set_value(a);
    p_sides[1].set_value(b);
    p_sides[2].set_value(c);
    p_sides[3].set_value(d);
}

void Quadrilateral::set_angles_values(double A, double B, double C, double D)
{
    p_angles[0].set_value(A);
    p_angles[1].set_value(B);
    p_angles[2].set_value(C);
    p_angles[3].set_value(D);
}

void Quadrilateral::check_parameters(double a, double b, double c, double d, double A, double B, double C, double D)
{
    if(!( (a > 0) && (b > 0) && (c > 0) && (d > 0) ))
    {
        throw WrongFigureException("Cannot create a quadrilateral with such parameters. All sides must be strictly greater than zero.");
    }
    if(!( (A > 0) && (B > 0) && (C > 0) && (D > 0) ))
    {
        throw WrongFigureException("Cannot create a quadrilateral with such parameters. All angles must be strictly greater than zero.");
    }
    if( (A + B + C + D) != 360.0 )
    {
        throw WrongFigureException("Cannot create a quadrilateral with such parameters. The sum of angles must equal 360 degrees.");
    }
    if (!( (a < (b + c + d)) && (b < (c + d + a)) && (c < (d + a + b)) && (d < (a + b + c)) ))
    {
        throw WrongFigureException("Cannot create a quadrilateral with such parameters. Each side's length must be less than the sum of the rest sides.");
    }
}

void Quadrilateral::print_info()
{
    std::cout << figure_name << " with sides " <<
                 p_sides[0].get_name() << " = " << p_sides[0].get_value() << ", " << 
                 p_sides[1].get_name() << " = " << p_sides[1].get_value() << ", " << 
                 p_sides[2].get_name() << " = " << p_sides[2].get_value() << ", " << 
                 p_sides[3].get_name() << " = " << p_sides[3].get_value() << 
                 " and angles " <<
                 p_angles[0].get_name() << " = " << p_angles[0].get_value() << ", " << 
                 p_angles[1].get_name() << " = " << p_angles[1].get_value() << ", " << 
                 p_angles[2].get_name() << " = " << p_angles[2].get_value() << ", " << 
                 p_angles[3].get_name() << " = " << p_angles[3].get_value() << 
                 " successfully created." << std::endl;
    
    std::cout << std::endl;
}
