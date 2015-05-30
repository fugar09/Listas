// Listas_Arboles.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "Persona.h"
#include "Lista.h"


int _tmain(int argc, _TCHAR* argv[])
{


	srand(time(NULL));

	Lista l;

	l.insertarFinal(new ElementoInt(2));
	l.insertarFinal(new ElementoInt(3));
	l.insertarFinal(new ElementoInt(6));
	l.insertarFinal(new ElementoInt(7));
	l.insertarInicio(new ElementoInt(12));
	l.insertar(new ElementoInt(67), 2);
	cout << l << endl;

	l.removerFinal();
	cout << l << endl;

	l.removerInicio();
	cout << l << endl;

	l.remover(2);
	cout << l << endl;

	system("pause");
	return 0;

}

