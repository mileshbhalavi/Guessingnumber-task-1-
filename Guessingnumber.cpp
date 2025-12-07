#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
   srand(time(0));
   int number =rand()% 100000 +1;
   int guess;
   cout<<"Welcome to the guessing Game!\n";
   cout<<"I have selected a number between 1 to 100000.\n";
   do{
    cout<<"Enter your guess :";
    cin>>guess;
    if(guess>number){
        cout<<"Too high! Try again.\n";

    }
    else if (guess<number){
        cout<<"Too low! Try again.\n";

    }
    else{
        cout<<" Correct! you guessed the number!\n";

    }
    
   }while(guess!=number);
   return 0;
}