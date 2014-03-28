/* programa: RMJJ04
   nombre: Ramírez Magaña Juan Javier
   grupo:1CV13
   fecha:25 de agosto de 2012
   comentarios:calcular la pendiente de la recta dada por dos puntos.
*/
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main (void)
{
float y1,y2,x1,x2,m,grad;  
    y1=10;
    y2=5;
    x1=10;
    x2=5;
    m=y2-y1/x2-x1;
    grad=tan(m)*180/3.1416;
cout<<"NOMBRE: Ramírez Magaña Juan Javier"<<endl;
cout<<                  "GRUPO: 1CV13"<<endl;
cout<<                      "PRACTICA: 04"<<endl;
cout<<"pendiente: "<<m<<endl;
cout<<"grados: "<<grad<<endl;
getch();
}
