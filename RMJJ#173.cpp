/* programa: RMJJ#173
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
Programa que calcula la suma y promedio de 10 números enteros.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;


int main(void){
	//cout.setf(ios::fixed);
//	cout.precision(0);
    float n, j=1,s, p;
    Titulos(173);
    cout<<"\nPrograma que calcula la suma y promedio de 'n' n\243meros enteros.";
    cout<<"\n\nIngrese el valor de n: " && cin>>n;
   // system("cls");
    
	if(n<0) n=n*-1;  
	if(n==0) cout<<"\nPromedio = 0";
	 else{
	    s=n;
		cout<<"\nSuma = ";
		while(j<n){
			cout<<j<<" + ";
			s=s+j;
			j++;
			}
	p=s/j;
	cout<<n<<" = "<<s<<"\n\nPromedio = "<<p;
		}
cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	} 
