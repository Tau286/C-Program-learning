#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int num=rand()%100+1;
	int money=100;
	int a=0;
	int b=0;
	char c;
	int d=0;
	printf("欢迎来到我的游戏,你拥有一百本金,只要能赢到300元,就算你胜利！\n");
	do{
		if(money==0){
			printf("你出局了！\n");
			break;
		}
		a=0;
		d=0;
		printf("现在,下注金额吧！\n");
		scanf("%d",&a);
		if(a>money){
			printf("嘿,你可没那么多钱！\n");
		}
		if(a<=money){
			if(a==money){
				printf("梭哈！");
			}
			printf("很好,现在开赌吧,你看好左还是右呢?(L/R)\n");
			scanf(" %c",&c);
			num=rand()%100+1;
			b=num%2;
			if((b==0 && c=='L') || (b==1 && c=='R')){
				money=money+a;
				printf("运气不错嘛,你赢了,现在你有%d元\n",money);
			}else{
				money=money-a;
				printf("真可惜,你还剩%d元\n",money);
			}
		}
	}while(money<300);
	if(money>=300){
		printf("了不起！你彻底赢了！你赢下了%d元\n",money);
	}else
		printf("真是愚笨,下辈子再见吧！\n");
	
	
	
	
	return 0;
}