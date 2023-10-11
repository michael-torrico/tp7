#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	float nz[100][5],acu=0;
	int i,j,com,c,m,le,tri,nue,ns=0;
	for(i=0;i<100;i++){
		printf("alumno nro %d \n",i+1);
		for(j=0;j<5;j++){
			if(j==0){nz[i][0]=i+1;}
			if(j==1)
			{printf("ingrese la nota del primer trimestre: ");
			scanf("%f",&nz[i][1]);
			}
			if(j==2){
				printf("ingrese la nota del segundo trimestre: ");
				scanf("%f",&nz[i][2]);
			}
			if(j==3){
			printf("ingrese la nota del tercer trimestre: ");
			scanf("%f",&nz[i][3]);
			}
		}

	}
	while(ns==0){
	printf("desea modifica alguna nota? 1si 2no \n");
	scanf("%d",&com);
	if(com==1){
	printf("ingrese nro de legajo: \n");
	scanf("%d",&le); 
	printf("ingrese el trimestre: \n");
	scanf("%d",&tri);
	printf("ingrese la nueva nota: \n");
	scanf("%d",&nue);
	printf("nota anterior %.2f confima el cambio de nota? 1si 2no\n",nz[le-1][tri]);
	scanf("%d",&c);
	if(c==1){nz[le-1][tri]=nue;}else{printf("desea continuar? 1si 2no \n");scanf("%d",&m);
	if(m==1){ns=0;}else{ns=1;}}
	}else{ns=1;}}
	
	for(i=0;i<100;i++){
		for(j=0;j<5;j++){
			if(j==1)
			{acu=acu+nz[i][1];}
			if(j==2)
			{acu=acu+nz[i][2];}
			if(j==3)
			{acu=acu+nz[i][3];}
			if(j==4){nz[i][4]=acu/3;}
			
		}
		acu=0;
	}
	for(i=0;i<100;i++){
		for(j=0;j<5;j++){
	printf("%.2f   ",nz[i][j]);
	}
		printf("\n");
	}
}