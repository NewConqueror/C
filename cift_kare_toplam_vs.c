#include <stdio.h>
#include <stdlib.h>


 int main() {
 	
 	int n;
 	int i;
 	int j=0;
 	int k=0;
 	int l=1;
 	printf("sayiyi girin: ");
 	scanf("%d",&n);
 	 
 	for(i=1;i<=n;i++){
 		if(i%2==0){
 			j+=i*i;
 			printf("%d ",i);
	 } 
 }
  printf(" cift kare toplam: %d ",j);
 
 printf("\n");
    for(i=1;i<=n;i++){
    	if(i%2!=0){
    		k+=i;
    		l=l*i;
    		printf("%d ",i);
		}
	}
	printf("tek toplam: %d",k);
	printf("\n");
	printf("carpim toplam: %d",l);
	return 0;
}
