#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a, b, c, d;
    
    cout << "Введите cтороны а и b: ";
    cin >> a >> b;
    
    cout << "Введите стороны c и d: ";
    cin >> c >> d;
    
    if(((a < c) && (b < d)) || ((a < d) && (b < c))){
        cout << "\nПрямоугольник со сторонами a и b можно уместить в прямоугольнике со сторонами c и d" << endl;
    }
    else{
        cout << "\nПрямоугольник со сторонами a и b нельзя уместить в прямоугольнике со сторонами c и d" << endl;
    }
    
    return 0;
}