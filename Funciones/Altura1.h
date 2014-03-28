#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#define PI 3.1415926

using namespace std;
void Altura1(float v, float a){
	float angulo,vel2, Altura;
	a=(a*PI)/180;
    angulo=pow(sin(a),2);
    vel2=v*v;
    Altura=(vel2*angulo)/(2*9.81);    
    cout<<"\nLa altura m\240xima alcanzada por el proyectil es:\n\n\t"<<Altura<<"(m)"<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	}
