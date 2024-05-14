#include <iostream> 
#include <cmath>
    float base=0, altura=0, area=0, perimetro=0, lado=0;
    using namespace std;
int main() {

    cout<<"\tBienvenido al programa que te permite obtener el área y el perimetro de un triángulo isoceles"<<endl;
    cout<<"\tIngresa la base"<<endl;
    cin>>base;
    cout<<"\tIngresa la altura"<<endl;
    cin>>altura;
    area = base*altura*0.5;
    lado= sqrt(((base*0.5)*(base*0.5)) + (altura*altura));
    perimetro=lado+base+lado;
    cout<<"El area del triangulo es:"<<area<<endl;
    cout<<"El perimetro del triangulo es:"<<perimetro;  

    return 0;
}
// convertidor de C a f
#include <iostream> 
    float gradoC=0, gradoF=0;
    using namespace std;
int main() {

    cout<<"Bienvenido al programa que te permite covertir los gradso C a F"<<endl;
    cout<<"\tIngresa los grados C a convertir"<<endl;
    cin>>gradoC;
    gradoF=(gradoC*1.8) + 32;
    cout<<"Los "<<gradoC<<"°C son "<<gradoF<<"°F";
    return 0;
}
//programa para determinar si un numero es par o impar
#include <iostream> 
#include <cmath> 
    int num, resultado;
    using namespace std;
int main() {

    cout<<"Bienvenido al programa que te permite conocer si un número es par o impar"<<endl;
    cout<<"\tIngresa el número"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"\tEl número: "<<num<<" es par"<<endl;
    }else{
        cout<<"\tEl número: "<<num<<" es impar"<<endl;
    }
}
#include <iostream> 
#include <cmath> 
    int num, resultado;
    using namespace std;
int main() {

    cout<<"Bienvenido al programa que te permite conocer si un número es + o -"<<endl;
    cout<<"\tIngresa el número"<<endl;
    cin>>num;
    if(num>0){
        cout<<"\tEl número: "<<num<<" es positivo"<<endl;
    }else if(num==0){
        cout<<"\tEl número: "<<num<<" es neutro"<<endl;
    } else{
        cout<<"\tEl número: "<<num<<" es negativo"<<endl;
    }
}
//|| es o && es y ! es negación
#include <iostream> 
    using namespace std;
int main() {
    char caracter;
    cout<<"Bienvenido al programa que te permite conocer si un caracter es letra, simbolo o numero"<<endl;
    cout<<"\tIngresa el caracter"<<endl;
    cin>>caracter;
    if(caracter>=48 &&caracter<58){
        cout<<"\tEl caracter: "<<caracter<<" es un numero"<<endl;
    } else if (caracter>=58 &&caracter<65){
        cout<<"\tEl número: "<<caracter<<" es simbolo"<<endl;
    } else if (caracter>=65 &&caracter<91){
        cout<<"\tEl número: "<<caracter<<" es una letra Mayuscula"<<endl;
    }
    else if (caracter>=91 &&caracter<97){
        cout<<"\tEl número: "<<caracter<<" es una letra simbolo"<<endl;
    }
       else if (caracter>=97 &&caracter<123){
        cout<<"\tEl número: "<<caracter<<" es una letra minuscula"<<endl;
    } else {
        cout<<"\tEl número: "<<caracter<<" es algo"<<endl;
}
}
