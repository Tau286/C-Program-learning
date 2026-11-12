#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int x=1;
	int y=1;
	int t=1;
	int m=n;
	int s=n;
	int w=0;
	int www=1;
	int tau=0;
	for(;m>=2;m--){
		x*=10;
		y*=10;
	}
	y*=10;
	for(t=x;t<y;t++){
		tau=0;
		m=n;
		w=t;
	    for(;m>=1;m--){
	    	www=1;
	    	s=n;
	    	for(;s>=1;s--){
	    		www=www*(w%10);
			}
	    	tau=tau+www;
	    	w/=10;
		}
		if(tau==t)
		printf("%d\n",t);
	}
	
    return 0;
}