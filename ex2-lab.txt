#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double y;
    
    cout << "Введите y:\t";
    cin >> y;
    
    for (double x = -4.7; x <= 0.2; x +=0.2){
        cout << "При x =" << x << ' ';
        cout << "b = " << (1 + (pow(x, 3) / 3) + (y / 4)) / -sqrt(abs(y)) << endl ;
    }
    
    return 0;
}
