#include <iostream>
using namespace std;
int fact(int); //Funcion para hallar el factorial de un numero
int main(){
    unsigned int s, i;// S guarda las sumas para la aproximacion, i es el numero factorial el cual hace la suma
    double e, u;
    cout<<"Escriba un numero: "; cin>>s;
    e=0; // Guarda el vvalor de la aproximacion
    for(i=0 ;i<s ;i++){
        u = fact(i); // Invocacion de Funcion Factorial
        e+=1/u; //  e+=1/fact(i)
    }
    cout<<"\nEl valor aproximado de e en base a su numero "<<s<<" es "<<e<<endl;
}
int fact(int f){
    int factorial=f;
    if(factorial>1){
        factorial = f*(f-1);
        return factorial;
    }
    else{
        return 1;
    }
}

//4!=4*3*2=24=4*(4-1)!
//3!=3*2
//n!=n*(n-1)!
