#include <stdio.h>
#include <stdlib.h>

int ebob(int s1, int s2){

    if(s2!=0)
    ebob(s2,s1%s2);
    else
    return s1;
}


int main() {

	int sayi1,sayi2;
	int max;
	printf("sayi1 gir: ");
	scanf("%d",&sayi1);
	printf("sayi2 gir: ");
	scanf("%d",&sayi2);
	
	

	printf("ebob: %d",ebob(sayi1,sayi2));
	return 0;
}
