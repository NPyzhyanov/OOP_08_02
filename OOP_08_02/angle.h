#ifndef ANGLE_H
#define ANGLE_H

class Angle
{
public:
    Angle();
    
    void set_name(std::string name_) {name = name_;}
    void set_value(double value_) {value = value_;}
    
    std::string get_name() {return name;}
    double get_value() {return value;}
    
private:
    std::string name;
    double value;
};

#endif // ANGLE_H
