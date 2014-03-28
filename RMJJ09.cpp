/* programa: RMJJ09
   nombre: Ramírez Magaña Juan Javier
   grupo: 1CV13
   fecha: 31 de agosto de 2012
   comentarios: Programa que calcula la circunferencia, el área de la superficie y el volúmen de la Tierra.
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
    float c,a,v;
    int r=6370000;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"Programa: RMJJ08"<<endl;
    cout<<"Alumno: Ram\241rez Maga\244a Juan Javier"<<endl;
    cout<<"Grupo: 1CV13"<<endl;
    cout<<"Fecha: 31 de Agosto del 2012\n"<<endl;
    cout<<"Programa que calcula la circunferencia, el \240rea de la superficie y el vol\243men de la Tierra."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
    getch();
    printf("\nEl valor del radio de la Tierra es: \n");
    printf("\n\tR = %i (m)\n",r);
    c=2*PI*r;
    a=4*PI*pow(r,2);
    v=(4*PI*pow(r,3))/3;  
    cout<<"\nResultados:"<<endl;
	cout<<"\n\tCirunferencia = "<<c<<" (m)\n \t\xB5rea = "<<a<<" (m^2)\n\tVol\243men = "<<v<<" (m^3)"<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
    getch();
    }
