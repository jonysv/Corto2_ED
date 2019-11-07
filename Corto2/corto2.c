#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cruzar(int *punteroHaciaA,int *punteroHaciaB){
	*punteroHaciaA=*punteroHaciaA+*punteroHaciaB;
	*punteroHaciaB=*punteroHaciaA-*punteroHaciaB;
	*punteroHaciaA=*punteroHaciaA-*punteroHaciaB;
}
int main(int argc, char *argv[]) {
	int A;
	int B;
	printf("Ingrese el valor de A\n");
	scanf("%d",&A);
	printf("Ingrese el valor de B\n");
	scanf("%d",&B);
	cruzar(&A,&B);
	printf("A = %d B= %d",A,B);
	return 0;
}
