#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	
	
	int i,j,k,deger;
	
	printf("degeri giriniz: ");
	scanf("%d",&deger);
	
	for(i=1;i<=deger;i++){
		
		
		
		for(k=deger-1;k>=i;k--){
         	printf(" ");
		 }	    
		
		for(j=1;j<=i;j++){
			printf(" *");
		} printf("\n");
         
	
	}
	
	
	
	
	
	/*int i,j,taban;
	printf("taban degerini girin:");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++){
		for(j=1;j<=i;j++){
			printf("*");
		} printf("\n");
	}*/
	
	
	/*int en,boy,i,j;
	printf("en degerini giriniz :");
	scanf("%d",&en);
	
    printf("boy degerini giriniz :");
    scanf("%d",&boy);
    
    for(i=1;i<=boy;i++){
    	for(j=1;j<=en;j++){
    		printf("*");
		} printf("\n");
	}*/
    
    
	
	return 0;
}
