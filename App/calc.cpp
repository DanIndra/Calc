/*
Simple calculator that reads user input and provides the result as output.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Defining variables and initializing it.
    double num1,num2;
    char operation,redo;

    // Printing a title for the app so when you run it you will see a quick description.
    std::cout << "Welcome to the simple calculator."<< endl;
    std::cout << "---------------------------------"<< endl;
    std::cout << endl<< endl<< endl;

    //Having this loop allow us to run the program more than once whitout it exiting.
    do
    {
        std::cout << "Please chose the operation you want to perform (+,-,*,/)";
        std::cin >> operation;
        std::cout <<endl<<endl;
        std::cout << "Please chose the two number you wich to perfom calculations on(";
        std::cout << operation<<"):" << endl << "1st number:";
        std::cin >> num1;
        std::cout << "2nd number:";
        std::cin >> num2;
        std::cout << endl;

        // Using a switch fucntion to detect what calculation to make.
        switch (operation)
        {
            case '+':
                std::cout << "This operator adds the two numbers (" << num1 << "," << num2 <<"):";
                std::cout << num1+num2 <<endl;
                break;
            case '-':
                std::cout << "This operator subtracts the two numbers (" << num1 << "," << num2 <<"):";
                std::cout << num1-num2 <<endl;
                break;
            case '*':
                std::cout << "This operator multiplies the two numbers (" << num1 << "," << num2 <<"):";
                std::cout << num1*num2 <<endl;
                break;
            case '/':
                std::cout << "This operator divides the two numbers (" << num1 << "," << num2 <<"):";
                if (num2==0)
                {
                    std::cout << "not valid" << endl;
                }
                std::cout << num1/num2 <<endl;
                break;
            default:
                std::cout << "Unknown calculation" << endl;
          }
          // This is for the user to confirm he wishes to continue;
          std::cout << "enter y or Y to continue";
          std::cin >> redo;
          std::cout << endl << endl;
      }
      while(redo=='y'||redo=='Y');

      return 0;
}
