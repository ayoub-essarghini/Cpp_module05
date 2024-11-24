#include "includes/From.hpp"


Form::Form():grade(0),name("default"),isSigned(false)
{
    cout << "Constructor invoked" << endl;
}

Form::Form(const string& _name,const int& _grade, const bool& _isSigned):name(_name),grade(_grade),isSigned(_isSigned)
{
    cout << "Param Constructor invoked"<< endl;
}

const string Form::getName() const
{
    return this->name;
}

bool Form::getIsSigned()
{
    return this->isSigned;
}

const int Form::getGrade() const
{
    return this->grade;
}






