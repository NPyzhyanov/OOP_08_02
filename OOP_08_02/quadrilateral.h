#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

class Quadrilateral : public Figure
{
public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D);
    
    ~Quadrilateral();
    
protected:
    void set_sides_values(double a, double b, double c, double d);
    void set_angles_values(double A, double B, double C, double D);
    
    virtual void check_parameters(double a, double b, double c, double d, double A, double B, double C, double D);
    void print_info() override;
    
private:
    char p_sides_names[4] = {'a', 'b', 'c', 'd'};
    char p_angles_names[4] = {'A', 'B', 'C', 'D'};
    
};

#endif // QUADRILATERAL_H
