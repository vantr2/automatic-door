
#include<regx51.h>

sbit sensor = P1^0;
sbit input1 = P1^1;
sbit input2 = P1^2;

void delay(){
		unsigned int i,j;
		for(i = 0; i< 4;i++)
				{for(j=0;j<60000;j++);}
}

void main(){
	
		input1 = 0;
		input2 = 0;
	
		while(1){
				if(sensor == 0){
						input1 = 1;
						input2 = 0;
						delay();
			
						input1 = 0;
						input2 = 1;
						delay();
						
						input1 = 0;
						input2 = 0;
				}
		}
}
