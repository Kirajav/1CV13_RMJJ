/* programa: RMJJ#17
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
Programa que calcula: i^n utilizando un cliclo for.
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
	cout.setf(ios::fixed);
	cout.precision(0);
    int n, j;
    double i,i2,i3;
    
    do{
    system("cls");
    Titulos(17);
    cout<<"\nPrograma que calcula los valores de las potencias positivas de 'i' hasta un n\243mero 'n'";
    cout<<"\nValor de i (i se considerar\240 positivo): " && cin>>i;
    }while(n<0);    
    
//	p=i;
	
	if(n==0) cout<<"\ti^0 = 1";
	else{
    system("cls");
    cout<<"\n\ti\ti^2\ti^3"<<endl;
	for(j=1;j<=50;j++){
		i2=j*j;
		i3=j*j*j;
		cout<<"\t"<<j<<"\t"<<i2<<"\t"<<i3<<"\n";
		
		if((j%21)==0)
			{
			cout<<"\nMu\x82strame m\240s..."<<endl;
			system("PAUSE");
			}
    }
}
cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	} 
