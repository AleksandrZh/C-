#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cout.precision(4);// But 
    cout << "Input a and b:\n";
    cin >> a;
    cin >> b;
    double x = a / b;
    cout << "\nx = " << x << endl;
    cout << sizeof(a/b) << endl;
    cout << sizeof(x) << endl;
    
    return 0;
}