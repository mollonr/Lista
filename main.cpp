#include <iostream>
#include <cassert>
#include "List.h"

using std::cout;

int main ()
{
	List a;
	cout << "Hello world!" << endl;
	
	agregar(a, 1);
	assert(a.level != 0);
	agregar(a, 4);
	agregar(a, 6);
	agregar(a, 7);
	agregar(a, 9);
	agregar(a, 13);	
	agregar(a, 14);	
	agregar(a, 17);	
	agregar(a, 25);	
	agregar(a, 45);
	
	assert(a.front != nullptr);
	imprimirLista(a);
	
	cout<<"\n\n";
	
	agregarOrdenado(a, 2);
	assert(a.level != 0);
	agregarOrdenado(a, 5);
	assert(a.rear->referencia != nullptr);
	agregarOrdenado(a, 3);
	agregarOrdenado(a, 0);
	assert(a.front != nullptr);
	assert(a.front->next != nullptr);
	assert(a.front->value == 0);
	assert(a.front->referencia == nullptr);
	agregarOrdenado(a, 46);
	assert(a.rear->value == 46);
	assert(a.rear->next == nullptr);
	assert(a.rear->referencia->value == 45);

	
	imprimirLista(a);
}
