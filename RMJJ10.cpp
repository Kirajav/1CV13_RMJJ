/* programa: RMJJ10
   nombre: Ramírez Magaña Juan Javier
   grupo:1CV13
   fecha:25 de agosto de 2012
   comentarios: Programa que calcula la suma de dos vectores o también llamado 
   "el vector resultante", a demás del ángulo que forma con respecto a un vector. 
*/
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

#define PI 3.1415926
using namespace std;
int main (void)
{
    int v1,v2,a;
    float r,b,arad;
    //cout.setf(ios::fixed);
    //cout.precision(5);
    cout<<"Programa: RMJJ10"<<endl;
    cout<<"Alumno: Ram\241rez Maga\244a Juan Javier"<<endl;
    cout<<"Grupo: 1CV13"<<endl;
    cout<<"Fecha: 31 de Agosto del 2012\n"<<endl;
    cout<<"Programa que calcula el vector resultante de dos vectores."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
    getch();
    cout<<"Ingrese el m\242dulo del vector 1: " && cin>>v1;
    cout<<"Ingrese el m\242dulo del vector 2: " && cin>>v2;
    cout<<"Ingrese el \240ngulo entre los vectores: " && cin>>a;
    printf("\nLos valores utilizados son: \n");
    cout<<"\n\tv1= "<<v1<<setw(8)<<"v2= "<<v2<<setw(12)<<"\240ngulo= "<<a<<endl;
    
	arad=(a*PI)/180;
	r=sqrt(pow(v1,2)+pow(v2,2)+2*v1*v2*cos(arad));
    b=atan((v2*sin(arad))/(v1+v2*cos(arad)));
    b=(b*180)/PI;

    cout<<"\nResultado:\n\n\tResultante= "<<r<<"\n\t\xB5ngulo á= "<<b<<endl;
    cout<<"\n\nPresione una tecla para finalizar..."<<endl;
    getch();
    }
