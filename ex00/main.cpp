#include "includes/Bureaucrat.hpp"

int main()
{
    Bureaucrat bureaucrat("test",0);
  
    try
    {
         bureaucrat.incrementGrade();
         bureaucrat.decrementGrade();
         bureaucrat.decrementGrade();
         cout << bureaucrat << endl;
    }
    catch(const char *text)
    {
        cout << text << "\n";
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
}