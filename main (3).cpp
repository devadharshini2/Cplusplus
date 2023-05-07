/*
NAME :DEVADHARSHINI.V
COLLEGE NAME:VIVEKANANDHA COLLEGE OF ENGINEERING FOR WOMEN,THIRUCHENGODE,NAMALLA;.
EMAIL ID:devadharshinivijayakumar5@gmail.com

USING DATA TYPES:
INT 
STRING 
CHARACTER 
FLOAT 


CONDITIONAL STATEMENTS
IF 
ELSE IF 
ELSE 

SWITCH STATEMENT

USING FUNCTIONS

FINAL PROJECT NAME: WEATJER APP
MY CONCEPT :
CLOUDY 
TEMPERATURE 
THUNDERSTROM 
LIGHTNING 

TODAY 
TOMMOROW 
YESTERDAY 
WEEK REPORT 

*/
#include<iostream>
#include<ctime>
using namespace std;
void data(){
    string name;
    string college_name;
    string email_id;
    cout<<"\nEnter you name:";
    cin>>name;
    cout<<"\nEnter your College name:";
    cin>>college_name;
    cout<<"\nEnter your Email Id:";
    cin>>email_id;
}
int main(){
    string name;
    string location;
    char day;
    int thunderstrom;
    float temp;
    cout<<"********************** WEATHER APP *************************"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"********************* WELCOME WEATHER APP *************************"<<endl;
    data();
    //print the location from user
    cout<<"\nEnter your location:";
    cin>>location;
    /*Print the days want to see the forecast
    Here, T ==>Today
          Y ==>Yesterday
         Tom==>Tommorrow
          W ==>Week report
    */ 
    cout<<"There is any day(T/Y/N/W): ";
    cin>>day;
    if(day=='T'){
        cout<<"Today weather cast\n ";
    }
    else if(day=='Y'){
        cout<<"Yesterday Weather cast \n";
    }
    else if(day=='N'){
        cout<<"Tommorrow weather cast \n";
    }
    else if(day=='W'){
        cout<<"Weel report \n";
    }
    //print the cloudy information
    cout<<"\nCloudy information in your location: ";
    if(day=='T'){
        cout<<"\nToday 32/29'celcius ";
    }
    else if(day=='Y'){
        cout<<"\nYesterday 29/28'celcius";
    }
    else if(day=='N'){
        cout<<"\nTommorrow 39/33'celcius";
    }
    else if(day=='W'){
        cout<<"\nWeek report 102/100'celcius";
    }
    else {
        cout<<"\nEnd of the cloudy information";
    }
    cout<<"\nInput the temperature in centigrade:";
    cin>>temp;
    
    if (temp <= 0.0){ 
      cout<<"Freezing weather";
    }
    else if (temp >=0 && temp <10){
      cout<<"Very Cold weather";
    }
    else if (temp >=10 && temp <20){
      cout<<"Cold weather";
    }
    else if (temp >=20 && temp <30){
      cout<<"Normal in Temp";
    }
    else if(temp >= 30 && temp <40){
      cout<<"Its Hot ";
    } 
    else if(temp >= 40){
      cout<<"Its Very Hot";
    }
    cout<<"\nThunderstrom and lightning:";
    cin>>thunderstrom;
    switch(thunderstrom){
        case 1:
        cout<<"Today:";
        cout<<"Heavy thunderstrom";
        break;
        case 2:
        cout<<"Yesterday:";
        cout<<"Thunderstrom";
        break;
        case 3:
        cout<<"Tomorrow:";
        cout<<"Heavy lightning and thunderstrom";
        break;
        case 4:
        cout<<"Week report:";
        cout<<"Heavy lightning and thunderstrom";
        break;
    }
    cout<<"\n------------------------------------------------------------------------";
    
    
    return 0;
}




