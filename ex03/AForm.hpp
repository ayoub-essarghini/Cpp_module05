#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;

protected:
    const std::string target;

public:
    AForm(const std::string &name, const std::string &target, int gradeToSign, int gradeToExecute);
    virtual ~AForm();

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    std::string getTraget() const;

    void beSigned(const Bureaucrat &bureaucrat);
    void checkExecution(const Bureaucrat &executor) const;

    virtual void execute(const Bureaucrat &executor) const = 0;

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
    class FormNotSignedException : public std::exception
    {
        const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
