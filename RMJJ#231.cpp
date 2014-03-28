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
	cout.precision(2);

    float g=9.81, X, Y=0, t, a, rad,v;
      
    do{
    system("cls");
    Titulos(17);
    cout<<"\nPrograma que calcula las posiciones de 'X' y 'Y' de un proyectil.";
    cout<<"\nValor del angulo a: " && cin>>a;
    cout<<"\nValor de la velocidad: " && cin>>v;
    }while(a<0);    
    

    rad=(a*M_PI)/180;
	
    system("cls");
    cout<<"\n\tt\tX\tY"<<endl;
   
    
	for(t=0;Y>=0;t=t+.5){
    X=t*v*cos(rad);
    Y=t*v*sin(rad)-(0.5)*g*pow(t,2);
//    if(Y>0)
	cout<<setw(8)<<t<<setw(12)<<X<<setw(12)<<Y<<"\n";
	
    }
    
cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	} 
