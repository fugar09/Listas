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
	cout << "Crear una lista l con los valores, 2,3,6,7" << endl;
	l.insertarFinal(new ElementoInt(2));
	l.insertarFinal(new ElementoInt(3));
	l.insertarFinal(new ElementoInt(6));
	l.insertarFinal(new ElementoInt(7));
	cout << "La lista l es: " << l << endl;
	cout << endl;
	
	cout << "Insertar el elemento 12, al inicio" << endl;
	l.insertarInicio(new ElementoInt(12));
	cout <<"La lista l es: "<< l << endl;
	cout << endl;

	cout << "Insertar el elemento 67, en la posicion 2" << endl;
	l.insertar(new ElementoInt(67), 2);
	cout << "La lista l es: " << l << endl;
	cout << endl;

	cout << "Remover el elemento del final" << endl;
	l.removerFinal();
	cout << "La lista l es: " << l << endl;
	cout << endl;

	cout << "Remover el elemento del inicio" << endl;
	l.removerInicio();
	cout << "La lista l es: " << l << endl;
	cout << endl;

	cout << "Remover el elemento de la posicion 2" << endl;
	l.remover(2);
	cout << "La lista l es: " << l << endl;
	cout << endl;

	system("pause");
	return 0;

}

