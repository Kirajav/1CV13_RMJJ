/* programa: RMJJ132
   nombre: Ramírez Magaña Juan Javier
   grupo:1CV13
   fecha:13 de Septiembre del 2012
   comentarios: Programa que calcula la siguiente operación Total=(a+b)/(a-b) desde una función en libreria
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<H:\1CV13_RMJJ\Funciones\Titulos.h>
#include<H:\1CV13_RMJJ\Funciones\Func1.h>

using namespace std;

int main(){
	float a,b,calculo;
	Titulos(132);
	cout<<"Programa que calcula la siguiente operaci\242n Total=(a+b)/(a-b), desde una funci\242n llamada desde librer\241a.\n"<<endl;
	cout<<"Introduce el valor del n\243mero a: " && cin>>a;
	cout<<"Introduce el valor del n\243mero b: " && cin>>b;
	system("cls");
	calculo=Func1(a,b);
	cout<<"El valor del c\240lculo es: "<<calculo<<endl;
	getch();
	return(0);
	}

