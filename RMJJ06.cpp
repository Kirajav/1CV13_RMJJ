/* programa: RMJJ06
   nombre: Ramírez Magaña Juan Javier
   grupo:1CV13
   fecha:25 de agosto de 2012
   comentarios: 
*/

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main (void)
{
    float a,b,h,p,q,grados;
    a=3;
    b=4;
    grados=30;
    h=(sqrt(a*a+b*b));
    p=8.25*sin(30);
    q=2*sin(30)/a-b;
    cout<<"NOMBRE:Ramírez Magaña Juan Javier"<<endl;
    cout<<"GRUPO:1CV13"<<endl;
    cout<<"practica: 06"<<endl;
    cout<<"hipotenusa: "<<h<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"q: "<<q<<endl;
    getch();
}
