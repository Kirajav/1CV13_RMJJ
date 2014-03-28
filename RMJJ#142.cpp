/* programa: RMJJ#142
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   fecha: 20 de Septiembre del 2012
   comentarios: Programa que calcula la raíz cuadrada del discriminante para la
   ecuación de la solución una ecuacione de segundo grado.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<H:\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(){
	float a,b,c,Disc,R;
	Titulos(142);
	cout<<"Programa que calcula la ra\241z cuadrada del discriminante de la ecuaci\242n para la resoluci\242n una ecuaci\242n de segundo grado.\n"<<endl;
	cout<<"Introduce el valor del n\243mero a: " && cin>>a;
	cout<<"Introduce el valor del n\243mero b: " && cin>>b;
	cout<<"Introduce el valor del n\243mero c: " && cin>>c;
	system("cls");
	Disc=pow(b,2)-(4*a*c);
	if(Disc>-1){
		R=sqrt(Disc);
		cout<<"Los valores son:\n\n\ta= "<<a<<"\tb= "<<b<<"\tc= "<<c<<"\n\n\tDiscriminante= "<<Disc<<"\tRa\241z= "<<R<<endl;
		}
	else{
		R=sqrt(-Disc);
		cout<<"Los valores son:\n\n\ta= "<<a<<"\tb= "<<b<<"\tc= "<<c<<"\n\nDiscriminante= "<<Disc<<"\tRa\241z= "<<R<<endl;
		cout<<"\nComo el discriminante es negativo, cambia a positivo."<<endl;
		}
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}
	
	
