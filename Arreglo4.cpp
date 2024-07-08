#include <iostream>
#include <cstdlib>
using namespace std;
void multiplo(int, int);
int main(){
    int n, M;
    double Porc,Prom;
    cout<<"Cuantos numeros quiere generar: ";
    cin>>n;
    cout<<"Ingrese el multiplo que multiplicara: ";
    cin>>M;
    multiplo(M,n);
    return 0;
}

void multiplo(int M,int n){
    int A[999];
    for(int i=1; i<=n;i++){
        A[i]=M*i;
        cout<<A[i]<<" ";
    }
}