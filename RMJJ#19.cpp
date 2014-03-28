/* programa: RMJJ#19
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
Programa que calcula la suma y promedio de 10 números enteros.
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
	int opc;
	float b, a, area, rad, x, y;
	
    do{
		system("cls");
		Titulos(19);
		cout<<"\nPrograma que realiza las siguientes operaciones matem\240ticas."<<endl;
		cout<<"\nMen\243 de Opciones:\n"<<endl;
		cout<<"\t1.- Area de un Rect\240ngulo."<<endl;
		cout<<"\t2.- Area de un Tri\240ngulo."<<endl;
		cout<<"\t3.- Area de un C\241rculo."<<endl;
		cout<<"\t4.- Convertir coordenadas Polares a Rectangulares."<<endl;
		cout<<"\t5.- Convertir coordenadas Rectangulares a Polares."<<endl;
		cout<<"\tSalir (presione una tecla)."<<endl;
		cout<<"\nElija la opci\242n deseada: " && cin>>opc;
		cout<<"\n"<<opc;
	}while(opc>5);
    system("cls");
    switch(opc){
    	case 1:
    		cout<<"\tArea de un rect\240ngulo"<<endl<<endl;
    		cout<<"Introd\243zca el valor de la base: " && cin>>b;
    		cout<<"Introd\243zca el valor de la altura: " && cin>>a;
    		area=b*a;
    		cout<<"El \240rea es: "<<area;
    		break;
    	case 2:
    		cout<<"\tArea de un tri\240ngulo"<<endl<<endl;
    		cout<<"Introd\243zca el valor de la base: " && cin>>b;
    		cout<<"Introd\243zca el valor de la altura: " && cin>>a;
    		area=(b*a)/2;
    		cout<<"El \240rea es: "<<area;
    		break;
    	case 3:
    		cout<<"\tArea de un c\241rculo"<<endl<<endl;
    		cout<<"Introd\243zca el valor del radio: " && cin>>a;
    		area=2*M_PI*a;
    		cout<<"El \240rea es: "<<area;
    		break;
    	case 4:
    		cout<<"\tConversi\242n de coordenadas Polares a Rectangulares."<<endl<<endl;
    		cout<<"Introd\243zca el valor del radio: " && cin>>b;
    		cout<<"Introd\243zca el valor del \240ngulo: " && cin>>a;
    		rad=(a*M_PI)/180;
    		x=b*cos(rad);
    		y=b*sin(rad);
    		cout<<"\n\tX= "<<x<<"\tY= "<<y;
    		break;
    	case 5:
    		cout<<"\tConversi\242n de coordenadas Rectangulares a Polares."<<endl<<endl;
    		cout<<"Introd\243zca el valor de X: " && cin>>x;
    		cout<<"Introd\243zca el valor de Y: " && cin>>y;
    		b=sqrt(pow(x,2)+pow(y,2));
			a=atanf(y/x);
    		cout<<"\n\tRadio= "<<b<<"\t\240ngulo= "<<a;
    		break;
    	default:
    		cout<<"Adios!";
    		exit(0);
    			
    }
    	
    getch();
    return(0);
    
}
   
