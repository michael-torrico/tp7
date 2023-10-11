#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main( ) {
	int nz[2][3],i,j,acu=0,menor;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("fila nro %d, columna %d ingrese el valor:",i+1,j+1);
			scanf("%d",&nz[i][j]);
			if(i==0){nz[i][j]=nz[i][j]*4;}
			if(j==2){nz[i][j]=nz[i][j]*3;}
			if((i==0)&&(j==0)){menor=nz[i][j]+1;}
			if(nz[i][j]<menor){menor=nz[i][j];}
			acu=acu+nz[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d  ",nz[i][j]);
		}
		printf("\n");
	}
	printf("la suma de todos los valores: %d \n",acu);
	printf("el menor es: %d",menor);
	return 0;
}

