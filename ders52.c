#include <stdio.h>
#include <stdlib.h>

#define puan 3.89
#define puan2 4.27
int main() {
	
	int turkce;
	
	printf("turkce netiniz: ");
	scanf("%d",&turkce);
	
	float sozelpuan;
	sozelpuan=turkce*puan+0.11;
	printf("sozel puaniniz: %.3f\n",sozelpuan);
	
	int mat;
	printf("mat netiniz: ");
	scanf("%d",&mat);
	
	float matpuan;
	matpuan=mat*puan2+0.25;
	printf("sayisal puaniniz: %.3f",matpuan);
	
	return 0;
}
