#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    //PROGRAMA PARA TOMAR N NUMEROS, DOY UN NUMERO, Y QUE SE SUMEN HASTA ESE NUMERO
    /*
    cout<<" PROGRAMA PARA SUMA DE LOS PRIMEROS N NUMEROS "<<endl;

    int num =0, resultado = 0;

    cout<<" Ingrese un numero: ",cin>>num;

    for(int i = 0; i <num; i++){
            cout<<i<<" - ";
            resultado = resultado + i;
    }

    cout<<"\n La suma es: "<<resultado;
    */


    //PROGRMA PARA DIBUJAR UN CUADRADO CON *
    /*
    cout<<" PROGRAMA PARA DIBUJAR UN CUADRADO CON * "<<endl;

    int num =0;

    cout<<" Ingrese el numero de lados: ",cin>>num;

    for(int i = 0; i <num; i++){
            for(int j = 0; j<num; j++){
                cout<<"* ";
            }
            cout<<endl;

    }
    */

    /*
    //
    cout<<" PROGRAMA PARA DIBUJAR UN RECTANGULO CON * "<<endl;

    int ancho=0, altura=0;

    cout<<" Ingrese el ancho: ",cin>>ancho;
    cout<<" Ingrese la altura: ",cin>>altura;

    for(int i = 0; i <ancho; i++){
            for(int j = 0; j<altura; j++){
                cout<<"* ";
            }
            cout<<endl;

    }
    */

    /*

    **     ** **   ** ***  **   ***
     ** * **  *******  *   **   **
      ** **   **   ** ***  **** ***

    */


    // BUCLE WHILE
    /*
    while(){
        sentencias
    }
    */

    /*
    //HACER UN PROGRAMA PARA CONTAR HASTA 20
    int conta = 0;

    cout<<" PROGRAMA QUE CUENTA HASTA 2O "<<endl;
    while(conta<=20){
        cout<<conta<<" ";
        conta++;

    }
    */

    /*
    //HACER UN PROGRAMA PARA UNA CUNETA REGRESIVA
    cout<<" PROGRAMA DE CUENTA REGRESIVA "<<endl;
    int inicio = 0;
    cout<<" Ingrese el valor desde donde quiere hacer la cuenta: ",cin>>inicio;


    while(inicio>0){
        cout<<inicio<<" ";
        inicio--;

    }
    */
    /*

    //HACER UN PROGRAMA PARA UNA MOSTRAR LOS NUMEROS PARES HASTA N NUMEROS
    cout<<" PROGRAMA PARA UNA MOSTRAR LOS NUMEROS PARES HASTA N NUMEROS "<<endl;
    int num = 0;
    cout<<" Ingrese un numero: ",cin>>num;

    int i=0;
    while(i<num){
        cout<<i<<" ";
        i=i+2;

    }
    */

    /*
    //Do while
    //HACER UN PROGRAMA PARA  QUE MUESTRE LOS NUMEROS PARES HASTA UN NUMERMO INGRESADO
    cout<<" PROGRAMA PARA UNA MOSTRAR LOS NUMEROS PARES HASTA N NUMEROS "<<endl;
    int num = 0;

    do{
        cout<<"Ingrese un numero: ",cin>>num;

    }while(num>10 || num <1);

    */

    char opcion;
    float num1=0;
    float num2=0;
    float resultado=0;
    //PROGRMAA PARA HACER UN MENU CON DO WHILE Y SWITCH
    cout<<" CALCULADORA "<<endl;

    do{
            system("cls");
        cout<<endl;
        cout<<" Opciones:"<<endl;
        cout<<" a. Suma"<<endl;
        cout<<" b. Resta"<<endl;
        cout<<" c. Producto "<<endl;
        cout<<" d. Division"<<endl;
        cout<<" e. Salir"<<endl;
        cout<<" Ingrese la opcion: ",cin>>opcion;
        switch(opcion){
            case 'a':
                cout<<" Ingrese el primer numero: ";
                cin>>num1;
                cout<<" Ingrrse el segundo numero: ";
                cin>>num2;
                resultado=num1+num2;
                cout<<" Suma es: "<<resultado;
                cout<<endl;
            break;

            case 'b':
                cout<<" Ingrese el primer numero: ";
                cin>>num1;
                cout<<" Ingrese el segundo numero: ";
                cin>>num2;
                resultado=num1-num2;
                cout<<" Resta es: "<<resultado;
                cout<<endl;
                break;

            case 'c':{
                cout<<" Ingrese el primer numero: ";
                cin>>num1;
                cout<<" Ingrese el segundo numero: ";
                cin>>num2;
                resultado=num1*num2;
                cout<<" El producto es: "<<resultado;
                cout<<endl;
                break;
            }
            case 'D':{
                cout<<" Ingrese el primer numero: ";
                cin>>num1;
                cout<<" Ingrese el segundo numero: ";
                cin>>num2;
                resultado= num1/num2;
                cout<<resultado;
                cout<<endl;

                getch();
                break;
            }
            case 'e':{
                cout<<" Hasta pronto... "<<endl;
                getch();
                return 0;
                break;
            }
            default:{
                cout<<"La opcion ingresada no existe";
                break;
            }
        }
    }while(opcion>=1 || opcion<=5);


    return 0;
}
