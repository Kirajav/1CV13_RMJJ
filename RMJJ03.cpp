/* programa: RMJJ03
   nombre: Ramírez Magaña Juan Javier.
   grupo: 1CV13
   fecha: 25 de agosto de 2012
   comentarios: calcular Rc (resistencia convinada) que se encuntra en un 
   circuito paralelo.
*/
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;
int main (void)
{
	float R1,R2,R3,Rc;
   	cout<<"Programa: RMJJ03"<<endl;
    cout<<"Alumno: Ram\241rez Maga\244a Juan Javier"<<endl;
    cout<<"Grupo: 1CV13"<<endl;
    cout<<"Fecha: 25 de Agosto del 2012\n"<<endl;
    cout<<"Programa que calcula la resistencia combinada (Rc) que se encuentra en un circuito paralelo."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
    getch();
    cout<<"Ingrese la resistencia 1: " && cin>>R1;
    cout<<"Ingrese la resistencia 2: " && cin>>R2;
    cout<<"Ingrese la resistencia 3: " && cin>>R3;
    printf("\nLas resistencias utilizadas son: \n");
    cout<<"\n\tR1= "<<R1<<setw(8)<<"R2= "<<R2<<setw(8)<<"R3= "<<R3<<endl;
    
	Rc=1/(1/R1+1/R2+1/R3);
	cout<<"\nResultado:\n\n\tRc= "<<Rc<<" (Ohms)"<<endl;
	getch();
}       
