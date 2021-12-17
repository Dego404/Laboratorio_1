#include <iostream>
using namespace std;

int main(){  //Problema 2, mminima combinacion de Billetes y monedas a devolver
int md; int a; int b; int c; int d; int e; int f; int g; int h; int i; int j; int k; int l; int m;
int n; int o; int p; int q; int r; int s;int t;int x;int y;int z;
cout << "Ingrese el valor a devolver: "; cin>>md;
if(md >= 50000){
    a = md/50000; cout<<"En billetes de 50000 son: "<<a<<endl; b = (a*50000); c = (md-b);}
else{
    cout<<"No hay de vuelta "<<endl; c = md;}
if(c >=20000){
  b =c/20000;cout<<" En billetes de 20000 son: "<<b<<endl; x=(b*20000); d = (c-x);}
else{
    cout<<"No hay devuelta D:"<<endl; d = c;}
if(d>=10000){
  e = d/10000;cout<<("En billetes de 10000 son: ")<<e<<endl; f = (d-10000);}
else{
    cout<<"No hay devuelta"<<endl; f = d;}
if(f >=5000){
    g = f/5000; cout<<"En billetes de 5000 son: "<<g<<endl; h = (f-5000);}
else{
    cout<<"No hay devuelta"<<endl; h = f;}
if(h>=2000){
    i = (h/2000); cout<<"En billetes de 2000 son: "<<i<<endl; y =(i*2000); j = (h-y);}
else{
    cout<<"No hay devuelta"<<endl; j = h;}
if(j >=1000){
    k = (j/1000); cout<<"En Monedas de 1000 son: "<<k<<endl; l = (j-1000);}
else{
    cout<<"No hay devuelta"<<endl; l = j;}
if(l>=500){
    m = (l/500); cout<<"En monedas de 500 son: "<<m<<endl; n =(l-500);}
else{
    cout<<"No hay devuelta"<<endl; n = l;}
if(n>=200){
    o = (n/200); cout<<"En Monedas de 200 son: "<<o<<endl;z=(o*200); p = (n-z);}
else{
    cout<<"No hay devuelta"<<endl; p = n;}
if(p>=100){
    q = (p/100); cout<<"En monedas de 100 son: "<<q<<endl; r = (p-100);}
else{
    cout<<"No hay devuelta"<<endl; r = p;}
if(r>=50){
    s = (r/50); cout<<"En monedas de 50 son: "<<s<<endl; t = r-50;}
else{
    cout<<"No hay devuelta"<<endl; t=r;}

cout<<"Sobraron: "<<t<<endl;

return 0;
}
