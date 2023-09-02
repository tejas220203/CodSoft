#include <iostream>
using namespace std;

int main() 
{
  int n1, n2;
    char operation;

    cout << "Enter first number, n1 : ";
    cin >> n1;

    cout << "Enter second number, n2 : ";
    cin >> n2;

    cout << "Enter '+' operation for Addition of two numbers." << endl << 
            "Enter '-' operation for Sobtraction of two numbers." << endl <<
            "Enter '*' operation for Multiplication of two numbers." << endl <<
            "Enter '/' operation for Dividionn of two numbers." << endl << 
            "Enter '%' operation for Modulus of two numbers." << endl <<
            "Enter 'A' operation for performing all the above operations." << endl << endl;
            
    cout << "Enter operation (+, -, *, /, %, A ( shows result for all five basic operations ) ): ";
    cin >> operation;

    switch (operation) 
    {
        case '+':
            cout << "Sum = " << n1 + n2 << endl;
            break; 

        case '-':
            cout << "Difference =  " << n1 - n2 << endl;
            break;

        case '*':
            cout << "Product = " << n1 * n2 << endl;
            break;

        case '/':
            if (n2 != 0) 
            {
                cout << "Quotient = " << n1 / n2 << endl;
            } 
            else 
            {
                cout << "Cannot divide by Zero !" << endl;
            }
            break;

        case '%' :
            cout << "Remainder = " << n1 % n2 << endl;

        case 'A':
             cout << "Sum = " << n1 + n2 << endl;
             cout << "Difference =  " << n1 - n2 << endl;
             cout << "Product = " << n1 * n2 << endl;
             if (n2 != 0) 
             {
                cout << "Quotient = " << n1 / n2 << endl;
             } 
             else 
             {
                cout << "Cannot divide by Zero !" << endl;
             }
             cout << "Remainder = " << n1 % n2 << endl;
             break;
             
        default:
            cout << "Invalid Operation !" << endl;
            break;
    }

    return 0;
}