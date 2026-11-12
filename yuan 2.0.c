#include <stdio.h>

int main()
{
	int a=0;
	scanf("%d",&a);
	int b=a+1;
	int c=a+2;
	int d=a+3;
	int x=0;
	int y=0;
	int z=0;
	int last=0;
	int tau=0;
	for(x=a;x<a+4;x++){
		for(y=b;y<a+4;y++){
			for(z=c;z<a+4;z++){
				tau=100*x+10*y+z;
				//if(tau>last){
				printf("%d%d%d ",x,y,z);
				//last=tau;
			    //}
			}
		}
	}
	
	
	
    return 0;
}