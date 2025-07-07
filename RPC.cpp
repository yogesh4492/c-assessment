/*
Rock Paper Scissor game 


*/
#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;
class main1{
      public:
      	string uname;//for Taking user name
      	int g_round,y_s=0,c_s=0;// g_round for taking Number of round ,y_s is for user score and c_s is for computer score
      	int ch;
      	
      	void name()//taking User name
		  {
      		cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
        	cout<<"                                     Name                               "<<endl;
	        cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
         	cout<<endl;
	
        	cout<<"Enter Your Name : ";
	        cin>>uname;//Insert the User name
	        cout<<endl;
		  }
	   	void round()//taking game round for play
		{
		 cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	     cout<<"                                     Rounds                              "<<endl;
	     cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
       	 cout<<endl;
	     cout<<uname<<" How Many Round You Want to play? : ";
	     cin>>g_round;//Insert The Rounds
	     cout<<endl;	
		}
		
		void game(){
			cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	        cout<<"                                      Game                                      "<<endl;
	        cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	        cout<<endl;
	        srand(time(0));//random number generator function
	    for(int i=1;i<=g_round;i++){
		int ch,c_ch1;//ch for user User input And c_ch1 is for Computer input As random generate
		
		cout<<endl;
		cout<<" Round No : "<<i<<"/"<<g_round<<endl;//print current round of game 
		
		cout<<endl;
		cout<<uname<<"'s Score : "<<y_s<<endl;//print User  current score
		
		cout<<endl;
		cout<<"Computer's Score : "<<c_s<<endl;//print computer Current score
		
		cout<<endl;
		cout<<"1) Rock "<<endl;
		cout<<"2) Paper "<<endl;
		cout<<"3) Scissor "<<endl;
		
		cout<<endl;
		cout<<"Enter Your Choice :";
		cin>>ch;//take user choice
		
		cout<<endl;
		
		c_ch1=(rand()%3)+1;//generate randome computer choice
		cout<<"computer Choice is : "<<c_ch1<<endl;
		
		cout<<endl;
	    switch(ch)//outer switch is check user and inner switch checks the computer choice is comparevwhith ich other
		{
	    	case 1:
	    		switch(c_ch1){
				    case 1:
				    	cout<<"Draw "<<endl;
				    	break;
	    			case 2:
	    			cout<<"Computer Win"<<endl;
	    			c_s++;
	    			break;
				    case 3:
				    cout<<"You Win "<<endl;
					y_s++;
					break;
			}
	    				
	    		
				break;
			case 2:
				switch(c_ch1){
				    case 1:
				    	cout<<"You Win "<<endl;
				    	y_s++;
				    	break;
	    			case 2:
	    			cout<<"Draw "<<endl;
	    			break;
				    case 3:
				    cout<<"Computer Win "<<endl;
					c_s++;
					break;
			}
				break;
			case 3:
				switch(c_ch1){
				    case 1:
				    	cout<<"Computer Win "<<endl;
				    	c_s++;
				    	break;
	    			case 2:
	    			cout<<"You Win"<<endl;
	    			y_s++;
	    			break;
				    case 3:
				    cout<<"Draw  "<<endl;
					break;
			}
				
				break;
			default:
				cout<<"Enter Valid Input"<<endl;
				
		}
		cout<<endl;
		string key;
		cout<<"Press any key To continue .....";
		cin>>key;
		cout<<endl;
		cout<<"--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	     
		cout<<endl;
		cout<<endl;
		
		
	}
	
		}

};
int main(){
	main1 obj1;
	obj1.name();
	obj1.round();
	obj1.game();
	if(obj1.y_s>obj1.c_s){
		cout<<obj1.uname<<" is won The game"<<endl;
		
		cout<<endl;
	}
	else if(obj1.c_s>obj1.y_s){
		cout<<" Computer is Won The game"<<endl;
	}
	else{
		cout<<"Game is Draw "<<endl;
	}
	
	
		cout<<endl;
		cout<<"--*--*--*--*--*--*--*-    Thank You For Playing     --*--*--*--*--*--*--*"<<endl;
	     
	
	return 0;
}
