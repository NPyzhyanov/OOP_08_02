#ifndef RECTANGLE_H
#define RECTANGLE_H

// Прямоугольник (a == c, b == d, A == B == C == D == 90)

class Rectangle : public Quadrilateral
{
public:
    Rectangle(double a, double b) : Quadrilateral(a, b, a, b, 90.0, 90.0, 90.0, 90.0) {update_figure_name("Rectangle");}
    
protected:
    void check_parameters(double a, double b, double c, double d, double A, double B, double C, double D) override;
    
};

#endif // RECTANGLE_H
