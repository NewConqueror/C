#include <stdio.h>
#include <stdlib.h>

#define maksimum(s1,s2) (s1>s2)  ?  s1 : s2 
// birinci k�s�m de�ikenler ikinci k�s�m �art ���nc�yse do�ruysa bunu de�ilse bunu yaz k�sm�
int main() {
	
	printf("%d",maksimum(52,61));
	
	return 0;
}
