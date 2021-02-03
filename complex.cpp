// This is an example on how to use complex.

#include <iostream>
#include "complex.hpp"


using namespace std;


int main(){
cout<<"=======Begin=======\n"<<endl;

complex z=0.;
z=8+3.*Imag;
double n=3.;

cout<<n<<"^("<<z<<") = "<<pow(n,z)<<endl;

cout<<"("<<z<<")^"<<n<<" = "<<pow(z,n)<<endl;

cout<<"("<<z<<")^"<<"("<<z<<") = "<<pow(z,z)<<endl;

cout<<"e^"<<"("<<z<<") = "<<exp(z)<<endl;

cout<<"arg"<<"("<<z<<") = "<<arg(z)<<endl;

cout<<"sqrt"<<"("<<z<<") = "<<pow(z,0.5)<<endl;


cout<<endl<<"=======End=======\n"<<endl;
return 0;
}
