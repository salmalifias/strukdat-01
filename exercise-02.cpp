/*
Author		: Salma Alifia Shafira
NPM			: 140810180058
Deskripsi	: Convert Celcius to Fahrenheit
Tahun		: 2019
*/

#include <iostream>
using namespace std;

float konversiFahrenheit(float temp){
    return temp*9/5+32;
}

int main()
{
    int celcius;
    cout << "Celcius    = ";
    cin >> celcius;
    float fahrenheit = konversiFahrenheit(celcius);
    cout << "temp is " << fahrenheit;
    return 0;
}
