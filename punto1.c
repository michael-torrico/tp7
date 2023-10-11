#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main( ) {
	int nz[2][3],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("fila nro %d, columna %d ingrese el valor:",i+1,j+1);
			scanf("%d",&nz[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d  ",nz[i][j]);
			}
		
	printf("\n");
	}
	return 0;
}

