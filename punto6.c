#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	int nz[20][6],i,j,hb,acu,k=0;
	float cap[3]={0,0,0};
	for(i=0;i<20;i++){
	for(j=0;j<6;j++){
		printf("piso %d ingrese la cantidad de habitantes en el departamento nro %d \n",i+1,j+1);
		scanf("%d",&hb);
		acu=acu+hb;
		for(k=0;k<20;k++){
			if(i==k){cap[k]=cap[k]+hb;}
		}
	}
	}
	printf("total de hb: %d \n",acu);
	for(i=0;i<20;i++){
		printf("promedio de piso %d de hb por piso: %.2f \n",i+1,cap[i]/6);
}
	}
