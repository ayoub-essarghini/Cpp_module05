#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm();

    void execute(const Bureaucrat &executor) const;
};
