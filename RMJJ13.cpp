/* programa: RMJJ13
   nombre: Ramírez Magaña Juan Javier
   grupo:1CV13
   fecha:13 de Septiembre del 2012
   comentarios: Programa que calcula la siguiente operación Total=(a+b)/(a-b) 
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<H:\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int Func1(int, int);
int main(){
	int a,b,calculo;
	Titulos(13);
	cout<<"Programa que calcula la siguiente operaci\242n Total=(a+b)/(a-b)\n"<<endl;
	cout<<"Introduce el valor del n\243mero a: " && cin>>a;
	cout<<"Introduce el valor del n\243mero b: " && cin>>b;
	system("cls");
	calculo=Func1(a,b);
	cout<<"El valor del c\240lculo es: "<<calculo<<endl;
	getch();
	}
int Func1(int x, int y){
	int M;
	M=(x+y)/(x-y);
	return(M);	
		}
