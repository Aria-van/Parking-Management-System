#include <stdio.h>

#include "car.h"
#include "parking.h"
#include "sidewalk.h" 

#define MAXN 10000

int main() 
{
	
	while(true)
	{
		char state;
		int num, time;
		
		scanf("%c", state);
		if(state == 'E') break;
		
		scanf("%d %d", &num, &time);
		
		if(state == 'A')
		{
			//停车场有位置进停车场
			
			//没位置进便车道
			
			//打印停车位置 
		}
		
		else if(state == 'D')
		{
			//计算停留时间和费用
			
			//让便车道车头进入 
		}
		
	}
	
	return 0;
}
