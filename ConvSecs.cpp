#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

long long int seconds, days, hours, minutes, remainderhours, remainderminutes, remainderseconds; //set all the values 

cout << "Enter a time in seconds: " ; //enter the number of seconds
cin >> seconds;
cout << endl << endl;


minutes = seconds / 60; //define how long a second is 
remainderseconds = seconds % 60; //remaineer of seconds
hours = minutes / 60; //define how long a minute is 
remainderminutes = minutes % 60; //remainder of minutes 
days = hours / 24;//define how long an hour is 
remainderhours = hours % 24; //remainder of hours




  
if(seconds <= 0){ //will create an error for less than a second

cout << "Error! The seconds must be greater than zero." << endl;
  
}
else{
  cout << seconds << " seconds is:" << endl; //the ammount of seconds

  if (days > 0){// the ammount of days
   
    cout  << "\t" << days << " days." << endl; //print the amount of days
  
  }
  if (remainderhours > 0){ // the amount of hours 

    cout  << "\t" << remainderhours << " hours." << endl; //print hours 
    
  } 
if (remainderminutes > 0){//the minutes

    cout  << "\t" << remainderminutes << " minutes." << endl; //print the amount of minutes
  }
if (remainderseconds > 0){ //the amount of seconds

    cout  << "\t" << remainderseconds << " seconds." << endl; //print the amount of seconds
    
  }
    
  }
  
return 0;  
}
