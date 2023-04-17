#include <iostream>

using namespace std;

//this program will retrieve an input of the first initial of your first name and last name and turn it into a number.
//then it will add one to that number and tell you what the equivalent character is based on the ASCII

int main()
{
    
    //declaring the character of the first name first initial
    
    char firstNameInitial;
    
    //declaring the character of the last name first initial
    
    char lastNameInitial;
    
    //asking for the input from the user of their first and last names first initials
    
    cout << "Enter your first initial: ";
    cin >> firstNameInitial;
    cout << "Enter your last initial: ";
    cin >> lastNameInitial;
    
    //here we are converting the character of the first names initial into an integer to get a number calue
    //equivalent on the ASCII table, and returning its value.
    
    int firstNameInitialNum = firstNameInitial;
    cout <<"\n" << firstNameInitial << " has code " << firstNameInitialNum << endl;
    
    //declaring a second integer value to store the first initials number + 1
    
    int firstNameInitialNum2 = firstNameInitialNum + 1;
    
    //converting that second integer value into a character so we know what the integer value is equivalent to
    //based on character on the ASCII table
    
    char firstNameInitial2 = firstNameInitialNum2;
    
    //outputting the number of the first inputted initial plus 1, and then displaying the character equivalent
    
    cout << firstNameInitialNum << " plus one is " << firstNameInitialNum2 << " which is the character " << firstNameInitial2 << endl;
    
    //here we are converting the character of the last names initial into an integer to get a number value
    //equivalent on the ASCII table, and returning its value.
    
    int lastNameInitialNum = lastNameInitial;
    cout << "\n" << lastNameInitial << " has code " << lastNameInitialNum << endl;
    
    //declaring a second integer value to store the last initials number + 1
    
    int lastNameInitialNum2 = lastNameInitialNum + 1;
    
    //converting that second integer value of last name initial into a character so we know what the integer value is 
    //equivalent to based on character on the ASCII table
    
    char lastNameInitial2 = lastNameInitialNum2;
    
    //outputting the number of the first inputted last initial plus 1, and then displaying the character equivalent
    
    cout << lastNameInitialNum << " plus one is " << lastNameInitialNum2 << " which is the character " << lastNameInitial2 << endl;

    
    
    return 0;
}

