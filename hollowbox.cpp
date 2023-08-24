//FILLED AND HOLLOW BOXES USING NESTED WHILE LOOPS
#include<iostream>

using namespace std;

int main(){
//declare variables
int forcol = 5, forrow = 5;
char symbol = 'x';
int numrows = 5, numcol = 5;
int rows = 1, col = 1;
while( rows <= numrows){
    while(col <= numcol){

            cout<<"x";
            col++;
            }
    col++;
cout<<endl;
col = 1;
rows++;
}
cout<<endl;
rows = 1;
col = 1;
while( rows <= numrows){
    while(col <= numcol){
            if(rows>1 && rows <numrows && col > 1 && col < numcol){
                cout<<" ";
            }else{
            cout<<"x";
            }
    col++;
    }
cout<<endl;
col = 1;
rows++;

}
cout<<endl;
rows = 1;
col = 1;

for(int row = 1; row <= forrow; row++){

    for(int col = 1; col <= forcol; col++){

        cout<< symbol;//shows a single character at a time in each
    }
    cout<<endl;// moves to next row
}
return 0 ;
}
