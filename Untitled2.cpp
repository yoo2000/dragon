#include <stdio.h> 
#include <math.h>
int main()
{ 
	int num,e,x,y,p1_x,p1_y,p2_x,p2_y,r1,r2;	 
    scanf("%d", &num);
	int N[num];
	while(num > 0){
	    scanf("%d %d %d %d %d %d", &p1_x,&p1_y,&r1,&p2_x,&p2_y,&r2);

		x = p1_x-p2_x;
		y = p1_y-p2_y;
		e = r1 + r2 - sqrt(pow(x,2)+pow(y,2));
	
		if (e > 0){
			N[num] = 2;
		}	
		else if (e = 0){
			if(p1_x==p2_x){
				if(p1_y==p2_y){
					N[num] = -1;
				}
				else {
					N[num] = 1;
				}
			}
			else {
			N[num] = 1;
			}
		}
		else{
			N[num] = 0;
		}
	num = num -1;
	}
	for(int i=sizeof(N);i>0;i--){
		printf("%d",i);
		printf("%d \n",N[i]);
	}
	return 0;
}
