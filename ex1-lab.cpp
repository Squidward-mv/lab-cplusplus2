#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x, y;
    
    cout << "Введите координату х: " << endl;

    cin >> x;
    
    cout << "\nВведите координату y: " << endl;

    cin >> y;
    
    if((x*x + y*y == 1) && (x*y <= 0)){
        cout << "\n\tТочка принадлежит заштрихованной области" << endl;
    }
    else{
        cout << "\n\tТочка не принадлежит заштрихованной области" << endl;
    }
    
    return 0;
}
