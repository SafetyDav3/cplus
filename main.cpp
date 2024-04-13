#include <iostream>

int main()
{
    using namespace std;

    char decision2;

    do {
        double var1, var2;
        char decision;

        cout << "Enter first number: " << endl;
        cin >> var1;

        cout << "Enter second number: " << endl;
        cin >> var2;

        cout << "What do you want to do with those numbers?" << endl;
        cout << "+ - add" << endl;
        cout << "- - subtract" << endl;
        cout << "* - multiply" << endl;
        cout << "/ - divide" << endl;

        cin >> decision;

        switch (decision)
        {
            case '+':
                cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
                break;
            case '-':
                cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
                break;
            case '*':
                cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
                break;
            case '/':
                if (var2 != 0)
                    cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
                else
                    cout << "You can't divide by 0" << endl;
                break;
            default:
                cout << "You typed wrong character";
        }

        cout << "Do you want to continue that program? (Y/N)" << endl;
        cin >> decision2;
    } while (decision2 == 'y' || decision2 == 'Y');
}
