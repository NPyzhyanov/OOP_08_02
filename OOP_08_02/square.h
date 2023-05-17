#ifndef SQUARE_H
#define SQUARE_H

// Квадрат (a == b == c == d, A == B == C == D == 90)

class Square : public Quadrilateral
{
public:
    Square(double a) : Quadrilateral(a, a, a, a, 90.0, 90.0, 90.0, 90.0) {update_figure_name("Square");}
    
protected:
    void check_parameters(double a, double b, double c, double d, double A, double B, double C, double D) override;
    
};

#endif // SQUARE_H
