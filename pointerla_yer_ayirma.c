#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int boyut;	
	int *ptr;
	int i;
	printf("kac tane sayi gircen bro: ");
	scanf("%d",&boyut);
	
	ptr= (int *)/* yer ay�rmay� bu i�aretle yap�yoz*/ calloc(boyut,sizeof(int));
	 printf("bellekte %d lik yer ayrildi\n",boyut);
	 
	 for(i=0;i<boyut;i++){
	 	printf("%d.sayi: ",i+1);
	 	scanf("%d", ptr+i);
	 }
	int max = *ptr ; //ilk say�y� tutar
	for(i=0;i<boyut;i++) 
	{
		if(max < *(ptr+i)){
			max = *(ptr+i) ;
		}
	}
	
	printf("en buyuk sayi: %d",max);
	
	return 0;
}
