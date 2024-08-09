#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,k,l;   // if le tek döngü þeklinde yaptýk 20 de(ödevdi)  21 de 2 döngü ile yapýcaz
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("*");
		} printf("\n");
	}

	for(k=1;k<=5;k++){
		for(l=5;l>=k;l--){
			printf("*");
		} printf("\n");
	}
	
	return 0;
}
