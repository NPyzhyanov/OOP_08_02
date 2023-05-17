#ifndef RHOMBUS_H
#define RHOMBUS_H

// Ромб (a == b == c == d, A == C, B == D)

class Rhombus : public Quadrilateral
{
public:
    Rhombus(double a, double A, double B) : Quadrilateral(a, a, a, a, A, B, A, B) {update_figure_name("Rhombus");}
    
protected:
    void check_parameters(double a, double b, double c, double d, double A, double B, double C, double D) override;
    
};

#endif // RHOMBUS_H
