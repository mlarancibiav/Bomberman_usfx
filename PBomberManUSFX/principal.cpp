#include <iostream>
#include "GameManager.h"
//#include "Bomber.h"
//#include "GameObject.h"
//#include "GameActor.h"
//#include "Detonador.h"

using namespace std;

int main() {
	GameManager* gm01 = new GameManager();
	

	//int* c = new int(4);
	//int* a = nullptr;
	//int b = 10;
	//cout << "Direccion de memoria donde esta b: " << &b << " El valor de la variable b:" << b << endl;
	//a = &b;

	//cout << "El valor que almacena la variable a: " << a << "El valor almacenado en la direccion que tiena a es:" << *a << endl;

	//*a = 999999;

	//cout << "------------------------------ - " << endl;
	//cout << "Direccion de memoria donde esta b: " << &b << " El valor de la variable b:" << b << endl;
	//cout << "El valor que almacena la variable a: " << a << "El valor almacenado en la direccion que tiena a es:" << *a << endl;



	//GameObject o1;
	/*
	GameActor a1("Pedro");
	GameActor a2;

	cout << "La posicion x es: " << a1.getPosicionX() << endl;
	cout << "El nombre del objeto a1 es: " << a1.getNombre() << endl;
	cout << "El nombre del objeto a2 es: " << a2.getNombre() << endl;*/


	/*Bomber JuanBombero;
	Bomber PedroBombero(10, 10, 5);

	int anchoImagen = JuanBombero.getAltoAvatar();
	int nv = JuanBombero.numeroVidas;

	cout << "Ancho imagen: " << anchoImagen << " Número vidas: " << nv << endl;
	cout << "Ancho imagen: " << JuanBombero.getAltoAvatar() << " Número vidas: " << JuanBombero.numeroVidas << endl;

	JuanBombero.setAltoAvatar(8);
	JuanBombero.setAnchoAvatar(8);

	cout << "Ancho imagen: " << anchoImagen << " Número vidas: " << nv << endl;
	cout << "Ancho imagen: " << JuanBombero.getAltoAvatar() << " Número vidas: " << JuanBombero.numeroVidas << endl;

	JuanBombero.mostrarInformacion();

	PedroBombero.mostrarInformacion();

	cout << "Primer paso rumbo a BomberMan" << endl;*/

	/*Detonador d1;

	d1.setHoras(5);
	d1.setMinutos(20);
	d1.setSegundos(10);

	while (d1.getEjecutado() != true) {
		d1.ReducirTiempo();
	}

	d1.Explotar();


	return 0;*/
}