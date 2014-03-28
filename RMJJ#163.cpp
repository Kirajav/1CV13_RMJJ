/* programa: RMJJ#163
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
Calcular el importe a pagar por el embarque de una unidad de embarques cotratadas.
Se aplica cargo fijo y % de descuento dependiendo del número de unidades
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
#include<\1CV13_RMJJ\Funciones\Todas.h>


using namespace std;

int main(void){
    
    float o,u, cargo, costo, imp;
    float desc, impt;
    
    Titulos(163);
    cout<<"\nPrograma que calcula el importe a pagar por el embarque unidades en una unidad de embarques cotratadas.";
    cout<<"\n\nNúmero de Orden: " && cin>>o;
    cout<<"\nIngrese las unidades a embarcarse: " && cin>>u;
    system("cls");
    
    if(u<100){
    cargo=250;
    costo=u*12;
    imp=costo+cargo;
    desc=.05*imp;
    impt = imp-desc;
       }
    if(u>=100 && u<=300){
    cargo=200;
    costo=u*10;
    imp=costo+cargo;
    desc=.08*imp;
    impt = imp-desc;                  
           
    }
    if(u>300){
    cargo=150;
    costo=u*8;
    imp=costo+cargo;
    desc=.10*imp;
    impt = imp-desc;
    }
    
	system("cls");
   cout<<"\n\tOrden #"<<o;
   cout<<"\n\nUnidades embarcadas: "<<u;
   cout.setf(ios::fixed);
   cout.precision(2);
   cout<<"\n\nCargo fijo: \t$"<<setw(10)<<cargo;
   cout<<"\nImporte: \t$"<<setw(10)<<imp;
   cout<<"\nDescuento: \t$"<<setw(10)<<desc;
   cout<<"\nImporte Total: \t$"<<setw(10)<<impt;
cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}    	


    
       
