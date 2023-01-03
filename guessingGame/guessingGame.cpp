#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int life(3);
	int numberTry,number;

	srand(time(0));
	number = rand()%101;

	cout << "Guess a number between 0 and 100";

	do{
		cin >> numberTry;
		if (numberTry == number){
			cout<<"Congrats, ypu have guessed the right number!";
			cout<<"Life: " << life; 
		}else if (numberTry>number){
			cout<<"It's less!";
			life--;
		}else if (numberTry<number){
			cout<<"It's more!";
			life--;
		}
		
		if (life == 0){
			cout<<"GameOver";
		}
	}while(life!=0);

	return 0;
}