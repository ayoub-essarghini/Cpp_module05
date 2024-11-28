#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

class Intern {
public:
    Intern();
    Intern(const Intern& other);
    ~Intern();
    Intern& operator=(const Intern& other);

    AForm* makeForm(const std::string& formName, const std::string& target) const;

private:
    typedef AForm* (*FormCreator)(const std::string& target);
    static AForm* createShrubbery(const std::string& target);
    static AForm* createRobotomy(const std::string& target);
    static AForm* createPresidential(const std::string& target);
};

#endif
