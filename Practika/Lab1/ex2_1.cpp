#include <iostream>
using namespace std;
int main()
{
    cout.precision(4);
    string name;
    cout << "Input your name\n";
    double a, b;
    cout.precision(4);
    cout << "Input a and b:\n";
    cin >> a;
    cin  >> name;
    cin >> b;
    double x = a / b;
    cout << "\nx = " << x << endl;
    cout << "Hello, " << name << "!\n";
    return 0;
}