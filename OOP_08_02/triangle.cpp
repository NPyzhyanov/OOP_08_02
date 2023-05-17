#include <stdexcept>
#include <iostream>
#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "wrong_figure_exception.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
{
    check_parameters(a, b, c, A, B, C);
    
    figure_name = "Triangle";
    sides_amount = 3;
    p_sides = create_sides(3, p_sides_names);
    p_angles = create_angles(3, p_angles_names);
    
    set_sides_values(a, b, c);
    set_angles_values(A, B, C);
}

Triangle::~Triangle()
{
    delete[] p_sides;
    p_sides = nullptr;
    delete[] p_angles;
    p_angles = nullptr;
}

void Triangle::set_sides_values(double a, double b, double c)
{
    p_sides[0].set_value(a);
    p_sides[1].set_value(b);
    p_sides[2].set_value(c);
}

void Triangle::set_angles_values(double A, double B, double C)
{
    p_angles[0].set_value(A);
    p_angles[1].set_value(B);
    p_angles[2].set_value(C);
}

void Triangle::check_parameters(double a, double b, double c, double A, double B, double C)
{
    if (!((a > 0) && (b > 0) && (c > 0)))
    {
        throw WrongFigureException("Cannot create a triangle with such parameters. All sides must be strictly greater than zero.");
    }
    if (!((A > 0) && (B > 0) && (C > 0)))
    {
        throw WrongFigureException("Cannot create a triangle with such parameters. All angles must be strictly greater than zero.");
    }
    if((A + B + C) != 180.0)
    {
        throw WrongFigureException("Cannot create a triangle with such parameters. The sum of angles must equal 180 degrees.");
    }
    if ((a >= (b + c)) || (b >= (c + a)) || (c >= (a + b)))
    {
        throw WrongFigureException("Cannot create a triangle with such parameters. Each side's length must be less than the sum of the rest sides.");
    }
}

void Triangle::print_info()
{
    std::cout << figure_name << " with sides " <<
                 p_sides[0].get_name() << " = " << p_sides[0].get_value() << ", " << 
                 p_sides[1].get_name() << " = " << p_sides[1].get_value() << ", " << 
                 p_sides[2].get_name() << " = " << p_sides[2].get_value() << 
                 " and angles " <<
                 p_angles[0].get_name() << " = " << p_angles[0].get_value() << ", " << 
                 p_angles[1].get_name() << " = " << p_angles[1].get_value() << ", " << 
                 p_angles[2].get_name() << " = " << p_angles[2].get_value() <<
                 " successfully created." << std::endl;
    
    std::cout << std::endl;
}
