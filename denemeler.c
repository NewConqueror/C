#include <stdio.h>
#include <stdlib.h>

int main() {
	
int i,k;

i=0;

for(i=0;i<3;i++){
	printf("i=%d\n",i);
	for(k=0;k<5;k++){
		printf("k=%d\n",k);
	}
}
	
	/*
	int i,k;
	
	for(i=0;i<10;i++){
		
		if(i==3) break;  //continue; beni yapma ama yaptiginn seye devam et demek
		                 // break; direkt orda kodu sonlandir demek
		
		printf("%d ",i);
	}
	*/
	return 0;
}
