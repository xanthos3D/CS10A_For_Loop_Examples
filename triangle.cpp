//triangle generator
//xander maniaci
#include <iostream>
using namespace std;
int main(){
 int count1 = 1,
     colunms,
     space = 1,
     rows = 0;
     cout<<"enter a";
 while (count1 <= colunms){

        if(colunms == colunms/2+space ){
            cout<<'*';
        }else{
            cout<<' ';
        }
        count1++;
 }
    cout<<endl;
 for(count1 = 1;count1 <= colunms-1;count1++){
    cout<<'|';
    for(rows = 1;rows <= colunms-1;rows++){
            if(rows < 1 || rows < colunms-1){
             cout<<" ";
            }else{
            cout<<'|';
            }
        }
        cout<<endl;
    }
cout<<'+';
rows = colunms - 2;
count1 = 1;
 while (count1 <= colunms-2){
            cout<<'-';
        count1++;
 }
 cout<<'+';


return 0;
}
