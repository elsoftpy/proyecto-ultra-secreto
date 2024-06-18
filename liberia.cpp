#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <iomanip>

using namespace std;

struct Libro {
	int id;
	string titulo;
	string autor;
	string editorial;
	int anio;
};

void imprimir(vector<Libro>);
struct Libro cargarLibro(int);

int main(){
	vector<Libro> libros;
	char cargar = 'S';
	int id = 0;
	
	while(cargar == 'S'){

		libros.push_back(cargarLibro(id));
				
		cout << "Desea cargar otro libro? [S]/[N]";
		cin >> cargar;
		cin.sync();

		id++;
	}
		
	imprimir(libros);
	
	system("pause");
	
	return 1;
}

Libro cargarLibro(int id)
{
	Libro libro;
	
	cout << "Ingrese el nombre del libro " << '\n';
	getline(cin, libro.titulo);
		
	cout << "Ingrese el autor del libro " << '\n';
	getline(cin, libro.autor);

	cout << "Ingrese la editorial del libro " << '\n';
	getline(cin, libro.editorial);
		
		
	cout << "Ingrese el anio de edicion " << '\n';
	cin >> libro.anio;
		
	return libro;
}

void imprimir(vector<Libro> l)
{
    cout << setfill('*') 
         << setw(15) << "Nombre del Libro" 
         << setw(15) << "Autor" 
         << setw(15) << "Editorial"
         << setw(10) << "Anio" 
         << endl;
	for(int i = 0; i < l.size(); i++){
		
		cout << setfill(' ') 
            << setw(15) << l[i].titulo 
            << setw(15) << l[i].autor
            << setw(15) << l[i].editorial
            << setw(15) << l[i].anio
            << endl;
	}
}
