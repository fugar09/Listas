#include "stdafx.h"
#include "Lista.h"
#include "Elemento.h"


#define NULO 0

Lista::Lista()
{
	this->inicial = NULO;
	this->final = NULO;
	contador = 0;
}

bool Lista::listaVacia(){
	return this->final == NULO && this->inicial == NULO;
}

void Lista::insertarFinal(Elemento* elemento){
	if (listaVacia()){
		this->inicial = elemento;
		this->final = elemento;
	}
	else{
		this->final->siguiente = elemento;
		this->final = elemento;
	}
	contador++;
}

ostream & operator<<(ostream & out, Lista & l) {
	l.imprimir(out);

	return out;
}

void Lista::imprimir(ostream& out){
	Elemento* actual = this->inicial;
	while (actual->siguiente != NULO){
		out << *actual<<" ";
		actual = actual->siguiente;
	}
}

Lista::~Lista()
{
}
