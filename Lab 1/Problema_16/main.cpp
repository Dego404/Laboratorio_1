#include <iostream>

using namespace std;

int main()
{int k, i, j;
    cout<<"Ingrese un numero: "; cin>>k;
    i = 0;
    while(k>1){
           i +=1;
           if(k%2 ==0){
            k =k/2;}
           else{
            k = 3*k+1;}
    cout<<k<<endl;}
cout<<"\nLa serie tiene "<<i<<" terminos"<<endl;

    return 0;
}
