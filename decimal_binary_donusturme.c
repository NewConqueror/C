#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,ikilik;
	printf("sayi girin: ");
	scanf("%d",&sayi);
	int i;	
	for(i=8;i>0;i--){
		ikilik = sayi >> i ;
		if(ikilik & 1)
			printf(" 1 ");
		else
			printf(" 0 ");
		
	}

	
	return 0;
}
