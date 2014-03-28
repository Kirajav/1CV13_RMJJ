/* programa: RMJJ#174
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
Programa que calcula la suma y promedio de 10 números enteros.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;


int main(void){
	//cout.setf(ios::fixed);
//	cout.precision(0);
    int n=3;
    Titulos(173);
    cout<<"\nPrograma que imprime 'n' n\243meros enteros impares entre 2 y 100.";
   // system("cls");
    
	cout<<"\n\nN\243meros impares del 2 al 100:\n";
	while(2<n && n<100){
		cout<<n<<"  ";
		n++;
		if((n%2)==0) n++;
		}
	
cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	} 
