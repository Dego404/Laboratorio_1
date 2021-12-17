#include <iostream>
using namespace std;

int main()
{int k, i=0,z=0,i2, res, num_div = 0;
cout << "Inserte un numero: "; cin >> k;
    do{
    i++;
    z=(i*(i+1))/2;}while (k>z);
if (k==z){
    for(i2=1; i2<=k; i2+=1){
        res = k%i2;
        if(res==0){
            num_div +=1;
        }
    }
cout << "El numero "<<k<<" es triangular"<<"y tiene"<<num_div<<"divisores"<<endl;}
else{
    for(i2=1; i2<=z; i2+=1){
        res = z%i2;
        if(res==0){
            num_div +=1;
        }
    }
    cout << "El numero triangular mas cercano es "<<z<<" y tiene "<<num_div<<" divisores"<<endl;}
    return 0;
}
