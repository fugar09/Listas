// Listas_Arboles.cpp: define el punto de entrada de la aplicaci�n de consola.
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

	cout << l << endl;



	system("pause");
	return 0;

}

