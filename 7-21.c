#include <stdio.h>

int main()
{
	const int RV=9;//r兔
	const int GV=3;//g龟
	int rs=0;
	int gs=0;
	int t=0;
	int xt=0;
	int st=0;
	int rt=10;//兔子睡觉时间判断量
	int sleep=0;//睡眠状态判断
	int ss=0;//睡眠计时器"闹钟"
	scanf("%d",&t);
    for(xt=1;xt<=t;xt++){
    	if(sleep){
    		st++;
    		ss++;
    		if(ss==30){
    			ss=0;
    			sleep=0;
			}
		}
    	gs=GV*xt;
    	rs=RV*(xt-st);
    	if(xt==rt){
    	    if(rs>gs){
    	    	rt+=40;
    	    	sleep=1;
			}else{
				rt+=10;
			}
		}
	}
	if(rs>gs){
		printf("^_^ %d\n",rs);
	}else if(rs<gs){
		printf("@_@ %d\n",gs);
	}else{
	printf("-_- %d\n",rs);
	}
    return 0;
}