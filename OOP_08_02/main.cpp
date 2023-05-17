#include <stdexcept>
#include <exception>
#include <typeinfo>
#include <iostream>
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
#include "wrong_figure_exception.h"

int main()
{  
    Figure* ptrs_array[static_cast<int>(FiguresList::fictious_terminal_figure)];
        
    for (FiguresList fig = null_figure; fig < fictious_terminal_figure; fig = static_cast<FiguresList>((static_cast<int>(fig) + 1)))
    {
        try
        {
            ptrs_array[static_cast<int>(fig)] = create_figure(fig);
            ptrs_array[static_cast<int>(fig)]->print_info();
            
            delete ptrs_array[static_cast<int>(fig)];
            ptrs_array[static_cast<int>(fig)] = nullptr;
        }
        catch(const std::exception& ex)
        {
            std::cout << "Exception: " << ex.what() << std::endl;
            std::cout << "Type: " << typeid(ex).name() << std::endl;
            std::cout << std::endl;
        }
    }
    
    return 0;
}
