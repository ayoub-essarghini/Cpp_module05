#pragma once

#include <iostream>
#include <exception>

using std::cout;
using std::endl;
using std::string;

class Bureaucrat
{
private:
    const string name;
    int grade;

    class GradeTooHighException : public std::exception
    {
        public :
            const char *what() const throw();
        // public :
            // virtual ~GradeTooHighException();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
        // public :
        // virtual ~GradeTooLowException();
    };

public:
    Bureaucrat();
    Bureaucrat(const string _name, int _grade);
    ~Bureaucrat();
    string getName();
    int getGrade();
    void incrementGrade(void);
    void decrementGrade(void);

};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);
