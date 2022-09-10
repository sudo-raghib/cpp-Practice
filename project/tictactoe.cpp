#include<iostream>
#include<string>
using namespace std;

class Tictactoe
{   
public:
	string player1,player2;
	int movecount=0;
	  
    char A[3][3]={'-','-','-','-','-','-','-','-','-'};
    bool t=true;

   
    void set_display(int i ,int j,char tic)
    {

        A[i][j]=tic;
        for(int x=0;x<3;x++)
        {
        	for(int y=0;y<3;y++)
        	{
        		cout<<A[x][y]<<" ";
        	}
        	cout<<endl;

        }	

    }
    void display()
    {
    	for(int x=0;x<3;x++)
        {
        	for(int y=0;y<3;y++)
        	{
        		cout<<A[x][y]<<" ";
        	}
        	cout<<endl;
        }	
    }
    bool isWinner()
    {
    	return t == false;
    }
    bool isInvalidInput(int x,int y)
    {
    	if(A[x][y]=='X'|| A[x][y]=='O'|| (x>3 || y>3))
    		return true;
    	return false;
    }

    void takeInput(char temp)
    {


    	int x,y;
    	string player = temp == 'X' ? player1 : player2;
        do {
		    cout<<player<<" give location and your call : "<<endl;
	        cin>>x>>y;

	        if(isInvalidInput(x,y))
	        {
	           cout<<"WRONG INPUT :";
	        }
		}while(isInvalidInput(x, y));
	    
	    set_display(x,y,temp);
	    checkWinner();
	    movecount+=1;
    }
    void checkWinner();
    


};

void Tictactoe::checkWinner()
{
	    if(A[2][0] == A[2][1] && A[2][1]==A[2][2] && (A[2][0] == 'X' || A[2][0] == 'O'))
		{   
			t=false;
			if(A[2][0]=='X')
			{
				cout<<"Winner player 1 "<<player1;
			}
			else
			{
				cout<<"Winner player 2 "<<player2;
			}	
						
		}


		else if(A[1][0] == A[1][1] && A[1][1]==A[1][2] && (A[1][0] == 'X' || A[1][0] == 'O'))
		{   
			t=false;
			if(A[1][0]=='X')
			{
				cout<<"Winner player 1 "<<player1;
			}
			else
			{
				cout<<"Winner player 2 "<<player2;
			}	
						
		}
		else if(A[0][0] == A[0][1] && A[0][1]==A[0][2] && (A[0][0] == 'X' || A[0][0] == 'O'))
		{   
			t=false;
			if(A[0][0]=='X')
			{
				cout<<"Winner player 1 "<<player1;
			}
			else
			{
				cout<<"Winner player 2 "<<player2;
			}	
						
		}

		else if(A[0][2] == A[1][2] && A[1][2]==A[2][2] && (A[0][2] == 'X' || A[0][2] == 'O'))
		{
			t=false;
			if(A[0][2]=='X')
			{
				cout<<"Winner player 1 "<<player1;
			}
			else
			{
				cout<<"Winner player 2 "<<player2;
			}	
			
			display();
			
		}
		else if(A[0][0] == A[1][0] && A[1][0]==A[2][0] && (A[0][0] == 'X' || A[0][0] == 'O'))
		{
			t=false;
			if(A[0][0]=='X')
			{
				cout<<"Winner player 1 "<<player1;
			}
			else
			{
				cout<<"Winner player 2 "<<player2;
			}	
						
		}
		else if(A[0][1] == A[1][1] && A[1][1]==A[2][1] && (A[0][1] == 'X' || A[0][1] == 'O'))
		{
			t=false;
			if(A[0][1]=='X')
			{
				cout<<"Winner"<<player1;
			}
			else
			{
				cout<<"Winner "<<player2;
			}	
						
		}
		else if(A[0][0] == A[1][1] && A[1][1]==A[2][2] && (A[0][0] == 'X' || A[0][0] == 'O'))
		{
			t=false;
			if(A[0][0]=='X')
			{
				cout<<"Winner"<<player1;
			}
			else
			{
				cout<<"Winner"<<player2;
			}	
						
		}
		else if(A[0][2] == A[1][1] && A[1][1]==A[2][0] && (A[0][2] == 'X' || A[0][2] == 'O'))
		{   
			t=false;
			if(A[0][2]=='X')
			{
				cout<<"Winner  "<<player1;
			}
			else
			{
				cout<<"Winner  "<<player2;
			}	
			
		}

}


int main()
{   Tictactoe t1;
	
	cout<<"Enter player 1 and 2 :"<<endl;
	cin>>t1.player1>>t1.player2;
	cout<<"Start"<<endl;

	cout<<t1.player1<<",you are given X"<<endl;
	cout<<t1.player2<<",you are given Y"<<endl;



    while(!t1.isWinner())
	{   
		t1.takeInput('X');

		if(t1.isWinner()) {
			break;
		}

		if(t1.movecount==9)
		{
            cout<<"DRAW .GOODBYE";
			break;
		}
		t1.takeInput('O');	
    }	
	
	cout<<endl;
	t1.display();


}

