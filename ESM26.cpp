#include<iostream>
//#include<conio>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include</Volumes/RECURSOS/1CV13_RMJJ/Funciones/Todas.h>
#define M 30

int main(void)
{
    int n,A[M],B[M],C[M];
    cout<<"ingrese el valor de n:";
    cin>>n;
    cout<<setw(8)<<"escribe el valor del arreglo A:"<<endl;
    leedatos(A,n);
    cout<<setw(8)<<"escribe el valor del arreglo B:"<<endl;
    leedatos(B,n);
    kalculo(A,B,C,n);
    system("pause");
    system("cls");
    titulos(26);
cout<<setw(10)<<"arreglo A:";   
escribedatos(A,n);
cout<<endl<<endl;
cout<<setw(10)<<"arreglo B:";   
escribedatos(B,n);
cout<<endl<<endl;
cout<<setw(10)<<"arreglo C:";   
escribedatos(C,n);
    getch();
    return(0);
}
