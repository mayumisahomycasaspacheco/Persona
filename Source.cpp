#include <iostream>
#include "Contacto.h"
#include <conio.h>
#include <Windows.h>
using namespace std;
using namespace System;

void pareja(int x, int y)
{
	string lineas[8] = {
"          _",
"    mMm _[_]_",
"   /(_)\  (_)",
"  //)^(\\//:\\",
" /(/&@&\)\|~|/",
"/ /-~`~-\ |||",
"`/       \|||",
"`--------'-'--"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
}

int main() 
{
	int opcion;
	Contacto contacto;

	do
	{
		system("cls");

		SetConsoleOutputCP(65001);

cout << "█▀▀▀▀▀▀▀▀▀▄   ▄▀▀▀▀▀▀▀▀▀█ █▀▀▀▀▀▀▀▀▀▄  █▀▀▀▀▀▀▀▀▀▀▓  ▄▀▀▀▀▀▀▀▀▄  █▀▀▀▀▀▀▀▀▀▄   ▄▀▀▀▀▀▀▀▀▀█" << endl;
cout << "▀    ▄▄  ∙ █ █·   ▄▄▄▄▄▄█ ▀    ▄▄  ∙ █ ▀    ▄▄▄ ∙ ▒ ▀    ▄▄ .  █ ▀    ▄▄    █ █   .▄▄   ∙▀" << endl;
cout << "▓    ▓▄▌   ▓ ▓  . ▓▄▄▄▄▄▄ ▓    ▓▄▌   ▓ ▓    ▓ ▀▀▀▀▀ ▓    ▓ ▌   ▓ ▓    ▓ ▌   ▓ ▓    ▐▄▌.  ▓" << endl;
cout << "▒   ·▄▄▄▄▄▀  ▒ ∙  ▄▄▄▄▄▄▒ ▒   ·▄▄▄  ▀▄ ░▄▄▄ ▀▀▀▀▀▀▒ ▒  · ▒ ▓   ▒ ▒    ▒ ▒ · ▒ ▒∙ . ▄▄▄   ▒" << endl;
cout << "░ .  ░       ░    ░▄▄▄▄▄▄ ░ .  ░ ░  .░ ▄▄▄▄▄  ▒  .░ ░    ░▄░·. ░ ░   ∙░ ░   ░ ░    ░ ░  ·░" << endl;
cout << "█    █       █    .    ·█ █    █ █∙  █ ▓   ▀▀▀▀∙  █ █   .      █ █ ∙  █ █   █ █ .  █ █   █" << endl;
cout << "█▄▄▄▄█       █▄▄▄▄▄▄▄▄▄▄█ █▄▄▄▄█ █▄▄▄█ ░▄▄▄▄▄▄▄▄▄▄█  ▀▄▄▄▄▄▄▄▄▀  █▄▄▄▄█ █▄▄▄█ █▄▄▄▄█ █▄▄▄█" << endl;

        SetConsoleOutputCP(437);

		cout << " " << endl;
		cout << "Contacts on a console? Yes, now with Persona you can save and list the ones that matter most to you." << endl;
		cout << " " << endl;

        cout << "==========MENU==========" << endl;

		cout << "1. List contacts" << endl;
		cout << "2. Add contacts" << endl;
		cout << "3. Exit" << endl;
		cout << "Choose an option: ";

		int cursorX = Console::CursorLeft;
		int cursorY = Console::CursorTop;

		pareja(72, 18);

		Console::SetCursorPosition(cursorX, cursorY);

		cin >> opcion;

		if (opcion == 2)
		{
			system("cls");

			string nombre;
			string numero;

			cout << "Name of your contact: " << endl;
			cin >> nombre;
			cout << "Number of your contact: " << endl;
			cin >> numero;

			Persona* ppersona = new Persona(nombre, numero);
			contacto.agregar_contacto(ppersona);
			cout << "Added contact" << endl;

			system("pause");
		}

		else if (opcion == 1)
		{
			system("cls");

			contacto.listar_contactos();

			system("pause");
		}

		else
		{
			cout << "Closing the program ..." << endl;
			system("pause");
		}
	}

	while (opcion != 3);

	_getch();
	return 0;
}