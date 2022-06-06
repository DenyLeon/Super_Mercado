#pragma once
#include <iostream>

using namespace std;
class Personas {

protected: string nombres, apellidos,correo_electronico,fecha_ingreso;
		 int idclientes,nit,telefono,genero;



protected:
	Personas() {
	}

	Personas(int id,string nom, string ape,int n,int tel, string mail,string fech,int gen) {

		idclientes = id;
		nombres = nom;
		apellidos = ape;
		nit = n;
		telefono = tel;
		correo_electronico = mail;
		fecha_ingreso = fech;
		genero = gen;




	}
};

