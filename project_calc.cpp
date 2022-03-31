#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char operation;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter operation (+,-,*,/): ";
    cin >> operation;
    cout << "Enter second number:";
    cin >> b;
    switch (operation)
    {
    case '+':
        cout << "Result = " << a + b;
        break;
    case '-':
        cout << "Result = " << a - b;
        break;
    case '*':
        cout << "Result = " << a * b;
        break;
    case '/':
        cout << "Result = " << a / b;
        break;
    default:
        cout << "Invalid operation " << endl;
    }

    return 0;
}