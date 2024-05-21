//programa para sumar los primeros n numeros
#include <iostream>
using namespace std; 
int num_1, resultado=0,i;
int main() {
    cout<<"Bienvenido al programa que te permite sumar los primeros n numeros"<<endl;
    cout<<"Ingrese hasta que numero se desea sumar: ";
    cin>>num_1;
    for (i=0;i<=num_1;i++){
        cout<<i<<"-";
    resultado=resultado+i;
    }
    cout<<"\nLa suma es ="<<resultado;
    return 0;
}
//programa para dibujar un cuadrado con *
#include <iostream>
using namespace std; 
int lado, resultado=0,i,j;
int main() {
    cout<<"Cuadrado con *"<<endl;
    cout<<"Ingrese el tamaño del lado: ";
    cin>>lado;
    for (i=0;i<lado;i++){
        for(j=0;j<lado;j++){
            cout<<"*";
        }
    cout<<" "<<endl;
    }
    return 0;
}
//programa para dibujar un rectangulo con *
#include <iostream>
using namespace std; 
int altura,ancho, resultado=0,i,j;
int main() {
    cout<<"Rectangulo con *"<<endl;
    cout<<"Ingrese el altura: ";
    cin>>altura;
    cout<<"Ingrese el ancho: ";
    cin>>ancho;
    for (i=0;i<altura;i++){
        for(j=0;j<ancho;j++){
            cout<<"*";
        }
    cout<<" "<<endl;
    }
    return 0;
}
//programa para contar hasta el 20
//while(condicion){setencias}
#include <iostream>
using namespace std; 
int num_1,contador;
int main() {
    cout<<"Programa para contar numeros hasta el n numeros"<<endl;
    cout<<"Ingrese el numero: ";
    cin>>num_1;
    int contador=0;
    while(contador<=num_1){
        cout<<contador<<" ";
        contador++;
    }
    return 0;
}
//programa para contar hasta el 20
//while(condicion){setencias}
#include <iostream>
using namespace std; 
int num_1,inicial;
int main() {
    cout<<"Programa para una cuenta regresiva"<<endl;
    cout<<"Ingrese el valor inicial: ";
    cin>>num_1;
    int inicial=num_1;
    while(inicial>0 ){
        cout<<inicial<<" ";
        inicial--;
    } 
    return 0;
}
//programa para mostar los numeros pares hasta n numeros
//while(condicion){setencias}
#include <iostream>
using namespace std; 
int num_1,pares,i=0;
int main() {
    cout<<"Programa para conocer los numeros pares hasta un numero"<<endl;
    cout<<"Ingrese el numero ";
    cin>>num_1;
    while(i<num_1 ){
        cout<<i<<",";
        i=i+2;
    } 
    return 0;
}
//programa para mostar los numeros pares hasta n numeros
//do{setencias}while();
#include <iostream>
using namespace std; 
int num_1,pares,i=0;
int main() {
    do{
        cout<<"Ingresa un numero entre el 1 y 10"<<endl;
        cin>>num_1;
    }while(num_1>10 || num_1<0);
    return 0;
}
