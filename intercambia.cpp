#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
#include<C:\1CV13_RMJJ\Funciones\Todas.h>
#define M 80

using namespace std;

int main(void)
{
int A[M], B[M];
int i,n,j;
Titulos(27);
cout<<"Programa intercambia dos cadenas."<<endl;
cout<<"Escribe el numero de valores: "<<endl;
cin>>n;
cout<<"Escribe los valores: "<<endl;
for(i=0;i<n;i++)
	cin>>A[i];
for(i=n-1, j=0;i>=0;i--,j++){
	B[j]=A[i];
}
cout<<"La cadena original es:"<<endl;
for(i=0;i<n;i++)
cout<<setw(8)<<A[i];
cout<<"\n\nLa cadena nueva es: "<<endl;
for(i=0;i<n;i++)
cout<<setw(8)<<B[i];
getch();
return(0);
}


