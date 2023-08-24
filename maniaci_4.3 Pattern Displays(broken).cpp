//draw a line of xxxxx using loops
#include <iostream>
using namespace std;
int main(){
 int count1 = 1,
     colunms,
     rows = 0;
     char yn = ' ';
     //creates variables
    cout<<"**************** Drawing Squares Program ******************************"<<endl;
    cout<<"* Algorithm generates a hollow square, using the character +, - and | *"<<endl;
    cout<<"* Acceptable size dimension: Any value from 3 to 20. Choose carefully.*"<<endl;
    cout<<"***********************************************************************"<<endl;
    cout<<"Side size = 3"<<endl;
    cout<<"+-+"<<endl;
    cout<<"| |"<<endl;
    cout<<"+-+"<<endl;
    //prints out square information
cout<<"To try my shape generator program again type Y for Yes and N for No: ";
 cin>>yn;
 // prompts user again of they want to use program again
 while(!cin){
    cin.clear();// clears the fail state of the cin stream
     cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
    cout<<"Invalid data.To try my shape generator program again type Y for Yes and N for No: "<<endl;
     cin>>yn;
     }
     //tests to see if char input when into fail state
    while(yn){
     if(yn == 'n' || yn == 'N'){
        break;
     }else if(yn == 'y' || yn == 'Y'){
        break;
     }else{
    cin.clear();// clears the fail state of the cin stream
     cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
    cout<<"Invalid data.To try my shape generator program again type Y for Yes and N for No: "<<endl;
     cin>>yn;
     }
     //tests to ensure that char is y or n
     }
     //prompts user for char to test if they want to run the square program
     while(yn == 'y' || yn == 'Y'){
     cout<<"Side size = ";
     cin>>colunms;
     while(!cin || colunms < 3 || colunms > 20){
     cin.clear();// clears the fail state of the cin stream
     cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
     cout<<"OOPS! Looks like you typed some bad data here!\nThe acceptable dimension should range from 3 to 20, so choose carefully...\n";
      cout<<"Side size = ";
     cin>>colunms;
     }
     // prints out first like of square
cout<<'+';
rows = colunms - 2;
count1 = 1;
//top loop for printing out top line
 while (count1 <= colunms-2){
            cout<<'-';
        count1++;
 }
 cout<<'+'<<endl;
 //middle for loop for printing |
 for(count1 = 1;count1 < colunms-1;count1++){
    cout<<'|';
    for(rows = 1;rows <= colunms-1;rows++){
            if(rows < 1 || rows < colunms-1){
             cout<<" ";
     if(yn == 'n' || yn == 'N'){
        break;
     }       }else{
            cout<<'|';
            }
        }
        cout<<endl;
    }
cout<<'+';
rows = colunms - 2;
count1 = 1;
//botem loop for printing out bottom line
 while (count1 <= colunms-2){
            cout<<'-';
        count1++;
 }
 cout<<'+'<<endl;
 cout<<"To try my shape generator program again type Y for Yes and N for No: ";
 cin>>yn;
 // prompts user again of they want to use program again
  while(yn){
 while(!cin){
    cin.clear();// clears the fail state of the cin stream
     cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
    cout<<"Invalid data.To try my shape generator program again type Y for Yes and N for No: "<<endl;
     cin>>yn;
     }
     if(yn == 'n' || yn == 'N'){
        break;
     }else if(yn == 'y' || yn == 'Y'){
        break;
     }else{
    cin.clear();// clears the fail state of the cin stream
     cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
    cout<<"Invalid data.To try my shape generator program again type Y for Yes and N for No: "<<endl;
     cin>>yn;
     }
     //tests to ensure that char is y or n
     }
     }
cout<<"Now exiting the shape generator program......."<<endl;
return 0;
}
