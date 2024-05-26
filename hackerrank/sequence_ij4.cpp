#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    for (int i = 0; i <= 10; ++i) 
    {
        double I = i * 0.2;
        
        for (int j = 1; j <= 3; ++j)

        {
            double J = j + I;

            cout << fixed << setprecision(1) << "I=" << I << " J=" << J << endl;
        }
    }
    
    return 0;
}
