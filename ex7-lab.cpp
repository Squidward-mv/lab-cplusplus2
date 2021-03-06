#include <iostream>
#include <cmath>

using namespace std; 

long double fact(int N)
{
    if(N < 0){  
        return 0;
    }
    if(N == 0){
        return 1;
    }
    else{
        return N * fact(N - 1);
    }
}

long double a(double x, int num) {
    return sqrt(x) / (fact(num) * fact(num + 1));     
}

int main() {
    long double x, eps;
    long int index = 0;
    
    cout << "Введите х: ";
    cin >> x;
    
    cout << "Введите epsilon: " << endl;
    cin >> eps;
    
    for(int n = 1; (abs(a(x, n) - a(x, n - 1))) > eps; n++){
        index = n;
    }
    
    cout << "Первый подходящий член - а имеет индекс " << index << " И равен: " << a(x, index) << endl;
    
    return 0;
}