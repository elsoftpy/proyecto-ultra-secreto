#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

void addStack(Node *&, int);
void popStack(Node *&, int &);

int main()
{
    int num, opcion = 0;
    Node *node = NULL;
    //node.next = NULL;

    while (opcion != 3)
    {
        cout << "Elija una de las siguientes opciones:" << endl;
        cout << "1) Insertar un numero..." << endl;
        cout << "2) Mostrar la pila..." << endl;
        cout << "3) Salir" << endl;
        cin >> opcion;

        if (opcion == 1) 
        {
            fflush(stdin);
            cout << "Ingrese un valor para PILA" << endl;
            cin >> num;
            addStack(node, num);
            system("cls");
            cout << "Operacion exitosa" << endl << endl;
        }
        else if (opcion == 2)
        {
            if (node == NULL){
                system("cls");
                cout << "PILA VACIA" << endl << endl;
            }
            else
            {
                while (node != NULL)
                {
                    popStack(node, num);
                    
                    if(node != NULL){
                        cout << num << "->";    
                    }else{
                        cout << num << "." << endl;
                    }
                }
                
            }
        }
    }

    cout << "Hasta luego!" << endl;

    return 0;
}

void addStack(Node *&stack, int n)
{
    Node *newNode = new Node();
    newNode->val = n;
    newNode->next = stack;
    stack = newNode;
}

void popStack(Node *&stack, int &n)
{
    Node *aux = stack;
    n = aux->val;
    stack = aux->next;
    delete aux;
}
