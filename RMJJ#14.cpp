/* programa: RMJJ#14
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   fecha: 20 de Septiembre del 2012
   comentarios: Programa que calcula la siguiente operación x=(a*b)/c; si a>0 
   entonces a=10.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<H:\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(){
	float a,b,c,x;
	Titulos(14);
	cout<<"Programa que calcula la operaci\242n x=(a*b)/c; si a>0 entonces a=10.\n"<<endl;
	cout<<"Introduce el valor del n\243mero a: " && cin>>a;
	cout<<"Introduce el valor del n\243mero b: " && cin>>b;
	cout<<"Introduce el valor del n\243mero c: " && cin>>c;
	system("cls");
	if(a>0){
		a=10;
		x=(a*b)/c;
		cout<<"Como a>10, entonces a=10"<<endl;
		cout<<"Los valores son:\n\n\ta= "<<a<<"\tb= "<<b<<"\tc= "<<c<<"\n\n\t   x= "<<x<<endl;
		}
	else{
		x=(a*b)/c;
		cout<<"Los valores son:\n\n\ta= "<<a<<"\tb= "<<b<<"\tc= "<<c<<"\n\n\t   x= "<<x<<endl;
		}
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}
	
	
