#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>

using namespace std;
void calc(float a, float b, float c){
	float x,y;
	cout<<"Programa que calcula las siguientes funciones: x=a*b^2; y=x-c^(1/2)."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
    getch();
	
    x=a*pow(b,2);
    y=x-sqrt(c);
    cout<<"\nResultados:"<<endl;
	cout<<"\n\tx= "<<x<<setw(8)<<"y= "<<y<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
}
