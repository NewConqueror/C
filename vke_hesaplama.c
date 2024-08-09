#include <stdio.h>
#include <stdlib.h>

int kitle_endeks(int k,float b){
	
	int sonuc= k / (b*b);
	return sonuc;
}


int main() {
      int kilo;
      float boy;
      printf("kilo: ");
      scanf("%d",&kilo);
      printf("boy: ");
      scanf("%f",&boy);
      int vke=kitle_endeks(kilo,boy);
      printf("vke: %d",vke);
      
	
	return 0;
}
