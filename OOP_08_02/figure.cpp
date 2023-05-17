#include <string>
#include <iostream>

#include "side.h"
#include "angle.h"
#include "figure.h"

Figure::Figure()
{
    sides_amount = 0;
    figure_name = "null figure";
    p_sides = nullptr;
    p_angles = nullptr;
}

Side* Figure::create_sides(int sides_amount, char* sides_names)
{
    Side* p_sides = new Side[sides_amount];
    
    for (int i = 0; i < sides_amount; i++)
    {
        std::string side_name = "";
        side_name += sides_names[i];
        p_sides[i].set_name(side_name);
    }
    
    return p_sides;
}

Angle* Figure::create_angles(int sides_amount, char* angles_names)
{
    Angle* p_angles = new Angle[sides_amount];
    
    for (int i = 0; i < sides_amount; i++)
    {
        std::string angle_name = "";
        angle_name += angles_names[i];
        p_angles[i].set_name(angle_name);
    }
    
    return p_angles;
}

void Figure::print_info()
{
    std::cout << "A " << figure_name << " successfully created\n";
    std::cout << std::endl;
}
