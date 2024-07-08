#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n,s=0,k=0, A[999];
    double Porc,Prom;
    cout<<"Cuantos numeros quiere generar: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Ingrese el numero en el arreglo "<<i<<endl;
        cin>>A[i];
        if(A[i]==0){
            k++;
        } else{
            s+=A[i];
        }
    }
    Prom=double(s)/n;
    Porc=(double(k)/n)*100;
    cout<<"El promedio es: "<<Prom<<endl;
    cout<<"El porcentaje de 0 es: "<<Porc<<endl;
    return 0;
}