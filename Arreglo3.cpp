#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    string Dia[8]={"nada","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    double Menor,T,Tmed,MIN[8], MAX[8];
    for(int i=1;i<=7;i++){
    cout<<"Temperatura del dia "<<Dia[i]<<": "<<endl;
    cout<<"*LA TEMPERATURA MINIMA ES: "; cin>>MIN[i];
    cout<<"*LA TEMPERATURA MAXIMA ES: "; cin>>MAX[i];
    system("cls");
    }
    for(int i=1;i<=7;i++){
    cout<<"Temperatura media del "<<Dia[i]<<" es: ";
    Tmed=(MIN[i]+MAX[i])/2; cout<<Tmed<<endl; 
    if(MIN[i]<MIN[i+1]){
        Menor=MIN[i];
    }
    }
    cout<<"La menor temperatura es: "<<Menor<<endl;
    cout<<"Ingrese una temperatura: "; cin>>T;
    for(int i=1;i<=7;i++){  
    if(T==MAX[i]){
        cout<<"La temperatura maxima "<<MAX[i]<<" conincide con los dias: \n"; cout<<Dia[i]<<endl;  
    } else{
        cout<<"No hay ningun valor similar. "<<endl;
        }
    }
    return 0;
}