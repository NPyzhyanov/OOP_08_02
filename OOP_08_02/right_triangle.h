#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

// Прямоугольный (C == 90)

class Right_Triangle : public Triangle
{
public:
    Right_Triangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90.0) {update_figure_name("Right traingle");}
    
protected:
    void check_parameters(double a, double b, double c, double A, double B, double C) override;
    
};

#endif // RIGHT_TRIANGLE_H
