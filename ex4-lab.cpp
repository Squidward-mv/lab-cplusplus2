#include <iostream>
#include <cmath>

using namespace std; 
int main() {
    double x = -1.7; //параметр x
    double z, a, b;
    
    cout << ("-----------------------------------------\n");
    cout << ("|        C         |           Z        |\n");
    cout << ("-----------------------------------------\n");  
    
    for (double c = -2.1; c <= 3.2; c+=0.2){
    
        cout << "|      "<< c <<"\t|";
    
        z = (pow(sin(abs(c * pow(x, 3) + pow(x, 2))), 3)) / (abs(c * pow(x, 3) - pow(x, 2)) + 3,14);  //так как выражение под корнем в квадрате,то => 
        cout << "|      "<< z <<"\t|" << endl;                                                        //√(с*x^3 + x^2)^2 =|с*x^3 + x^2|
    
        if (z > 0) a += 1; else if (z < 0) b += 1;
    }
    cout << ("-----------------------------------------\n"); 
    
    cout << "Значений z больше нуля: " << a << "\n" << "Значений z меньше нуля: " << b << endl; 
    
    return 0;
}