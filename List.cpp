#include <iostream>
#include "List.h"

using std::cout;

void agregar(List& a, int x){
	if (a.level == 0){
		a.rear->value = x;
		++a.level;
	} else {
		Nodo *q = new Nodo;
		q->value = x;
		q->referencia = a.rear;
		a.rear->next = q;
		a.rear = q;
		a.level ++;
	}
}

void imprimirLista(const List& a){
	if (a.level > 0){
		Nodo *Cuco = a.front;
	
		for (unsigned j = 0; j < a.level; j ++){
			cout << Cuco->value <<"\n";
			Cuco = Cuco->next;
		}
	} else {
		cout<<"Lista vacia\n";
	}
	
}

void agregarOrdenado(List& a, int x){
	bool buleano = true;
	if (a.level != 0){
		Nodo *viejo = a.front;
		Nodo *nuevo = new Nodo;
		
		nuevo->value = x;
		unsigned nivel = 1;
		
		while (nivel <= a.level and nuevo->value > viejo->value){
			if(nivel < a.level){
				viejo = viejo->next;
			} else {
				buleano = false;
			}
			nivel++;
		}
		if (buleano){
			nuevo->next = viejo;
			if (nivel > 1){
				viejo->referencia->next = nuevo;
			} else {
				a.front = nuevo;
			}
			nuevo->referencia = viejo->referencia;
			viejo->referencia = nuevo;
			
			++a.level;
		}else{
			viejo->next = nuevo;
			nuevo->referencia = viejo;
			a.rear = nuevo;
			++a.level;
		}
	} else {
		a.rear->value = x;
		++a.level;
	}
}
