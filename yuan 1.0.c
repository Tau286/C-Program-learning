#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d",&a);
	for(b=1;b<a+1;b++){
	    for(c=1;c<b+1;c++){
	    	printf("%d*%d=%-4d",c,b,b*c);
		}
		printf("\n");
	}

    return 0;
}