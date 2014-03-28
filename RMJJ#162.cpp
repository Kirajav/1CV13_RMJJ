/* programa: RMJJ#16
   nombre: Ramírez Magaña Juan Javier
   grupo: 1C13V
   comentarios: Calcular el importe total de pago por consumo mensual de gas por
   ft3 siempre habrá un cobro fijo de $50.
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<\1CV13_RMJJ\Funciones\Titulos.h>

using namespace std;

int main(){
	int u;
	float i=50, c, iva=0.15, total;
	//cout.setf(ios::fixed);
    //cout.precision(5);
	Titulos(162);
	cout<<"Programa que calcula el importe total de pago por consumo mensual de gas.\n"<<endl;
	cout<<"\nIngrese en número de usuario: " && cin>>u;
	cout<<"\n\tConsumo mensual: " && cin>>c;
	system("cls");
	
	if(c<=0){
        c=0; 
        i=i+c;
        cout<<"El valor del consumo se reinicia a 0"<<endl;
		}
	else if(c<=300 && c>0){
        i=((c/100)*7)+i;
		}
	else if(c>300 && c<=20000){
		i=((c/100)*10)+i;
		}
	else if(c>20000 && c<=150000){
		i=((c/100)*12)+i;

		}
	else if(c>150000){
		i=(c/100)*15+i;
		}
	else{
		cout<<"No reconozco esa opci\242n..." <<endl;
		}
	total=i+iva*i;
	cout<<"\n\tUSUARIO #"<<u;
	cout<<"\n\nConsumo del mes: "<<c<<" [ft^3]"<<endl;
	cout<<"\nCargo fijo mensual: \t$50 ";
	cout<<"\nEl importe del mes es: \t$"<<i;
	cout<<"\nIVA: \t\t\t$"<<iva*i;
    cout<<"\n\nImporte Total: \t\t$"<<total<<endl;
	cout<<"\n\nPresione una tecla para finalizar..."<<endl;
	getch();
	return(0);
	}
