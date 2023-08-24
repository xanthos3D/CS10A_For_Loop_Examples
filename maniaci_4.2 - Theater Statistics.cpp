//theater program
#include <iostream>

using namespace std;
int main(){
    int age = 0,
    sum = 0,
    guests = 0,
    lowest = 0,
    highest = 0,
    age0_18 = 0,
    age19_30 = 0,
    age31_40 = 0,
    age41_60 = 0,
    age60 = 0,
    consession = 0,
    softDrink = 0,
    popcorn = 0 ,
    nachos = 0,
    softDrinkP = 0,
    softDrinkN = 0,
    organic = 0;
    //creates a lot of variables

    cout<<"==========================\nTHEATER STATS PROGRAM\n==========================\n"<<endl;
    cout<<"Movie theater snacks available for purchase\n=========================================="<<endl;
    cout<<"1 - Soft Drink (such as Coca Cola, ICCEE, Mineral Water etc...)"<<endl;
    cout<<"2 - Popcorn"<<endl;
    cout<<"3 - Nachos"<<endl;
    cout<<"4 - Soft drink & Popcorn"<<endl;
    cout<<"5 - Soft drink & Nachos"<<endl;
    cout<<"6 - Organic and Gluten-free snacks"<<endl;
    cout<<"7 - None"<<endl;
    cout<<"==========================================\n"<<endl;
    //prints out menu
    cout<<"Enter age of attendee (-1 to quit): ";
    cin>>age;//first input
    while(age < 0 || !cin){
    cin.clear();// clears the fail state of the cin stream
    cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
    cout<<"please input a valid age. ";
    cin>>age;

    }
    cout<<"Movie theater snack purchased. (Select items 1 - 7): ";
    cin>>consession;//prompts user for snack
    while(consession <= 0 || consession >= 8 || !cin){
    cin.clear();// clears the fail state of the cin stream
    cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
    cout<<"Invalid selection, please choose from 1 - 7"<<endl;
    cout<<"Movie theater snack purchased. (Select items 1 - 7): ";
    cin>>consession;
    //checks to see if snack is valid and prompts user again if invalid input

    }
   if(age > -1){
        }
        while(age != -1){
                if (sum == 0){
                lowest = age;
                highest = age;
                }
                if (age < lowest){
                lowest = age;
                }
                if(age> highest){
                highest = age;
                }
            if(age >= 0  && age <= 18){

                age0_18++;
                guests++;

            }else if (age >= 19  && age <= 30){

                age19_30++;
                guests++;

            }else if (age >= 31  && age <= 40){

                age31_40++;
                guests++;

            }else if (age >= 41  && age <= 60){

                age41_60++;
                guests++;

            }else if (age > 60){
                age60++;
                guests++;
            }
            if (age >= 0){
            sum += age;
            }
            // adds one to the proper age  by checking age range. also finds lowest age and highest age
            if(consession == 1){
                softDrink++;
            }else if (consession == 2){
                popcorn++;
            }else if (consession == 3){
                nachos++;
            }else if (consession == 4){
                softDrinkP++;
            }else if (consession == 5){
                softDrinkN++;
            }else if (consession == 6){
                organic++;
            }
            //adds one to snack chosen
        cout<<"Enter age of attendee (-1 to quit): ";
        cin>>age;//prompts user for another atendee
        while(age < 0 || !cin){
        cin.clear();// clears the fail state of the cin stream
        cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
        cout<<"please input a valid age. ";
        cin>>age;

        }
        if(age > -1){
        cout<<"Movie theater snack purchased. (Select items 1 - 7): ";
        cin>>consession;
        while(consession <= 0 || consession >= 8 || !cin){
        cin.clear();// clears the fail state of the cin stream
        cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
        cout<<"Invalid selection, please choose from 1 - 7"<<endl;
        cout<<"Movie theater snack purchased. (Select items 1 - 7): ";
        cin>>consession;

            }
        }

    }
    //outputs all data once -1 is entered while prompted for age
    cout<<"=================================="<<endl;
    cout<<"THEATER STATS PROGRAM RESULTS"<<endl;
    cout<<"==================================\n"<<endl;
    cout<<"\nage 0  to 18: "<< age0_18<<endl;
    cout<<"age 19 to 30: "<< age19_30<<endl;
    cout<<"age 31 to 40: "<< age31_40<<endl;
    cout<<"age 41 to 60: "<< age41_60<<endl;
    cout<<"over 60: "<< age60<<endl;
    sum /= guests;
    //calculates sum based on values gathered.
    cout<<"\nthe average of the age was "<< sum<<endl;
    cout<<"The youngest person in attendance was "<<lowest<<"."<<endl;
    cout<<"The oldest person in attendance was "<<highest<<".\n"<<endl;
    cout<<"Theater Concession Stand sales"<<endl;
    cout<<"=================================="<<endl;
    cout<<"Soft Drink (such as Coca Cola, ICCEE, Mineral Water etc.): "<< softDrink<<endl;
    cout<<"Popcorn: "<< popcorn<<endl;
    cout<<"Nachos: "<< nachos<<endl;
    cout<<"Soft drink & Popcorn: "<<softDrinkP<<endl;
    cout<<"Soft drink & Nachos: "<< softDrinkN<<endl;
    cout<<"Organic and Gluten-free snacks: "<< organic<<endl;


    return 0;

}
