/*PROGRAMA:TQC22.cpp
  NOMBRE:TEJEDA QUINTO CRISTIAN 
  GRUPO:1C13V 
  OBJETIVO: Programa en C++ que sirve para imprimir en pantalla 365 numeros
  pseudo-aleatorios, en el rango de 5 a 35, simulando la temperaturas comunes,
  ademas de sumar dichos numeros y sacar un promedio de ellos.
*/

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
#include<time.h>
#include<C:\1CV13_RMJJ\Funciones\Todas.h>
int main (void)
{
    int R, i, S, P, S1, P1, S2, P2;
    i=1;
    srand(time(NULL));
    S=0;S1=0;
    Titulos(22);
    cout<<endl<<endl<<endl;
    while (i<366)
{
    R=rand()%31+5;
    cout<<setw(10)<<R;
    S=S+R;
    i++;
 
    if (i<=183)
    {
      S1=S1+R;
      P1=S1/183;        
    }   
    else {
    	S2=S2+R;
    	P2=S2/182;
    }
    P=S/i;
}
    cout.setf(ios::fixed);
    cout.precision(3);
    cout<<"\n\n\nLa suma de los numeros es:"<<S<<endl<<endl<<endl;
    cout<<"El Promedio de la suma de los numeros es:"<<P<<endl<<endl;
    cout<<"La suma del primer semestre es:"<<S1<<endl<<endl;
    cout<<"El Promedio del primer semestre es:"<<P1<<endl<<endl;
    cout<<"La suma del segundo semestre es:"<<S2<<endl<<endl;
    cout<<"El promedio del segundo semestre es:"<<P2<<endl<<endl;
    cout<<"\n\n\t\t\tFIN";
    getch();
    return(0);
}
