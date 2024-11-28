#include "includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    checkExecution(executor);
    std::string filename = target + "_shrubbery";
    std::ofstream ofs(filename.c_str());
    if (!ofs)
    {
        throw std::ios_base::failure("Failed to create the shrubbery file");
    }
    ofs << "         *\n"
           "        /|\\\n"
           "       /*|O\\\n"
           "      /*/|\\*\\\n"
           "     /X/O|*\\X\\\n"
           "    /*/X/|\\X\\*\\\n"
           "   /O/*/X|*\\O\\X\\\n"
           "         |X|\n"
           "         |X|\n";

    ofs.close();
}
