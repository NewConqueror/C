#include <stdio.h>
#include <stdlib.h>


int main() {
		int *dizi;
	
	int n;
	printf("sayi gir: ");
	scanf("%d",&n);
	
	dizi= calloc (n, sizeof(int) ); // ya da malloc kullanýlýr dinamik dizi budur
	int i;
	for(i=0; i<n; i++){
	printf("sayi gir: ");
	scanf("%d",&dizi[i]);

	}	
	
	int max = dizi[0] ;
	
	for(i=0;i<n;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
	}
	
	printf("max: %d",max);
	return 0;
}
