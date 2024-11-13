#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;


class Bureaucrat
{
private:
    const string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const string _name, int _grade);
    ~Bureaucrat();
    void GradeTooHighException();
    void GradeTooLowException();
    string getName();
    int getGrade();
    void incrementGrade(void);
    void decrementGrade(void);
};
std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat );




