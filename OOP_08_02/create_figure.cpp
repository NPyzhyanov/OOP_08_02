#include <string>

#include "figures_list.h"
#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

#include "create_figure.h"

Figure* create_figure(FiguresList fig)
{
    Figure* p_figure;
    
    switch(fig)
    {
    case null_figure:
        p_figure = new Figure;
        break;
    case wrong_triangle:
        p_figure = new Triangle(10, 20, 30, 50, 60, 70);
        break;
    case correct_triangle:
        p_figure = new Triangle(15, 20, 30, 50, 60, 70);
        break;
    case wrong_right_triangle:
        p_figure = new Right_Triangle(15, 20, 30, 50, 60);
        break;
    case correct_right_triangle:
        p_figure = new Right_Triangle(15, 20, 30, 50, 40);
        break;
    case isosceles_triangle:
        p_figure = new Isosceles_Triangle(10, 20, 50, 60);
        break;
    case equilateral_triangle:
        p_figure = new Equilateral_Triangle(30);
        break;
    case wrong_quadrilateral:
        p_figure = new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
        break;
    case correct_quadrilateral:
        p_figure = new Quadrilateral(10, 20, 30, 40, 150, 60, 70, 80);
        break;
    case rectangle:
        p_figure = new Rectangle(10, 20);
        break;
    case square:
        p_figure = new Square(20);
        break;
    case parallelogram:
        p_figure = new Parallelogram(20, 30, 30, 40);
        break;
    case rhombus:
        p_figure = new Rhombus(30, 30, 40);
        break;
    case fictious_terminal_figure:
        p_figure = nullptr;
        break;
    default:
        p_figure = nullptr;
        break;
    }
    
    return p_figure;
}
