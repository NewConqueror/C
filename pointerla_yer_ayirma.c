#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int boyut;	
	int *ptr;
	int i;
	printf("kac tane sayi gircen bro: ");
	scanf("%d",&boyut);
	
	ptr= (int *)/* yer ayýrmayý bu iþaretle yapýyoz*/ calloc(boyut,sizeof(int));
	 printf("bellekte %d lik yer ayrildi\n",boyut);
	 
	 for(i=0;i<boyut;i++){
	 	printf("%d.sayi: ",i+1);
	 	scanf("%d", ptr+i);
	 }
	int max = *ptr ; //ilk sayýyý tutar
	for(i=0;i<boyut;i++) 
	{
		if(max < *(ptr+i)){
			max = *(ptr+i) ;
		}
	}
	
	printf("en buyuk sayi: %d",max);
	
	return 0;
}
