#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 12);
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("robot");
        PresidentialPardonForm pardon("criminal");

        shrub.beSigned(bob);
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
