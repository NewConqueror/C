#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int ogrno;
	int notu;
	struct Node *next;
} node ;

int ikinciyibul(node *bas){
	int buyuk1= bas->notu;
	int buyuk2= bas->notu;
	int numara;
	
	node *gecici=bas;
	
	while(gecici!=NULL){
		
		if(buyuk1< gecici->notu)
		 buyuk1= gecici->notu;
		 
		 gecici=gecici->next;
		
	}
	
	gecici=bas;
	
	while(gecici!=NULL){
		
		if(buyuk2< gecici->notu && gecici->notu < buyuk1){
		
		 buyuk2= gecici->notu;
		 numara=gecici->ogrno;
		 }
		 
		 gecici=gecici->next;	
	}
	
	printf("en yuksek nota sahip ogrencinin notu: %d\n",buyuk1);
	printf("en yuksek nota sahip ikinci ogrencinin notu: %d\n",buyuk2);
	
	return numara;
}

int main() {
	
	node *o1, *o2, *o3, *o4, *o5; 
	
	o1= malloc(sizeof(node));
	o2= malloc(sizeof(node));
	o3= malloc(sizeof(node));
	o4= malloc(sizeof(node));
	o5= malloc(sizeof(node));
	
	o1->ogrno=1;  o1->notu=50;
	o2->ogrno=2;  o2->notu=100;
	o3->ogrno=3;  o3->notu=70;
	o4->ogrno=4;  o4->notu=90;
	o5->ogrno=5;  o5->notu=65;
	
	o1->next=o2;
	o2->next=o3;
	o3->next=o4;
	o4->next=o5;
	o5->next=NULL;
	
	int sonuc=ikinciyibul(o1);
	printf("en yuksek nota sahip ikinci ogrencinin numarasi: %d",sonuc);
	
	return 0;
}
