#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

// Параллелограмм (a == c, b == d, A == C, B == D)

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(double a, double b, double A, double B) : Quadrilateral(a, b, a, b, A, B, A, B) {update_figure_name("Parallelogram");}
    
protected:
    void check_parameters(double a, double b, double c, double d, double A, double B, double C, double D) override;
    
};

#endif // PARALLELOGRAM_H
