#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);

    double r;
    cin >> r;

    double pi = 3.141592653;

    pi = 3.141592653 * (r * r);

    cout<<pi<<endl;

    return 0;
}