#include <iostream>
using namespace std;
int inver(int result);
bool pal(int n);
int main()
{int result, multipli, inv_result;
    int num;
    cout<<"Ingrese un numero: "; cin>>num;
    for(multipli=100; multipli=999;multipli+=1){

    }

    return 0;
}
int inver(int result){ // Invierte el numero
    int inv_result = 0;
    while(result >0){ //Ciclo para invertir un numero
        inv_result = inv_result + result % 10;
        inv_result = inv_result * 10;
        result /= 10;}
    inv_result/=10;
    return inv_result;
}
bool pal(int result){ // Retorna Verdadero Si el numero es Palindromo
    if(inver(result)==result){
    return true;
    }
    else{
    return false;
    }
        }
