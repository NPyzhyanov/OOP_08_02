#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

// Равнобедренный (a == c; A == C)

class Isosceles_Triangle : public Triangle
{
public:
    Isosceles_Triangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {update_figure_name("Isosceles triangle");}
    
protected:
    void check_parameters(double a, double b, double c, double A, double B, double C) override;
    
};

#endif // ISOSCELES_TRIANGLE_H
