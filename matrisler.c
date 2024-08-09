#include <stdio.h>
#include <stdlib.h>

int kontrol_et(int satir1,int sutun1,int satir2,int sutun2){
	
	if(satir1==satir2 && sutun1==sutun2)
	return 1;
	
	else
	return 0; 
	
}



int * matrisleri_topla(int satir1,int sutun1,int satir2,int sutun2){
     int matris1[satir1][sutun1];
     int matris2[satir2][sutun2];
	 int sonuc  [satir1][sutun1];
	int durum=kontrol_et( satir1, sutun1, satir2, sutun2);
	if(durum==0){
	printf("matris toplanamaz");
	exit(0);
	}
	
	printf("matris 1 in bilgilerini giriniz\n ");
	int i,j,sayi;
	for(i=0;i<satir1;i++){
		for(j=0;j<sutun1;j++){
			printf("%d. satirin %d. sutunu: ",i+1,j+1);
			scanf("%d",&sayi);
			matris1[i][j]=sayi;
		}
	}
	printf("matris 1 in bilgileri tamamlandı\n\n");
	
	printf("matris 2 nin bilgilerini giriniz\n ");
	for(i=0;i<satir2;i++){
		for(j=0;j<sutun2;j++){
			printf("%d. satirin %d. sutunu: ",i+1,j+1);
			scanf("%d",&sayi);
			matris2[i][j]=sayi;
		}
	}
	printf("matris 2 in bilgileri tamamlandı\n\n");
	
	printf("matris toplama islemi \n\n ");
	for(i=0;i<satir2;i++){
		for(j=0;j<sutun2;j++){

			sonuc[i][j]=matris1[i][j] + matris2[i][j] ;
			
		}
	}
	printf("matrislerin toplama islemi tamamlandı\n\n");
	
	printf("matris 1 in verileri\n");
	for(i=0;i<satir1;i++){
		for(j=0;j<sutun1;j++){
			printf("\t%d",matris1[i][j]);
		} printf("\n");
	}
	
	printf("matris 2 nin verileri\n");
	for(i=0;i<satir2;i++){
		for(j=0;j<sutun2;j++){
			printf("\t%d",matris2[i][j]);
		} printf("\n");
	}
	
	return sonuc;
}


int main() {
	
	int satir1,sutun1,satir2,sutun2,i,j;
	
	printf("1.satiri girin: ");
	scanf("%d",&satir1);
	printf("1.sutunu girin: ");
	scanf("%d",&sutun1);
	printf("2.satiri girin: ");
	scanf("%d",&satir2);
	printf("2.sutunu girin: ");
	scanf("%d",&sutun2);
	
	/*int *ptr;
	ptr = matrisleri_topla(satir1,sutun1,satir2,sutun2);*/
	int *ptr= matrisleri_topla(satir1,sutun1,satir2,sutun2);
	
	printf("\n sonuc matrisi nin verileri\n");
	for(i=0;i<satir2;i++){
		for(j=0;j<sutun2;j++){
			printf("\t%d", *ptr );
			ptr++;
		} printf("\n");
	}
	printf("\n islem tamamlandı \n"); 
	
	return 0;
}
