#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;
    double result;
    
    cout << "Введите n: ";
    cin >> n;
    
    for(int k = 1; k <= n; k++){
        result += pow(k, 3);
        
        for(int i = 1; i <= n; i++){
            result += pow(k - i, 2);
        }
    }
    
    cout << "Результат равен: " << result << endl;
    
    return 0;
}