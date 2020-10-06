#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void game(int);

void instruction(){
	cout<<"[1:Rock| 2: Paper| 3: Scissors| 4: Exit]: ";
}

int main(){
        int input;
        do{
		instruction();
                cin>>input;
		cout<<endl;
                if(input==4) break;
		game(input);
        }while(1);

}

void game(int user){
	srand(time(NULL));
	int computerChoice = rand()%3+1;
	cout << "Computer: " << computerChoice << ", User: " << user << endl;
	if(user==computerChoice) cout<<"It was a tie"<<endl;
	else if(user-computerChoice==1||user-computerChoice==-2) cout<<"You won!"<<endl;
	else cout<<"The computer won!"<<endl;
}
