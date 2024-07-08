#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n,j=0, A[999],I[999],P[999];
    double Porc,Prom;
    cout<<"Cuantos numeros quiere generar: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Ingrese el numero en el arreglo "<<i<<endl;
        cin>>A[i];
        if(A[i]>0){
            if(A[i]%2!=0){
            I[i]=A[i];
            P[i]=0;
            } else{ 
            P[i]=A[i];
            I[i]=0;
            }
        }
    }
    system("cls");
    cout<<"Los numeros Pares son: "<<endl;
    while(j<=n){
        if(P[j]!=0){
            cout<<P[j]<<endl;
        }
        j++;
    }
    cout<<"Los numeros Impares son: "<<endl;
    j=0;
    while(j<=n){
        if(I[j]!=0){
            cout<<I[j]<<endl;
        }
        j++;
    }
    return 0;
}