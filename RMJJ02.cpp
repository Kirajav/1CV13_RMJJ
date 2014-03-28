/* programa: RMJJ02
   nombre: Ramírez Magaña Juan Javier.
   grupo: 1CV13
   fecha: 23 de agosto de 2012
   comentarios: calcular la resistencia combinada de las resistencias 1,2,3, */

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main (void)
{
float rmenor,rmayor,area,circunferencia;
    rmayor=6;
    rmenor=4;
    area=3.1416*rmayor*rmenor;
    circunferencia=3.1416*sqrt(pow(rmayor+rmenor,2));
    cout<<"                      NOMBRE:Ramírez Magaña Juan Javier"<<endl;
    cout<<"                                 GRUPO:1CV13"<<endl;
    cout<<"                                  PRACTICA:02"<<endl;
    cout<<"Radio Menor:"<<rmenor<<endl;
    cout<<"Radio Mayor:"<<rmayor<<endl;
    cout<<"Area:"<<area<<endl;
    cout<<"circunferencia:"<<circunferencia<<endl;

getch();
}
