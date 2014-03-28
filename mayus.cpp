#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
#include<C:\1CV13_RMJJ\Funciones\Todas.h>
#define M 80

using namespace std;


int main(void)
{
char A[M], MAYUS[M], minus[M];
int i=0, tam;
Titulos(27);
cout<<"Programa que cambia una cadena de caracteres a mayusculas y minusculas."<<endl;

cout<<"Escribe algo:"<<endl;
gets(A);
tam=strlen(A);
A[tam]=NULL;
MAYUS[tam]='\0';
minus[tam]='\0';
while(i<tam){ 
	MAYUS[i]=toupper(A[i]);
	minus[i]=tolower(A[i]);
	i++;
	}
cout<<"El tamaño de la cadena es: "<<tam<<endl;
cout<<"El texto en mayusculas es: "<<endl;
puts(MAYUS);
cout<<"El texto en minusculas es: "<<endl;
puts(minus);
getch();
return(0);
}


