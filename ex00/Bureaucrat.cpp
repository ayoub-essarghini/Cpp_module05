#include "includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    cout << "Bureaucrat constructor called" << endl;
}

Bureaucrat::Bureaucrat(const string _name, int _grade) : name(_name), grade(_grade)
{
    cout << "param Bureaucrat constructor called" << endl;
}

void Bureaucrat::GradeTooHighException()
{
    if (grade > 150)
        throw "Grade too High";
}

void Bureaucrat::GradeTooLowException()
{
    if (grade < 1)
        throw "Grade too low";
}

void Bureaucrat::incrementGrade(void)
{
    if (grade >= 0 && grade < 150)
        grade++;
    else
        throw "Grade is out of range";
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
        throw "Grade is out of range";
}
std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat )
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}

Bureaucrat::~Bureaucrat()
{
    cout << "Bureaucrat destroyed" << endl;
}