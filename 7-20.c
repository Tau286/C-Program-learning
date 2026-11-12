#include <stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int x=1;
	int y=1;
	int xt=1;
	int yt=1;
	int ex=1;
	for(x=1;xt<=n;x++){
		xt=x*x;
		for(y=1;yt<=n;y++){
			yt=y*y;
			if(x<=y){
				if(xt+yt==n){
					ex=0;
					printf("%d %d\n",x,y);
				}
			}
		}
		y=1;
		yt=1;
	}
    if(ex)
    printf("No Solution\n");
    
    return 0;
}