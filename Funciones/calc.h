#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>

using namespace std;
void calc(){
	float a,b,c,x,y;
	cout<<"Programa que calcula las siguientes funciones: x=a*b^2; y=x-c^(1/2)."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
    getch();
	cout<<"Ingrese el valor de a: " && cin>>a;
    cout<<"Ingrese el valor de b: " && cin>>b;
    cout<<"Ingrese el valor de c: " && cin>>c;
    printf("\nLos valores utilizados son:\n\n");
    cout<<"\ta= "<<a<<setw(10)<<"b= "<<b<<setw(10)<<"c= "<<c<<endl;
    x=a*pow(b,2);
    y=x-sqrt(c);
    cout<<"\nResultados:"<<endl;
	cout<<"\n\tx= "<<x<<setw(8)<<"y= "<<y<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
}
