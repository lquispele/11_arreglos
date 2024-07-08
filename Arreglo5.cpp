#include <iostream>
using namespace std;
int main(){
    int n, k;
    string F[9999], P[9999];
    cout<<"Cuantos alumnos hay en FP: \n";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<"Ingrese el nombre del estudiante "<<i<<" en el aula de FP: "; cin>>F[i];
    }
    cout<<"Cuantos alumnos hay en PG: \n";
    cin>>k;
    for(int i=1;i<=k;i++){
    cout<<"Ingrese el nombre del estudiante "<<i<<" en el aula de PG: "; cin>>P[i];
    }
    cout<<"Los estudiantes repetidos son:";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(F[i]==P[j]){
            cout<<F[i]<<endl;
            }
        }
    }
return 0;
}