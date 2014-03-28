/* programa: RMJJ#161
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   comentarios: Programa que calcula una función 'y' de acuerdo a sus intervalos
   del dominio.
*/

#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(){
	float y,t,rad;
	cout.setf(ios::fixed);
    cout.precision(6);
	Titulos(16);
	cout<<"Programa que calcula una funci\242n 'y' de acuerdo a intervalos de 't'\n"<<endl;
	cout<<"Ingresa el valor de t: \n\tt= " && cin>>t;
	system("cls");
	cout<<"La funci\242n para t= "<<t<<" es:\n\n";
	if(t<-5)
		{
		cout<<"\ty=t^2";
		y=pow(t,2);
		}
	else if(t>=-5 && t<5)
		{
		cout<<"\ty=(e^t)-1";
		y=pow(M_E,t)-1;
		}
	else if(t>=5 && t<10)
		{
		cout<<"\ty=sen(t/3)";
		rad=((t/3)*M_PI)/180;
		y=sin(rad);
		}
	else if(t>=10)
		{
		cout<<"\ty=t-1";
		y=t-1;
		}
/*	else
		{
		cout<<"No reconozco ese valor..." <<endl;
		}*/
	cout<<"\n\nEl valor de y es: "<<y<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
}

	
