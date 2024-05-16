#include <iostream>
#include <string.h>

using namespace std;

int main()
{
jjkkjkj

    // TIPOS DE VARIBLES

    //bool //tipo de variable que devuelve un true y false
    //-nan significa no es un numero / estandar para no un numero

    //enum //están relacionado cno vectores, se llama enumerador

    //string // ingresa es una cadena de texto

    //-----------------------------------------------------------------------------

    /*
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;
    cout<<"                 PROGRAMA DE CALCULADORA  "<<endl;
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;

    double num1, num2; //el char sirve para ver que valor tiene en el código asci
    double resul = 0;

    cout<<" Ingrese el primer numero: ",cin>>num1;
    cout<<" Ingrese el primer dos: ",cin>>num2;

    resul = num1 / num2;

    cout<<" El resultado de la division es: "<<resul;

    */

    //-----------------------------------------------------------------------------
    //PROGRAMA QUE RECIBA LA BASE Y LA ALTURA DE UN TRAINGULO Y PERMITA OBTENER EL AREA Y EL PERIMETRO

    /*
    float base, altura, resulArea, resulPeri;

    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;
    cout<<"   PROGRAMA PARA CALCULAR AREA Y PERIMETRO DE UN TRIANGULO  "<<endl;
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;

    cout<<" Ingrese la base del triangulo: ", cin>>base;
    cout<<" Ingrese la altura del triangulo: ", cin>>altura;

    resulArea = (base * altura)/2;
    resulPeri = base + base + base;

    cout<<" El resultado del area del triangulo es: " <<resulArea<<"\n";
    cout<<" El resultado del perimetro del triangulo es: "<<resulPeri;

    */

    //-----------------------------------------------------------------------------
    //PROGRAMA QUE PERMITA REALIZAR CONVERSIONES DE GRADOS CENTRIGRADOS A FARENGEITH
    /*

    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;
    cout<<"       CONVERSION DE GRADOS CENTRIGRADOS A FAHRENHEIT     "<<endl;
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;

    double grado, fare, resul;
    fare=0;
    grado=0;

    cout<<"\n -----------------------------------------------------------"<<endl;
    cout<<"     Ingrese los grados centrigrados a convertir: ", cin>>grado;
    cout<<" -----------------------------------------------------------"<<endl;

    //OPERACION PARA REALIZAR EL CALCLULO
    fare = ((9*grado)/5) + 32;

    cout<<" -----------------------------------------------------------"<<endl;
    cout<<"    El resultado de "<<grado<<" C a fahrenheit es: "<<fare<<" F"<<endl;
    cout<<" -----------------------------------------------------------"<<endl;

    */

    //-----------------------------------------------------------------------------
    //PROGRAMA PARA DETERMINAR SI UN NUMERO ES PAR O IMPAR
    /*
    cout<<"  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;
    cout<<"     PROGRAMA PARA DETERMINAR SI UN NUMERO ES PAR O IMPAR     "<<endl;
    cout<<"  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;

    int num1;
    cout<<" Ingrese cualquier número entero: ",cin>>num1;

    //PROCESO CON CONDICION IF-ELSE
    if(num1%2 == 0 ){ //% = mod nos sirve para saber el valor del residuo de la division
        cout<<" El numero "<<num1<<" es par "<<num1<<endl;
    }else{
        cout<<" El numero "<<num1<<" es impar "<<endl;
    }
    */

    //-----------------------------------------------------------------------------
    //PROGRAMA PARA DETERMINAR SI UN NUMERO ES MAYOR O NEGATIVO
    //OPERADORES LOGICOS && = y, || = o , ! = no
    /*   Ejemplo valo1 == true &&,||,! valor2 >=30                                         */


    /*
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;
    cout<<"     PROGRAMA PARA DETERMINAR SI UN NUMERO ES POSITIVO O NEGATIVO     "<<endl;
    cout<<"  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;

    int num1;
    cout<<" Ingrese cualquier número entero: ",cin>>num1;

    //PROCESO CON CONDICION IF-ELSE
    if(num1>=0 ){ // = OPERADORES RELACIONALES != Es distinto
        cout<<" El numero "<<num1<<" es positivo "<<endl;
    }else{
        cout<<" El numero "<<num1<<" es negativo "<<endl;
    }
    */


    //-----------------------------------------------------------------------------
    //PROGRAMA PARA DETERMINAR SI UN CARACTER ES VOCAL O CONSONANTE

    cout<<"  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;
    cout<<"     PROGRAMA PARA DETERMINAR SI UN NUMERO CARACTER ES VOCAL O CONSONANTE    "<<endl;
    cout<<"  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  "<<endl;

    string letra;
    cout<<" Ingrese cualquier letra: ",cin>>letra;

    //PROCESO CON CONDICION IF-ELSE
    if(letra=="a" || letra =="e" || letra =="i" || letra=="i" || letra=="o" ){
        cout<<" La letra "<<letra<<" es una vocal "<<endl;
    }else{
        cout<<" La letra "<<letra<<" es una consonante "<<endl;
    }

    return 0;
}
