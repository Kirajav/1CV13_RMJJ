/* programa: RMJJ07
   nombre: Ramírez Magaña Juan Javier
   grupo:1CV13
   fecha: 30 de agosto de 2012
   Comentario: Conociendo los lados de un triángulo rectángulo, calcular el 
   tercer lado C del triángulo. Sabemos que el radio del círculo inscrito dentro
   de un triángulo está definido por: R=((s(s-a)(s-b)(s-c))^(1/2))/s | s=(1/2)*(a+b+c) 
*/
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;
int main (void)
{
    float a,b,c,s,r;
    cout<<"Programa: RMJJ07"<<endl;
    cout<<"Alumno: Ram\241rez Maga\244a Juan Javier"<<endl;
    cout<<"Grupo: 1CV13"<<endl;
    cout<<"Fecha: 28 de Agosto del 2012\n"<<endl;
    cout<<"Programa que calcula el radio del c\241rculo inscrito en un tri\240ngulo rect\240ngulo y la hipotenusa del mismo."<<endl;
	cout<<"\nPresione una tecla para continuar...\n"<<endl;
	getch();
	cout<<"Ingrese el valor del cateto a: " && cin>>a;
    cout<<"Ingrese el valor del cateto b: " && cin>>b;
    cout<<"\nLos valores utilizados son:"<<endl;
    cout<<"\n\tcateto a = "<<a<<setw(15)<<"cateto b = "<<b<<endl;
    
    c=sqrt(pow(a,2)+pow(b,2));
    s=(a+b+c)/2;
    r=(sqrt(s*(s-a)*(s-b)*(s-c)))/s;
    
    cout<<"\nResultados:\n\n\tHipotenusa = "<<c<<endl;
    cout<<"\tS = "<<s<<endl;
    cout<<"\tRadio del c\241rculo= "<<r<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
    getch();
    }
