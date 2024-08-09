#include <stdio.h>
#include <stdlib.h>

/* fibonacci serisinin ilk 10 elemanýný listeleyen kodu yazýn */
// tribonacci
int main() {
	
	int x,y,z,w,f;
	
	x=1;
	y=1;
	z=1;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	
	
	for(f=1;f<=7;f++)
	{
	     w=x+y+z;
	     x=y;
	     y=z;
	     z=w;
	
		printf("%d\n",w);
	
}
	
	
	
	int a,b,c,i;
	
	a=1;
	b=1;
	
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=1;i<=8;i++) // burda i nin tek olayý kaç eleman olucaðýný belirlemesi baþka iþlevi yok
   	{                 // ilk 10 elamaný derse 2 si bizde olduðu için 8    5 derse 3 dicez aq bu kadar
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		}
		return 0;
}
