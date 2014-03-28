/* programa: RMJJ#171
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
Programa que calcula la suma de los numeros enteros hasta n.
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
    double s;
    Titulos(171);
    cout<<"\nPrograma que calcula la suma de 'n' n\243mero enteros.";
    cout<<"\n\nIngrese el valor de n: " && cin>>n;
   // system("cls");
    
	if(n<0) n=n*-1;  
	if(n==0) cout<<"\nSuma = 0";
	 else{
	    s=n;
		cout<<"\nSuma = ";
		while(j<n){
			cout<<j<<" + ";
			s=s+j;
			j++;
			}
	cout<<n<<" = "<<s;
		}
cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	} 
