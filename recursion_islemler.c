#include <stdio.h>
#include <stdlib.h>

void yazdir(int n){  // recursion la sayýlarý yazdýrma stack(yýðýn) mantýðý var 
                       // hafýzaya atýyor sonra attýklarýný geri alýyor
	
	if(n==0){
		printf("\n");
		return 0;
	}
	
	printf("%d ",n); 
    yazdir(n-1);
	printf("%d ",n);
}


int toplama(int n){ // recursion la toplama iþlemi böyle çalýþýyormuþ iyi öðren
	
	if(n==0){
		return 0;
	}
	
	return n + toplama(n-1);
	
}

int faktoriyel(int n){
	if(n==1){
		return n;
	}
	
	return n * faktoriyel(n-1);
}

int fibonacci(int n){   // 0 1 1 2 3 5 8 13 21 34 55 89 ...
	if(n==0 || n==1)
	return n;
	
	return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
	
	int sayi;
	printf("sayi gir: ");
	scanf("%d",&sayi);
	
   //yazdir(sayi);
 //printf("toplam: %d",toplama(sayi));
 //printf("%d",faktoriyel(sayi));
 printf("%d",fibonacci(sayi));
 return 0;
}
