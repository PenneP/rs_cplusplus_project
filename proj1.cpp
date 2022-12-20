#include <iostream>
using namespace std;
main(){
int  massage1, massage2,massage3,massage4,massage5,controlover=0;
int input1,input2,input3;
int control1=0,control2=0,control3=0,control4=0,control5=0,control6=0,control7=0;
string controlday;
start1:
cout<<"\nWELCOME TO NAZARICK SPA\n";
cout<<"Please select a day for reservation\n";
cout<<"Press the corresponding numbers to select a date\n";
cout<<"[1]Monday [3]Wednesday [5]Friday [7]Sunday\n[2]Tueday [4]Thursday  [6]Saturday\n\n";
cin>>input1;
while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout <<"\nYou can only enter numbers.\n\n";}
if(input1==1){
   control1=1;}
   else if (input1==2){
	control1=2;}
	else if (input1==3){
	  control1=3;}
	else if (input1==4){
	    control1=4;}
	 else if (input1==5){
	    control1=5;}
	else if (input1==6){
	    control2=1;}
	else if (input1==7){
	    control2=2; }
	    else{
	    	
	    	cout<<"\n========ERROR========\nPLEASE ONLY PICK THE\nCORRESPONDING NUMBERS\n";
	    	goto start1;
				}
			
		if (control1==1){
		 cout<<"You have picked Monday";
		 controlday="Monday";
		 control3=1;}
		 
		else if(control1==2){
		cout<<"You have picked Tuesday";
		controlday="Tuesday";
		control3=2;}
		 
		else if(control1==3){
			cout<<"You have picked Wednesday";
			controlday="Wednesday";
			control3=3;}
		 
		else if(control1==4){
			cout<<"You have picked Thursday";
			controlday="Thursday";
			control3=4;}
		 
		else if(control1==5){
			cout<<"You have picked Friday";
			controlday="Friday";
			control3=5;}
		 
		else if(control2==1){
			cout<<"You have picked Saturday";
			controlday="Saturday";
			control3=6;}
		 
		else if(control2==2){
			cout<<"You have picked Sunday";
			controlday="Sunday";
			control3=7;}		
				
		if (control3==1 || control3==2 || control3==3 || control3==4 || control3==5 ){
		
		weekdays:
				cout<<"\nhow many hours would you like?\nminimum of 1hour and maximum of 4hours\n";
				cin>>input2;
				while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout << "\nYou can only enter numbers.\n";}
				
			if (input2==1){
			 control4=1;}
			else if(input2==2){
				control4=2;}
			else if(input2==3){
			 control4=3;}
			else if(input2==4){
			 control4=4;}
			else{
				cout<<"\n=============ERROR============ \nonly pick between 1 to 4 hours\n";
				goto weekdays;}		
			}
		else if (control3==6 || control3==7){
	weekends:
		  		cout<<"\nhow many hours would you like?\nminimum of 1hour and maximum of 4hours\n";
				cin>>input2;
				while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout << "\nYou can only enter numbers.\n";}
			if (input2==1){
			cout<<"You have chosen 1 hour\n"; control5=1;}
			else if(input2==2){
				cout<<"You have chosen 2 hours\n"; control5=2;}
			else if(input2==3){
			cout<<"You have chosen 3 hours\n"; control5=3;}
			else if(input2==4){
			cout<<"You have chosen 4 hours\n"; control5=4;}
			else{
				cout<<"\n=============ERROR============ \nonly pick between 1 to 4 hours\n";
				goto weekends;}}
				
				
	switch (control4){
		case 1 : cout<<"You have chosen 1 hour\n";
		restarttime:
		cout<<"Enter a Corresponding number to pick time:\n";
		cout<<"[ 1]10:00AM - 11:00AM [ 7]04:00PM - 05:00PM\n[ 2]11:00AM - 12:00PM [ 8]05:00PM - 06:00PM\n[ 3]12:00PM - 01:00PM [ 9]06:00PM - 07:00PM\n[ 4]01:00PM - 02:00PM [10]07:00PM - 08:00PM\n[ 5]02:00PM - 03:00PM [11]08:00PM - 09:00PM\n[ 6]03:00PM - 04:00PM [12]09:00PM - 10:00PM\n";
		
		cin>>input3;
		while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout << "\nYou can only enter numbers.\n";}
			switch (input3){
				case 1:
                          cout<<"You are now reserved for "<<controlday<<" 10:00AM - 11:00AM\n ";
						   break;
                     case 2:
                          cout<<"You are now reserved for "<<controlday<<" 11:00AM - 12:00PM"; break;
                     case 3:
                          cout<<"You are now reserved for "<<controlday<<" 12:00PM - 1:00PM"; break;
                     case 4:
                          cout<<"You are now reserved for "<<controlday<<" 1:00PM - 2:00PM"; break;
                     case 5:
                          cout<<"You are now reserved for "<<controlday<<" 2:00PM - 3:00PM"; break;
                     case 6:
                          cout<<"You are now reserved for "<<controlday<<" 3:00PM - 4:00PM"; break;
                     case 7:
                          cout<<"You are now reserved for "<<controlday<<" 4:00PM - 5:00PM"; break;
                     case 8:
                          cout<<"You are now reserved for "<<controlday<<" 5:00PM - 6:00PM"; break;
                     case 9:
                          cout<<"You are now reserved for "<<controlday<<" 6:00PM - 7:00PM"; break;
                     case 10:
                          cout<<"You are now reserved for "<<controlday<<" 7:00PM - 8:00PM"; break;
                     case 11:
                          cout<<"You are now reserved for "<<controlday<<" 8:00PM - 9:00PM"; break;
                     case 12:
                          cout<<"You are now reserved for "<<controlday<<" 9:00PM - 10:00PM"; break;
                     default: cout<<"\n=======INVALID=======\nPLEASE CHOOSE FROM\nTHE CORRESPONDING NUMBERS\n";
					 goto restarttime; break;
			}
		break;
		
		case 2 : cout<<"You have chosen 2 hour\n";
		restarttime1:
				cout<<"Enter a Corresponding number to pick time:\n";
				cout<<"[1]10:00AM - 12:00PM [4]04:00PM - 06:00PM\n[2]12:00PM - 02:00PM [5]06:00PM - 08:00PM\n[3]02:00PM - 04:00PM [6]08:00PM - 10:00PM\n";
					cin>>input3;
					while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout << "\nYou can only enter numbers.\n";}
			switch(input3){
		            case 1:
                          cout<<"You are now reserved for "<<controlday<<" 10:00AM - 12:00PM"; break;
                     case 2:
                          cout<<"You are now reserved for "<<controlday<<" 12:00PM - 2:00PM"; break;
                     case 3:
                          cout<<"You are now reserved for "<<controlday<<" 2:00PM - 4:00PM"; break;
                     case 4:
                          cout<<"You are now reserved for "<<controlday<<" 4:00PM - 6:00PM"; break;
                     case 5:
                          cout<<"You are now reserved for "<<controlday<<" 6:00PM - 8:00PM"; break;
                     case 6:
                          cout<<"You are now reserved for "<<controlday<<" 8:00PM - 10:00PM"; break;
                     default: cout<<"\n=======INVALID=======\nPLEASE CHOOSE FROM\nTHE CORRESPONDING NUMBERS\n";
					 goto restarttime1; break;}
		break;
		
		case 3 : cout<<"You have chosen 3 hour\n";
		restarttime2:
		cout<<"Enter a Corresponding number to pick time:\n";
		cout<<"[1]10:00AM - 01:00PM [3]04:00PM - 07:00PM\n[2]01:00PM - 4:00PM [4]07:00PM - 10:00PM\n";
		cin>>input3;
		while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout << "\nYou can only enter numbers.\n";}
		switch (input3){
			  	 	 case 1:
                          cout<<"You are now reserved for "<<controlday<<" 10:00AM - 1:00PM"; break;
                     case 2:
                          cout<<"You are now reserved for "<<controlday<<" 1:00PM - 4:00PM"; break;
                     case 3:
                          cout<<"You are now reserved for "<<controlday<<" 4:00PM - 7:00PM"; break;
                     case 4:
                          cout<<"You are now reserved for "<<controlday<<" 7:00PM - 10:00PM"; break;
                     default: cout<<"\n=======INVALID=======\nPLEASE CHOOSE FROM\nTHE CORRESPONDING NUMBERS\n";
					 goto restarttime2; break;
		}
		break;
		
		case 4 : cout<<"You have chosen 4 hour\n";
		restarttime3:
		cout<<"Enter a Corresponding number to pick time:\n";
		cout<<"[1]10:00AM - 02:00PM\n[2]02:00PM - 06:00PM\n[3]06:00PM - 10:00PM\n";
		cin>>input3;
		while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout << "You can only enter numbers.\n";}
		switch (input3){
					case 1:
                          cout<<"You are now reserved for "<<controlday<<" 10:00AM - 2:00PM"; break;
                     case 2:
                          cout<<"You are now reserved for "<<controlday<<" 2:00PM - 6:00PM"; break;
                     case 3:
                          cout<<"You are now reserved for "<<controlday<<" 6:00PM - 10:00PM"; break;
                     default: cout<<"\n=======INVALID=======\nPLEASE CHOOSE FROM\nTHE CORRESPONDING NUMBERS\n";
					 goto restarttime3; break;
		}
		break;
	}}
		
	
		
		
	
			
		
	
	    
