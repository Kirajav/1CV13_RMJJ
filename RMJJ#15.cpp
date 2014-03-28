/* programa: RMJJ#15
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   fecha: 20 de Septiembre del 2012
   comentarios: Programa que imprime en pantalla "Aprobado" o "Reprobado", según 
   el rango de calificaciones.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(){
	float cal;
	Titulos(15);
	cout<<"Programa que imprime en pantalla 'Aprobado' o 'Reprobado', seg\243n la calificaci\242n.\n"<<endl;
	cout<<"Introduce la calificaci\242n: " && cin>>cal;
	system("cls");
	if(cal>5){
		cout<<"\n\t\tAPROBADO ! ! ! \n"<<endl;
		cout<<"\nEso es, as\241 se hace!!"<<endl;
		}
	else{
		cout<<"\n\t\tREPROBADO ! ! ! \n"<<endl;
		cout<<"Vamos, t\243 puedes! \n"<<endl;
		cout<<"Esfu\x82rzate m\240s!\n"<<endl;
		cout<<"Sigue estudiando!\n"<<endl;
		}
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}
	
	
