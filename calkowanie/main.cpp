#include <iostream>
using namespace std;

float f(float x)
{
    return x*x+1;
}

int main()
{
    float a=0;
    float b=0;
    int liczbaprost=0;
    
    
    cout << "Podaj liczbe poczatkowa: ";
    cin >> a;
    cout << endl << "Podaj liczbe koncowa: ";
    cin >> b;
    cout << endl << "Podaj liczbe prostokatow: ";
    cin >> liczbaprost;
    cout << endl;
    
    float d=(b-a)/liczbaprost;
    //f(x)=x^2 + 1
    float wynik=0;
    
    for (float i=a; i<b; i+=d) {
        wynik += (d*f(i+d/2));
    }
    
    cout << "wynik to: " << wynik << endl;
    
    return 0;
}
