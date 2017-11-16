#include <iostream>

using namespace std;

struct Nodo{
	Nodo *next = nullptr;
	Nodo *referencia = nullptr;
	int value;
};

struct List{
	Nodo *front = new Nodo;
	Nodo *rear = front;
	unsigned level = 0;
};

void agregar(List&, int);
void imprimirLista(const List&);
void agregarOrdenado(List&, int);

//Entregar en Git carpeta List con readme, .cpp, .h y test.
