#include <stdio.h>
#include <stdlib.h>

// dinamik bellek yönetimi ile pointerlerin diziler gibi kullanýmý

int *birlestir(int *p1,int *p2,int n1,int n2){
	
	int *p3= (int *) malloc( (n1+n2) * sizeof(int));
	int *p = p3;
	
    int i;
    for(i=0;i<n1;i++){
    	*p3 = * p1;
    	p3++;
    	p1++;
	}
	for(i=0;i<n2;i++){
    	*p3 = * p2;
    	p3++;
    	p2++;
	}
	
	*p3='\0';
	printf("\nbirlestirme islemi tamam\n");
	return p;
	
}

int main() {
	
	int s1,s2;
	int *p1,*p2,*p3;
	int i;
	
	printf("birinci bellek bolgesinin alani: ");
	scanf("%d",&s1);
	printf("ikinci bellek bolgesinin alani: ");
	scanf("%d",&s2);
	
	p1= (int *) malloc(s1 * sizeof(int));
	p2= (int *) malloc(s2 * sizeof(int));
	
	printf("birinci bellek bolgesinin alani verilerini girin \n ");
    for(i=0;i<s1;i++){
    	printf("p1 [%d]:",i);
    	scanf("%d",&p1[i]);
	}
	printf("ikinci bellek bolgesinin alani verilerini girin \n ");
    for(i=0;i<s2;i++){
    	printf("p2 [%d]:",i);
    	scanf("%d",&p2[i]);
	}
	
	p3= birlestir(p1,p2,s1,s2);
	int toplam;
	while(*p3 !='\0'){
		printf("%d ",*p3);
		toplam+= *p3;
		p3++;
		
	}
	 printf("\ntoplam: %d",toplam);
	 
	return 0;
}
