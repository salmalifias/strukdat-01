/*
Author		: Salma Alifia Shafira
NPM			: 140810180058
Deskripsi	: Kelipatan 3 = Fizz; Kelipatan 5 = Buzz; Kelipatan 3 dan 5 = FizzBuzz
Tahun		: 2019
*/

#include <iostream>
using namespace std;

void fizzbuzz () {
	int bil;
    for (bil=1; bil<=100; bil++){
    	if (bil%3==0)
    		cout<<"Fizz"<<endl;
        else if (bil%5==0)
            cout<<"Buzz"<<endl;
		else if(bil%15==0)
            cout<<"FizzBuzz"<<endl;
        else
            cout<<bil<<endl;
        }
}

int main () {
	fizzbuzz();
}
