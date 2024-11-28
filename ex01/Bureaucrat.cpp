#include "includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    cout << "Bureaucrat constructor called" << endl;
}

Bureaucrat::Bureaucrat(const string _name, int _grade) : name(_name), grade(_grade)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    if (grade > 150)
    {
        throw GradeTooLowException();
    }
    cout << "param Bureaucrat constructor called" << endl;
}

void Bureaucrat::incrementGrade() {
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

string Bureaucrat::getName()
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << name << " couldn't sign " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
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
