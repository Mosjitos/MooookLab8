#include<iostream>
#include<string>
using namespace std;

int main(){
	int urAge, urHeight, bounty;
	string charNem;
	cout << "Enter your age: "; cin >> urAge;

    //check age under than 25y
	if(urAge<=25){
		cout << "Enter your height: "; cin >> urHeight;
		if(urHeight<100) charNem = "Chopper";
		else if(urHeight>=180)
        {
			cout << "Enter your bounty: "; cin >> bounty;
			if(bounty>1100000000) charNem = "Zoro";
			else charNem = "Sanji";
		}
        else  charNem = "Usopp";
	}
    //check age that are around 25y to 60y
    else if(urAge<=60)
    {
		cout << "Enter your bounty: "; cin >> bounty;
		if(bounty>500000000) charNem = "Jinbe";
			else charNem = "Franky";
    //check age over than 60y
	}else{charNem = "Brook";}

	cout << "Your character = " << charNem;

}