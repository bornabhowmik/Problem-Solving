#include <bits/stdc++.h> 
using namespace std;

int main()
{
    double A, B, C;
    const double PI = 3.14159;
    
    cin >> A >> B >> C;
    
    double areaTriangle = (A * C) / 2.0;
    double areaCircle = PI * C * C;
    double areaTrapezium = ((A + B) * C) / 2.0;
    double areaSquare = B * B;
    double areaRectangle = A * B;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaTriangle << endl;
    cout << "CIRCULO: " << areaCircle << endl;
    cout << "TRAPEZIO: " << areaTrapezium << endl;
    cout << "QUADRADO: " << areaSquare << endl;
    cout << "RETANGULO: " << areaRectangle << endl;
    
    return 0;
}
