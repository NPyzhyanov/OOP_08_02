#ifndef WRONG_FIGURE_EXCEPTION_H
#define WRONG_FIGURE_EXCEPTION_H

class WrongFigureException : public std::domain_error
{
public:
    WrongFigureException(const std::string& error_message_) : domain_error(error_message_) {error_message = error_message_;}
    
    const char* what() const noexcept {return error_message.c_str();}
    
private:
    std::string error_message;
};

#endif // WRONG_FIGURE_EXCEPTION_H
