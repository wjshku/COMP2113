#include<iostream>
#include<stdio.h>
#include<ctime>

using namespace std;
struct user{
	int index;
	int location[2];
	int money;
};

void display_user(user current){
	cout<<"Player "<<current.index<<":"<<endl;
	cout<<"location: "<<current.location[0]<<current.location[1]<<endl;
	cout<<"Money: "<<current.money<<endl;
}

void initiate_user(user &current, int num){
	current.index = num;
	current.location[0] =  current.location[1] = 0;
	current.money = 1000;
}

void move(user &current,int num){
	int move;
	srand(time(NULL) + num);
	move = rand() % 5 + 1;
	cout<<"Player "<<num<<" will move by "<<move<<endl;
	if(current.location[1] + move < 10){
		current.location[1] += move;
	}else{
		current.location[0]++;
		current.location[1] += (move-10);
	}
}

int main(){
	int num;
	char gameover = 'N';
	cout<<"Please input the number of players: ";
	cin>>num;
	user * players = new user[num];//create dynamic array
	for(int i  = 0; i < num;i++){
		initiate_user(players[i],i);
		//display_user(players[i]);
	}
	while(gameover!='Y'){
		for(int i=0; i<num;i++){
			move(players[i],i);
			display_user(players[i]);
		}
		cout<<"Do you want to end the game? (Y/N): "<<endl;
		cin>>gameover;
	}
	delete[] players;
	return 0;
}


