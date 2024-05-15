// Create a C++ program that uses a for loop to simulate a basic calculator.
// The program should repeatedly ask the user for two numbers and an
// operation (addition, subtraction, multiplication, or division) and
// display the result. Ask if the user wants to perform another calculation
//  and continue until they choose to exit.
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    float res;
    char op;
    char sw = 'y';
    for (;sw != 'n';)
    {
        cout << "Enter first number:";
        cin >> n1;
        cout << "Enter second number:";
        cin >> n2;
        cout << "Enter operator:";
        cin >> op;
        switch (op)
        {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = (float)n1 / n2;
            break;
        default:
            cout << "Wrong operator!\n";
        }
        cout << res << endl;
        cout << "Do you want to continue? (y/n)?";
        cin >> sw; 
        // if (sw == 'n') { 
        //     break;
        // } 
    }
}
