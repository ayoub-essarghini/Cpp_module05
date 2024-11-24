#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Form
{
private:
    const string name;
    bool isSigned;
    const int grade;

public:
    Form();
    Form(const string& _name,const int& _grade, const bool& _isSigned);
    ~Form();
    const string getName() const;

    bool getIsSigned();
    const int getGrade() const;
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
