#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int y,f;
	int no=1;
	for(y=0;y<100;y++){
		for(f=0;f<100;f++){
			    if(2*y*100+2*f+n==f*100+y){
		    printf("%d.%d",y,f);
		    no=0;
	        }
		}
	}
	if(no)
	printf("No Solution\n");
    return 0;
}