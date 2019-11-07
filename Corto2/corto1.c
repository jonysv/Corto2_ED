#include <stdio.h>
#include <math.h>
int binToDec(int binario, int exponente,int suma){
	if(((int)(binario/10))!=0){
		int digito=(int)binario%10;
		suma=suma+digito*pow (2,exponente);
		exponente=exponente+1;
		binario=(int)(binario/10);
		binToDec(binario,exponente,suma);
	}else{
		suma=suma+binario*pow(2,exponente);
		return suma;
	}
	
}
int main(){
    int exp,digito;
    int binario, decimal;
    printf("Introduce numero: ");
    scanf("%d",&binario);
    decimal=binToDec(binario,0,0);
    printf("Decimal: %d",decimal);
    return 0;
}
