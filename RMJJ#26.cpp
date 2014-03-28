#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<K:\1CV13_RMJJ\Funciones\Todas.h>
#define M 30

using namespace std;
int main(void)
{
    int n,a[M],b[M],c[M];
    Titulos(26);
    cout<<"ingrese el valor de n:";
    cin>>n;
    cout<<setw(8)<<"Escribe el valor del arreglo A:"<<endl;
    Leerdatos(a,n);
    cout<<setw(8)<<"Escribe el valor del arreglo B:"<<endl;
    Leerdatos(b,n);
    cout<<setw(8)<<"Escribe el valor del arreglo C:"<<endl;
    Leerdatos(c,n);
    Calculo(a,b,c,n);
    system("pause");
    system("cls");
    Titulos(26);
cout<<setw(10)<<"arreglo A:";   
Escribirdatos(a,n);
cout<<endl<<endl;
cout<<setw(10)<<"arreglo B:";   
Escribirdatos(b,n);
cout<<endl<<endl;
cout<<setw(10)<<"arreglo C:";   
Escribirdatos(c,n);
    getch();
    return(0);
}
