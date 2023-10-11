#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main( ) {	
	int i,j,k;
	float acu1=0,acu2=0,acu3=0,acut=0,nz[3][12]={{0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0}},re,reco[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	while(j>00){
		printf("ingrese el num del bondi: ");
		scanf("%d",&j);
		if(j>0){
		printf("ingrese el num de linea: ");
		scanf("%d",&i);
		
		printf("ingresa la recaudacion: ");
		scanf("%f",&re);
		nz[i-1][j-1]=re;
		acut=acut+re;
		if(i-1==0){acu1=re+acu1;}
		if(i-1==1){acu2=re+acu2;}
		if(i-1==2){acu3=re+acu3;}
		for(k=0;k<12;k++){
		if(j-1==k){reco[k]=reco[k]+re;}
		}
	}}
	for(i=0;i<12;i++){
		printf("nro %d de coche recaudo: %f \n",i+1,reco[i]);
	}
	printf("la recaudacion de la linea 1 es: %f \n",acu1);
	printf("la recaudacion de la linea 2 es: %f \n",acu2);
	printf("la recaudacion de la linea 3 es: %f \n",acu3);
	printf("la recaudacion total es: %f \n",acut);
	return 0;
}

