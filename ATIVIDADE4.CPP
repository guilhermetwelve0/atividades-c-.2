#include <iostream>
using namespace std;
int main ()
{
    float celsius,kelvin;
    
    cout <<"\nDigite a temperatura em celsius: ";
    cin >> celsius;
    
    kelvin = celsius+273.15;
    
    cout<<"\nA temperatura em Celsius= "<<celsius;
    cout<<"\nA temperatura Convertida em Kelvin = " << kelvin;
}