#include <stdio.h>
#include <stdlib.h>

int asal_mi(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1; 
}

int main(){

      int sayi;
      printf("sayiyi giriiniz: ");
      scanf("%d",&sayi);
      
      if(asal_mi(sayi)==0){
      	printf("asal degildir");
	  }else{
	  	printf("asaldir");
	  }
      

	return 0;
}
