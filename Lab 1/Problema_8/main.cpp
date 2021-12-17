#include <iostream>
using namespace std;
int main(){
int i,i2 , a, b , c, m1, m2,sum_m1, sum_m2, Tot_sum;
cout<<"Ingrese un numero: "; cin>>a;
cout<<"Ingrese un segundo numero: "; cin>>b;
cout<<"Ingrese un tercer numero: "; cin>>c;
i=0;
i2=0;
for(m1=a; m1<c; m1=m1+a){
    cout<<"Los multiplos de a son: "<<m1<<endl;
    i ++;
    sum_m1=((i*(i+1))*a)/2;}
for(m2=b; m2<c; m2=m2+b){
    cout<<"Los multiplos de b son: "<<m2<<endl;
    i2 ++;
    sum_m2=((i2*(i2+1))*b)/2;}
    cout<<"La suma de los multiplos de a es: "<<sum_m1<<endl;
    cout<<"La suma de los multiplos de b es: "<<sum_m2<<endl;
    Tot_sum=sum_m1+sum_m2;
cout<<"\nLa suma de los multiplos de a y b es: "<<Tot_sum<<endl;

return 0;
}


//Sumar los N-primerosmultiplos de un número = n(n+1)/2*p
//n = cant de numeros; p = es el numero de los multiplos
//
//Suma de multiplos consecutivos de un numero = (a+b)(n)/2
//a = Primer valor de la sucesion
//b = Es el ultimo valor de la Sucesion
//n = Numero de elementos consecutivos que se buscan
