#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int main() {
    try {
        // Create a Bureaucrat and Forms
        Bureaucrat john("John Doe", 2);
        Form taxForm("Tax Form", 3, 10);
        Form topSecret("Top Secret Form", 1, 5);

        // Print initial state
        std::cout << john << std::endl;
        std::cout << taxForm << std::endl;
        std::cout << topSecret << std::endl;

        // Attempt to sign forms
        john.signForm(taxForm);
        john.signForm(topSecret);

        // Print final state
        std::cout << taxForm << std::endl;
        std::cout << topSecret << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
