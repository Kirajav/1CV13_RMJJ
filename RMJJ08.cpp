/* programa: RMJJ08
   nombre: Ramírez Magaña Juan Javier
   grupo: 1CV13
   fecha: 30 de agosto de 2012
   comentarios: calcular la altura máxima que alcanza un proyectil 
   disparado con una velocidad y un cierto ángulo sobre la horizontal.
*/
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

#define PI 3.14159265 
using namespace std;
int main (void)
{
    float v,a,angulo,vel2, Altura;
    cout<<"Programa: RMJJ08"<<endl;
    cout<<"Alumno: Ram\241rez Maga\244a Juan Javier"<<endl;
    cout<<"Grupo: 1CV13"<<endl;
    cout<<"Fecha: 30 de Agosto del 2012\n"<<endl;
    cout<<"Programa que calcula la altura m\240xima de un proyectil."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
    getch();
	cout<<"Ingrese el valor de la velocidad inicial (m/s): " && cin>>v;
    cout<<"Ingrese el valor del \240ngulo de lanzamiento (grados): " && cin>>a;
    printf("\nLos valores utilizados son:\n\n");
    cout<<"\tá= "<<a<<setw(15)<<"Vi= "<<v<<endl;
    a=(a*PI)/180;
    angulo=pow(sin(a),2);
    vel2=v*v;
    Altura=(vel2*angulo)/(2*9.81);    
    cout<<"\nLa altura m\240xima alcanzada por el proyectil es:\n\n\t"<<Altura<<"(m)"<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
    getch();
    }
