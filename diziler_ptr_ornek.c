#include <stdio.h>

int hesapla(int bolunen,int bolen,int *kalan){
	*kalan=bolunen % bolen ;
	return bolunen/bolen ;
}

void dizilerptrdir(int dizi[],int boyut){
	int i;
	for(i=0;i<boyut;i++){
		dizi[i]=dizi[i]*2;
	}
}


int main(){
	int i;
	int dizi[]={1,3,5,7};
	dizilerptrdir(dizi,4);
	
	for(i=0;i<4;i++){
		printf("%d ",dizi[i]);
	}
	
	
	
	
   int bolen,bolunen,kalan,bolum;
	
	bolunen=22;
	bolen=4;	
	
	bolum=hesapla(bolunen,bolen,&kalan);
	
	printf("bolum: %d\n",bolum);
	printf("kalan: %d",kalan);
	
	
	
	
	
	return 0;
}
