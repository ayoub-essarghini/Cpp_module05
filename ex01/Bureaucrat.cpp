#include "includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    cout << "Bureaucrat constructor called" << endl;
}

Bureaucrat::Bureaucrat(const string _name, int _grade) : name(_name), grade(_grade)
{
    if (grade > 150)
    {
        GradeTooHighException gradhigh;
        throw gradhigh;
    }
    if (grade < 0)
    {
        GradeTooLowException gradlow;
        throw gradlow;
    }
    cout << "param Bureaucrat constructor called" << endl;
}

void Bureaucrat::incrementGrade(void)
{
    if (grade >= 0 && grade < 150)
        grade++;
    else
        throw GradeTooHighException();
}

string Bureaucrat::getName()
{
    return name;
}

int Bureaucrat::getGrade()
{
    return grade;
}

void Bureaucrat::decrementGrade(void)
{
    if (grade > 0 && grade <= 150)
        grade--;
    else
        throw GradeTooLowException();
}
std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}

Bureaucrat::~Bureaucrat()
{
    cout << "Bureaucrat destroyed" << endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}
