#include <iostream>
#include <math.h>

using namespace std;

//Declaramos un ADT
typedef struct Circulo{
    float radio;
};

void calcularArea(Circulo&);

int main()
{
    system("color 0E");
    cout << "\n * *EJEMPLO ADT * *" << endl;
    Circulo c;
    calcularArea(c);
    return 0;
}
//Declaracion de la interfaz
void calcularArea(Circulo&){
    Circulo circulo;
    cout << "\n Radio: ";
    cin >> circulo.radio; //Colocamos el objeto creado
    cout << "\n Area: " << 3.1416 * pow(circulo.radio, 2) << endl;
}
