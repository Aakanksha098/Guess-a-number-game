#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main()
{
    char input;
    int Userinput;
    int score=0;
    cout<<"WELCOME To The Guess a Number Game.."<<endl;
    cout<<"In This Game You Have To Guess a Number In Between 1 to 10"<<endl;
    cout<<"If You Guess a Correct Number Then Your Score Is Increses.."<<endl;
    cout<<"Make a fun and Guess the number.."<<endl;
    cout<<"ALL THE BEST.."<<endl;

    srand((unsigned int) time(NULL));
    int number = (rand()%10)+1;
   do{
    cout<<"Enter any number in between 1 to 10:   ";
    cin>>Userinput;
    cout<<endl;
    if(Userinput==number){
        cout<<"Congratulations!! You guessed the correct number.."<<endl;
        score++;
    }
    else{
        cout<<"Sorry, you guessed wrong number Please try again.."<<endl;
    }
    cout<<"Would you like to try again? please type 'Y' when you like to play again othewise type 'N'   ";
    cin>>input;
    cout<<endl;
}while(input!='N');
cout<<"Your score is:  "<<score<<endl;
cout<<"The Game Is End.. Thank you!"<<endl;
}