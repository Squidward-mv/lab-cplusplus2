#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double a;
    int n;
    
    cout << "\nВведите a: ";
    cin >> a;
    
    double result = a;
    
    cout << "\nВведите n: ";
    cin >> n;
    
    for(int i = 1; i < n; i++){
        result *= a+i;
    }
    
    cout << "\nРезультат равен: " << result << endl;
    
    return 0;
}