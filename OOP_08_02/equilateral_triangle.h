#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

// Равносторонний (a == b == c; A == B == C == 60)

class Equilateral_Triangle : public Triangle
{
public:
    Equilateral_Triangle(double a) : Triangle(a, a, a, 60.0, 60.0, 60.0) {update_figure_name("Equilateral triangle");}
    
protected:
    void check_parameters(double a, double b, double c, double A, double B, double C) override;
    
};

#endif // EQUILATERAL_TRIANGLE_H
