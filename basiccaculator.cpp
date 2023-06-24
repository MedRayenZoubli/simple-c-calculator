#include <iostream>
using namespace std;
int main()
{
    double a, b, res;
    char op;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "choose type of operation: +, *, -, /" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
         break;
    case '*':
        res = a * b;
         break;
    case '/':
        if (b!=0)
        {
            res = a/b;
        }
        else{
            cout << "error!"<< endl;
            }
            
        
        
         break;

    default:
        cout << "wrong operator"<< endl;

            break;
    }
    cout<< "result is  5"<< res<< endl;
}