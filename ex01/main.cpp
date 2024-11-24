#include "includes/Bureaucrat.hpp"
void test1( void )
{
    Bureaucrat bureaucrat("test",2);
    // bureaucrat.incrementGrade();
    bureaucrat.decrementGrade();
    bureaucrat.decrementGrade();
    cout << bureaucrat << endl;
}


int main()
{
    try
    {
        test1();
    }
    catch ( const std::exception& e )
    {
        cout << e.what() << endl;
    }
}