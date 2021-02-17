#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char** argv) {
	srand(time(NULL)); //El mayordomo pone a girar la diana
	//int test = rand(); //Primer disparo del robot
	//printf ("El numero aleatorio de test vale %d\n", test);
	//printf ("Otros numeros aleatorios son: %d, %d, %d\n",rand(),rand(),rand()) ;
	//printf("La constante RAND_MAX vale %d\n", RAND_MAX);

// segunda modificacion git diff
	;
	
	int muestra=4;
	
	for (int j=1;j<=muestra; j++){
		double probm;
		int a=0;
		int veces=1000000;
		for(int i=1; i<=veces;i++){
			int m;
			m=(1+rand()%2);
			double contm=0.0;
			//printf("m es  %d \n",  m);
			if(m==1){
				a=a+1;
			}
			
			//m=(1+rand()%100);
			//if(m<=70)
		//	{
		//		a=a+1;
		//	}
			
			
			   //3653 1    3122    0    ->  1 o 2
			//if(m==1) contm++;	
		}
		double probabilidad;
		probabilidad=(double)a/veces;
		cout<<"probabilidad: "<<probabilidad<<"\n";	
	}
		
	
	
}
