#pragma once
#include<iostream>
#include "Persona.h"
using namespace std;

class Contacto
{
private:
	Persona** persona;
	int cantidad;
public:
	Contacto();
	~Contacto();

	void listar_contactos();
	void agregar_contacto(Persona* ppersona);
};

Contacto::Contacto()
{
	persona = nullptr;
	cantidad = 0;
}

Contacto::~Contacto()
{
	for (int i = 0; i < cantidad; i++)
	{
		delete persona[i];
	}

	if (persona != nullptr)
	{
		delete[] persona;
	}
}

void Contacto::agregar_contacto(Persona* ppersona)
{
	Persona** temporal = new Persona * [cantidad + 1];

	for (int i = 0; i < cantidad; i++)
	{
		temporal[i] = persona[i];
	}

	temporal[cantidad] = ppersona;

	cantidad = cantidad + 1;

	if (persona != nullptr)
	{
		delete[] persona;
	}

	persona = temporal;

}

void Contacto::listar_contactos()
{
	if (cantidad == 0)
	{
		cout << "No tienes contactos registrados" << endl;
		return;
	}

	cout << endl << "Nombre\tNumero" << endl;

	for (int i = 0; i < cantidad; i++)
	{
		cout << i << "\t" << persona[i]->getnombre() << "\t\t" << persona[i]->getnumero() << endl;
	}
}
