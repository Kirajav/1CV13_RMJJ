#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
#include<time.h>
#include<iostream>
using namespace std;
int main (void)
{
int S,R,i,P ;
i=1;
srand(time(NULL));
S=0;

cout<<endl<<endl<<endl;
while (i<=366)
{
cout.setf(ios::fixed);
cout.precision(3);
R=(rand()%41)+5;
cout<<setw(10)<<R;
S=S+R;
i++;
} 
cout.setf(ios::fixed);
cout.precision(3);
P=S/i;
cout<<endl;
cout<<endl;
cout<<"La suma de los 366 numeros es: "<<S<<endl; 
cout<<"El Promedio es: "<<P<<endl;



getch();
return(0);
}
