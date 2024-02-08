#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
    cout.precision(3);
    double p, p2, s;
    double a = 10;

    cout << "Input perimeter:" << endl;
    cin >> p;
    p2 = p / 2;
    s = sqrt( p2 * (p2 - a) * (p2 - a) * (p2 - a) );    

    cout << setw(20) << "Side" 
         << setw( 8 ) << "Area"
         << endl;
    cout << setw(20) << a
         << setw( 8 ) << s
         << endl;
    return 0;
}

