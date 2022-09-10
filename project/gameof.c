#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
bool t=true;
	

int rollDice() {
	srand(time(NULL));
	return rand()%6 + 1;
}

int getRandomDigit() {

 	int temp=0;
    temp=temp+rollDice();
	temp=temp+rollDice();

	return temp;
}

void choices(int x) {

		int d = getRandomDigit();
		switch(x)
		{

			case 1 :
			{	
				if(d < 7)
				{				
					printf("Output is %d ,You Won   \n",d);
				}
				else
				{
					printf("Output is %d ,You Lost  \n",d);
				}
    			break;
    		}		

    		case 2:
    		{	
    			if(d>7)
    			{
					printf("Output is %d ,You Won   \n",d);
				}
				else
				{
					printf("Output is %d ,You Lost   \n",d);
				}
    			break;
    		}
    		case 3:
    		{	
    			if(d==7)
    			{
					printf("Output is %d ,You Won : %s \n",d);
				}
				else
				{
					printf("Output is %d ,You Lost : %s \n",d);
				}
    			break;
        	}
    		case 4:
    		{	

    			t=false;
    			printf("THANKS FOR PLAYING \n");//player);
    			printf("Exiting \n");
    			break;
    		}

    		default:printf("WRONG INPUT \n");
			break;
    	}	
   }		



int main()
{
   	
	printf("////////////////////////////////////////////////////GAME OF 7 ///////////////////////////////////////////\n");

	int ch;

	do
	{   
		printf("ENTER YOUR CHOICE : \n");
		printf("1. LESS THAN 7 \n");
		printf("2. MORE THAN 7 \n");
		printf("3. EQUAL TO 7 \n");
		printf("4. EXIT \n");
		scanf("%d", &ch);
		choices(ch);
	}while(t);
}