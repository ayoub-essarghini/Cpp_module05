#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, const std::string &target, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), target(target)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm() {}

const std::string &AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getGradeToSign() const { return gradeToSign; }
int AForm::getGradeToExecute() const { return gradeToExecute; }
std::string AForm::getTraget() const { return target; }

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

void AForm::checkExecution(const Bureaucrat &executor) const
{
    if (!isSigned)
        throw FormNotSignedException();
    if (executor.getGrade() > gradeToExecute)
        throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high.";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low.";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "Form not signed.";
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << "Form: " << form.getName() << "\n"
       << "Target: " << form.getTraget() << "\n"
       << "Signed: " << (form.getIsSigned() ? "Yes" : "No") << "\n"
       << "Grade required to sign: " << form.getGradeToSign() << "\n"
       << "Grade required to execute: " << form.getGradeToExecute() << "\n";
    return os;
}
