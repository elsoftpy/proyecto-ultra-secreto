#include <iostream>

using namespace std;

bool menu(int*, int*, int*);
void suma(int, int, int*);
void resta(int, int, int*);
void multiplicacion(int, int, int*);
void division(int, int, int*);

/* comentario random en el proyecto */
int main()
{
    int x, y, z, operacion;

    if(menu(&x, &y, &z))
        cout << "El resultado es: " << x << endl;
    else
        cout << "Operacion incorrecta" << endl;
    system("pause");

    return 1;
}

bool menu(int* x, int* y, int* z){
    int operacion;
    bool resp = true;

    cout << "Ingrese el primer numero" << endl;
    cin >> *y;

    cout << "Ingrese el segundo numero" << endl;
    cin >> *z;

    cout << "Ingrese la operacion (Suma = 1, Resta = 2, Multiplicacion = 3, Division = 4)" << endl;
    cin >> operacion;

    switch (operacion)
    {
    case 1:
        suma(*y, *z, x);
        break;
    case 2:
        resta(*y, *z, x);
        break;
    case 3:
        multiplicacion(*y, *z, x);
        break;
    case 4:
        division(*y, *z, x);
        break;
    default:
        resp = false;
        break;
    }

    return resp;
}

void suma(int a, int b, int* c){
    *c =  a + b;
}

void resta(int a, int b, int* c){
    *c =  a - b;
}

void multiplicacion(int a, int b, int* c){
    *c =  a * b;
}

void division(int a, int b, int* c){
    if(b == 0)
        *c = 0;
    else
        *c =  a / b;
}