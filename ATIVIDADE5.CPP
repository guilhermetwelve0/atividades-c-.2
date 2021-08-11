#include <iostream>
using namespace std;

int main()
{
    float C, F, K;

    cout << "Graus em Fahrenheit: ";
    cin >> F;

    C = 5*(F-32)/9;
    K = C + 273.15;

    cout << "Representa em Celsius: " << C  ;
    cout << "\nRepresenta em Kelvin: " << K;
    

    return 0;
}