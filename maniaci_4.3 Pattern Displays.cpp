//draw a line of xxxxx using loops
#include <iostream>
using namespace std;
int main(){
 int count1 = 1,
     colunms = 3,
     rows = 0;
     bool cont = false;
     char yn = 'y';
     //creates variables
    cout<<"**************** Drawing Squares Program ******************************"<<endl;
    cout<<"* Algorithm generates a hollow square, using the character +, - and | *"<<endl;
    cout<<"* Acceptable size dimension: Any value from 3 to 20. Choose carefully.*"<<endl;
    cout<<"***********************************************************************"<<endl;
do{
    while( yn == 'y'|| yn == 'Y'){ //probably dont need this loop
        if(cont == true){// needed to ensure the loop runs at least once without user input
        cout<<"Side size = ";
        cin>>colunms;
        while(!cin || colunms < 3 || colunms > 20){
            cin.clear();// clears the fail state of the cin stream
            cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
            //prompts user for another input
            cout<<"OOPS! Looks like you typed some bad data here!\nThe acceptable dimension should range from 3 to 20, so choose carefully...\n";
            cout<<"Side size = ";
            cin>>colunms;
        }
                }
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
            }
            }else{
                cout<<'|';
                }
            }
            cout<<endl;
        }
    cout<<'+';
    rows = colunms - 2;
    count1 = 1;
    //bottom loop for printing out bottom line
     while (count1 <= colunms-2){
                cout<<'-';
            count1++;
     }
     cout<<'+'<<endl;
     //prompts user if they want to run program again
     cout<<"To try my shape generator program again type Y for Yes and N for No: ";
     cin>>yn;
     //checks to see if cin goes into fail state or if yn is a char other that y or n
    while (!cin || yn <78 || yn > 78 && yn < 89||yn > 89 && yn < 110 || yn > 110 && yn <121 || yn > 121){
    cin.clear();// clears the fail state of the cin stream
    cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
    // prompts user again for input
    cout<<"Invalid data.To try my shape generator program again type Y for Yes and N for No: ";
    cin>>yn;
    }
    // control test to see if y was selected. sets cont to true to run the program again. if n is entered then breakes loop.
    if(yn == 'y'|| yn == 'Y' ){
        cont = true;
        }else if(yn == 'n'|| yn == 'N'){
        cont = false;
        }
    }
}while(cont == true);

cout<<"Now exiting the shape generator program......."<<endl;
return 0;
}
