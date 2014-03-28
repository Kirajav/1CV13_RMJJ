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
#include<math.h>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(void){
    int R,i,suma,promedio;
    suma=0;
    i=1;
    while(i<=150)
    {
        R=rand()%11;
        suma=suma+R;
        cout<<setw(8)<<R;
        i++;}
    promedio=suma/i;
    cout<<"promedio:"<<promedio<<endl;
    cout<<"suma:"<<suma<<endl;
    cout<<"fin";
    getch();
    return(0);
}
