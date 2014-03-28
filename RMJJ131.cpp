/* programa: RMJJ131
   nombre: Ramírez Magaña Juan Javier
   grupo:1CV13
   fecha:13 de Septiembre del 2012
   comentarios: Programa que calcula la siguiente operación Total=(a^3)/(a*3) 
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<H:\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

double cubod(double);
int main(){
	double a,calculo;
	Titulos(131);
	cout<<"Programa que calcula la siguiente operaci\242n Total=(a^3)/(a*3)\n"<<endl;
	cout<<"Introduce el valor del n\243mero a: " && cin>>a;
	system("cls");
	calculo=cubod(a);
	cout<<"El valor del c\240lculo es: "<<calculo<<endl;
	getch();
	}
double cubod(double x){
	double M;
	M=pow(x,3)/(x*3);
	return(M);	
	}
