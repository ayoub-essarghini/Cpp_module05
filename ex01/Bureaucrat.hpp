#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"

using std::cout;
using std::endl;
using std::string;

class Bureaucrat
{
private:
    const string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const string _name, int _grade);
    ~Bureaucrat();
    string getName();
    int getGrade() const;
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(Form &form);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);
