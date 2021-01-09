#include <iostream>
#include <string>
using namespace std;
int main() 
{ 
    int age ;
    string Fname, Lname ;

    cout  << "Please enter your first name : " ;
    cin >> Fname ;

    cout  << "Please enter your last name : " ;
    cin >> Lname ;

    cout  << "Please enter your age : " ;
    cin >> age ;
    
    cout << "First name : " << Fname << " Last name : " << Lname << " Age : " << age <<  endl ; 
    return 0 ;

}