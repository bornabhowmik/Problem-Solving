#include<bits/stdc++.h>
#include<cmath> 
using namespace std;

int main() 
{
    double A, B, C;
    
    cin >> A >> B >> C;
    
    if (A + B > C  &&  A + C > B  &&  B + C > A) 
    {
        double perimeter = A + B + C;
        
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimeter << endl;
    } 
    else 
    {
        double area = 0.5 * (A + B) * C;
    
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }
    
    return 0;
}
