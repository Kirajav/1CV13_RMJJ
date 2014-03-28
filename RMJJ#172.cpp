/* programa: RMJJ#172
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
Programa que calcula el producto de 'n' números enteros.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;


int main(void){
	cout.setf(ios::fixed);
	cout.precision(0);
    int n, j=1;
    double p;
    
    do{
    system("cls");
    Titulos(171);
    cout<<"\nPrograma que calcula el producto de 'n' n\243meros enteros.";
    cout<<"\n\nIngrese el valor de n (menor que 35): " && cin>>n;
    }while(n>35 || n<0);
    
	if(n==0) cout<<"\nProducto = 1";
	
    else{
        p=n;
    	cout<<"\nProducto = ";
    	while(j<n){
    		cout<<j<<" * ";
    		p=p*j;
    		j++;
    		}
    	cout<<n<<" = "<<p;
    }
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	} 
