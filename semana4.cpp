// Realizar un programa que imprima un menú y le pida al usuario su género (M, F)
// y su altura en centímeros, y mostrar si puede entrar en un juego mecánico que tiene una 
// restricción de aultura de 130 cm para mujeres y 140 para hombres.
#include <iostream>

using namespace std;

bool validaSexo(char);
bool validaAltura(int);
bool validaIngreso(char, int);


int main(){
    char sexo;
    int altura;
    bool invalido = true;

    while(true){
        while (invalido)
        {
            cout << "Ingrese su sexo [(M)asculino, (F)emenino] o S para Salir" << endl;
            cin >> sexo;

            if(sexo == 'S'){
                cout << "Adios!" << endl;
                return 1;
            }

            invalido = validaSexo(sexo);
        }
        invalido = true;
        
        
        while (invalido)
        {
            cout << "Ingrese su altura (en cm.)" << endl;
            cin >> altura;

            invalido = validaAltura(altura);    
            
        }
        
        invalido = true;

        if(validaIngreso(sexo, altura)){
            cout << "Usted puede ingresar" << endl;
        }else{
            cout << "Usted no puede ingresar" << endl;
        }
    }
}

bool validaSexo(char s){

    if(s == 'M' || s == 'F'){
        return false;
    }

    cout << "Opcion invalida" << endl; 
    return true;
}

bool validaAltura(int a){

    if(a > 0 & a < 230){
        return false;
    }

    cout << "La altura pude estar entre 1 y 230 cm." << endl; 
    return true;
}

bool validaIngreso(char sexo, int altura){
    if(sexo == 'M' & altura >= 140){
        return true;
    }

    if(sexo == 'F' & altura >= 130){
        return true;
    }

    return false;
}

