/* programa: RMJJ#151
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   fecha: 20 de Septiembre del 2012
   comentarios: Programa que indica el orden en que se encuentran 3 valores a,b,c.
   a	b	c
   5	10	15
   8	4	12
   5	10	6
   10	8	12
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<H:\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(){
	float a,b,c;
	Titulos(151);
	cout<<"Programa que indica el orden en que se encuentran 3 valores a,b,c.\n"<<endl;
	cout<<"Introduce el valor del n\243mero a: " && cin>>a;
	cout<<"Introduce el valor del n\243mero b: " && cin>>b;
	cout<<"Introduce el valor del n\243mero c: " && cin>>c;
	system("cls");
	if(a>b && b>c){
		cout<<"\nLos valores:\n\n\t"<<a<<setw(8)<<b<<setw(8)<<c<<"\n\nEst\240n en orden descendente."<<endl;
		}
	else if(a<b && b<c){
		cout<<"\nLos valores:\n\n\t"<<a<<setw(8)<<b<<setw(8)<<c<<" \n\nEst\240n en orden ascendente."<<endl;
		}
	else{
		cout<<"\nLos valores:\n\n\t"<<a<<setw(8)<<b<<setw(8)<<c<<"\n\nEst\240n en desorden."<<endl;
		}
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}
	
