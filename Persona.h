#pragma once
#pragma once
#include<iostream>
using namespace std;

class Persona
{
private:
	string nombre;
	string numero;
public:
	Persona(string pnombre, string pnumero);
	~Persona();

	string getnombre();
	string getnumero();

	void setnombre(string valor);
	void setnumero(string valor);
};

//Implementacion

Persona::Persona(string pnombre, string pnumero)
{
	this->nombre = pnombre;
	this->numero = pnumero;
}

Persona::~Persona() {}

string Persona::getnombre()
{
	return this->nombre;
}

string Persona::getnumero()
{
	return this->numero;
}

void Persona::setnumero(string valor)
{
	this->numero = valor;
}

void Persona::setnombre(string valor)
{
	this->nombre = valor;
}