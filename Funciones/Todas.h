#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

void Titulos(int n){
	cout<<"\tNombre: Ram\241rez Maga\244a Juan Javier"<<endl;
	cout<<"\tGrupo: 1CV13  Boleta: PE13019414"<<endl;
	cout<<"\tPrograma N\243mero "<<n<<"\n"<<endl;
	}
void Leerdatos(int Q[], int j){
     int i;
     for(i=0;i<j;i++)
             cin>>Q[i];
     }

void Escribirdatos(int Q[],int j){
     int i;
     for(i=0;i<j;i++)
     cout<<Q[i]<<setw(8);
     }
void Calculo(int A[],int B[],int C[],int j){
     int i;
     for(i=0;i<j;i++)
     C[i]=A[i]+B[i];
     
     }
