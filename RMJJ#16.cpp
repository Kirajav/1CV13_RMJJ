/* programa: RMJJ#16
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   fecha: 20 de Septiembre del 2012
   comentarios: Programa que realiza la conversión entre diferentes escalas de temperaturas.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<typeinfo>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(){
	char opt,s;
	float t,c;
	//cout.setf(ios::fixed);
    //cout.precision(5);
do{
	system("cls");
	Titulos(16);
	cout<<"Programa que realiza la conversi\242n entre diferentes escalas de temperaturas.\n"<<endl;
	cout<<"\n\tMENU DE OPCIONES\n"<<endl;
	cout<<"\nA) Grados Celcius a Fahrenheit."<<endl;
	cout<<"\nB) Grados Fahrenheit a Celcius."<<endl;
	cout<<"\nC) Grados Kelvin a Fahrenheit."<<endl;
	cout<<"\nD) Grados Fahrenheit a Kelvin."<<endl;
	cout<<"\nE) Grados Kelvin a Celcius."<<endl;
	cout<<"\nF) Grados Celcius a Kelvin."<<endl;
	cout<<"\nG) SALIR"<<endl;
	cout<<"\n\tSelecciona la opci\242n deseada: ";// && cin>>opt;
	opt=getche();
	}while(opt>'g');
	
//	system("cls");
	
	if(opt=='A' || opt=='a'){
		cout<<"\nA) Grados Celcius a Fahrenheit."<<endl;
		cout<<"\nIntroduce el valor de la temperatura: " && cin>>t;
		c=1.8*t+32;
		cout<<"\nEl valor de la temperatura es: "<<c<<" (\xA7 F)"<<endl;
		}
	else if(opt=='B'|| opt=='b'){
		cout<<"\nB) Grados Fahrenheit a Celcius."<<endl;
		cout<<"\nIntroduce el valor de la temperatura: " && cin>>t;
		c=(t-32)/1.8;
		cout<<"\nEl valor de la temperatura es: "<<c<<" (\xA7 C)"<<endl;
		}
	else if(opt=='C'|| opt=='c'){
		cout<<"\nC) Grados Kelvin a Fahrenheit."<<endl;
		cout<<"\nIntroduce el valor de la temperatura: " && cin>>t;
		c=t*(9/5)-459.67;
		cout<<"\nEl valor de la temperatura es: "<<c<<" (\xA7 F)"<<endl;
		}
	else if(opt=='D'|| opt=='d'){
		cout<<"\nD) Grados Fahrenheit a Kelvin."<<endl;
		cout<<"\nIntroduce el valor de la temperatura: " && cin>>t;
		c=(t+459.67)/1.8;
		cout<<"\nEl valor de la temperatura es: "<<c<<" (\xA7 K)"<<endl;
		}
	else if(opt=='E'|| opt=='e'){
		cout<<"\nE) Grados Kelvin a Celcius."<<endl;
		cout<<"\nIntroduce el valor de la temperatura: " && cin>>t;
		c=t-273.15;
		cout<<"\nEl valor de la temperatura es: "<<c<<" (\xA7 C)"<<endl;
		}
	else if(opt=='F'|| opt=='f'){
		cout<<"\nF) Grados Celcius a Kelvin."<<endl;
		cout<<"\nIntroduce el valor de la temperatura: " && cin>>t;
		c=t+273.15;
		cout<<"\nEl valor de la temperatura es: "<<c<<" (\xA7 K)"<<endl;
		}
	else{
		cout<<"Hasta luego!" <<endl;
		}
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}
	
	
