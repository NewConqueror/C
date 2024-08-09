#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi;

	printf("sayi girin: "); scanf("%d",&sayi);
	while(sayi>0){
	
	if(sayi ^ 1 == 1){
	
	   printf("0");
	}
	else{
		printf("1	");
	}
 sayi=sayi/2;

}
	return 0;
}
