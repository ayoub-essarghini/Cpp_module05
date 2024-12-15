#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 12);
        RobotomyRequestForm robot("robot");
        PresidentialPardonForm pardon("criminal");

        ShrubberyCreationForm shrub("home");
        ShrubberyCreationForm shrub2("home2");
        shrub = shrub2;
        

        shrub.beSigned(bob);
        shrub.execute(bob);
        bob.executeForm(shrub);

        robot.beSigned(bob);
        bob.executeForm(robot);

        pardon.beSigned(bob);
        bob.executeForm(pardon);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
