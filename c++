#include <iostream> 
    float base=0, altura=0, area=0, perimetro=0, lado=0;
    using namespace std;
int main() {

    cout<<"\tBienvenido al programa que te permite obtener el área y el perimetro de un triángulo isoceles"<<endl;
    cout<<"\tIngresa la base"<<endl;
    cin>>base;
    cout<<"\tIngresa la altura"<<endl;
    cin>>altura;
    area = base*altura*0.5;
    perimetro=(base*0.5);//pitagoras
    cout<<"El area del triangulo es:"<<area;
    cout<<"El perimetro del triangulo es:"<<perimetro;
    
    
    
    

    return 0;
}
