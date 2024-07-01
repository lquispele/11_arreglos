#include<iostream>
using namespace std;
int main(){
    int A[999];
    int n,i,k=0,S=0;
    float porc,prom;
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>A[i];
        if(A[i]==0){
            k++;
        }else{
            S+=A[i];
        }
    }
    prom=float(S)/n;
    porc=(float(k)/n)*100;
    cout<<"El promedio es: "<<prom<<endl;
    cout<<"El porcentaje de ceros es: "<<porc<<"% "<<endl;
}