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

int main() {
    long double x, eps;
    long double result = 0;

    cout << "Введите х: ";
    cin >> x;
    
    cout << "Введите epsilon: ";
    cin >> eps;

    for(int k = 0; abs(pow(-x, 2 * k) / fact(2 * k)) > eps; k++){
        result += (pow(-x, 2 * k) / fact(2 * k)); 
    }
    
    cout << "Результат: " << result << endl;
        
    return 0;
}