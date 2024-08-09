#include <stdio.h>
#include <stdlib.h>

  /*int kupbul(int a){
  	int sonuc ;
    sonuc=a*a*a; // veya return a*a*a ; yazabilirdik
  	return sonuc;
  }*/
    
    void dortgen(int kisa,int uzun){
    	int i,j;
    	for(i=0;i<kisa;i++){
    		for(j=uzun-1;j<=uzun;j++){ // içi boþ olarak çalýþma ödevi?
    		// j=0;j<=uzun j++; normali
    			printf("*");
			} printf("\n");
	}                   		
	}
    
int main() {
	 
	 
	 dortgen(3,5);
	 
	 
	 /*int sayi;
	 printf("sayiyi giriniz: ");
	 scanf("%d",&sayi);
	 printf("kubu: %d",kupbul(sayi));*/
	 
	return 0;
}
