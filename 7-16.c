#include <stdio.h>

int main()
{
	double a,b,c,d;
	double left,right;
	double h;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	scanf("%lf %lf",&left,&right);
	double fleft=a*left*left*left+b*left*left+c*left+d;
	double fright=a*right*right*right+b*right*right+c*right+d;
	double fh=0.0;
	while(right-left>0.00001){
	    if(fleft*fright<0){
	    	h=(left+right)/2;
	    	fh=a*h*h*h+b*h*h+c*h+d;
		    if(fh>0){
		    	if(fleft>0){
		    	left=h;
		    	fleft=fh;
		        }else{
		        right=h;
		    	fright=fh;
		        }
			}
			if(fh<0){
		    	if(fleft<0){
		    	left=h;
		    	fleft=fh;
		        }else{
		        right=h;
		    	fright=fh;
		        }
			}
			if(fh==0){
		    	break;
			}
	    }	
	    if(fleft*fright==0){
	    	if(fleft==0){
	    		h=left;
	    		break;
			}else{
				h=right;
				break;
			}
		}
	}
	printf("%.2f\n",h);
	
    return 0;
}