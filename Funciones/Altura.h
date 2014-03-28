#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#define PI 3.1415926
using namespace std;

void Altura(){
	float a,v,angulo,vel2, Altura;
	cout<<"Programa que calcula la altura m\240xima de un proyectil."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
    getch();
	cout<<"Ingrese el valor de la velocidad inicial (m/s): " && cin>>v;
    cout<<"Ingrese el valor del \240ngulo de lanzamiento (grados): " && cin>>a;
    printf("\nLos valores utilizados son:\n\n");
    cout<<"\tVi= "<<v<<setw(10)<<"á= "<<a<<endl;
	a=(a*PI)/180;
    angulo=pow(sin(a),2);
    vel2=v*v;
    Altura=(vel2*angulo)/(2*9.81);    
    cout<<"\nLa altura m\240xima alcanzada por el proyectil es:\n\n\t"<<Altura<<"(m)"<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	}
