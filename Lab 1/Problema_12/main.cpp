#include <iostream>
using namespace std;
int main(){
int num; int facts;
cout<<"Ingrese un numero: "; cin>>num;
for(facts = 2; facts < num; facts ++){
    while(num % facts == 0){
        num /= facts;}
    if(num==1){
        break;}
}
cout<<"El maximo factor primo del numero ingresado es: "<<facts<<endl;
    return 0;
}
