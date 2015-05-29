#pragma once

#include "Elemento.h"
using namespace std;

class Lista {

	friend ostream & operator<<(ostream &, Lista &);

private:
	Elemento* inicial;
	Elemento* final;
	int contador;

public:
	Lista();
	virtual ~Lista();
	bool listaVacia();
	void insertarFinal(Elemento*);
	void imprimir(ostream&);
};

ostream & operator<<(ostream &, Lista &);