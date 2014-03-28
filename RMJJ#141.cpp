/* programa: RMJJ#141
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   fecha: 20 de Septiembre del 2012
   comentarios: Programa que calcula la siguiente operación  X=(50-a)^(1/2); si a>50
   entonces a=50.
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
	float a,b,c,x;
	Titulos(141);
	cout<<"Programa que calcula la operaci\242n X=(50-a)^(1/2); si a>50 entonces a=50\n"<<endl;
	cout<<"Introduce el valor del n\243mero x: " && cin>>x;
	system("cls");
	if(x>50){
		x=50;
		a=sqrt(50-x);
		cout<<"Como X>50, entonces X=50"<<endl;
		cout<<"Los valores para la operaci\240n X=(50-a)^(1/2), son:\n\n\tx= "<<x<<"\t   a= "<<a<<endl;
		}
	else{
		a=sqrt(50-x);
		cout<<"Los valores para la operaci\240n X=(50-a)^(1/2), son:\n\n\tx= "<<x<<"\t   a= "<<a<<endl;
		}
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}
	
