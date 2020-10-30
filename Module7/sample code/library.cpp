#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
struct Book{
	string name;
	string author;
	int call_number;
	string subject;
};

bool equal(Book a,Book b){
	return true;
}
int insert(Book book){
	ofstream fout;
        fout.open("books.txt",ios::app);
        if(fout.fail()){
                cout<<"Error";
                return 0;
        }
	fout<<endl<<book.name<<" "<<book.author<<" "<<book.call_number<<" "<<book.subject;
}
int search(Book book);

int main(){
	string command;
	while(cin>>command){
		if(command == "Input"){
			Book book;
			cin>> book.name>>book.author>>book.call_number>>book.subject;
			insert(book);
		}
		else if(command == "Search"){
			Book book;
       			cin>>book.name>>book.author>>book.call_number>>book.subject;
			search(book);
		}else if(command == "Exit"){
			return 0;
		}
		else cout<<"Invalid command"<<endl;
	}
}
int search(Book book){
	ifstream fin;
	string name;
        string author;
        int call_number;
        string subject;
	string line;
	fin.open("books.txt",ios::app);
	if(fin.fail()){
		cout<<"Error";
		return 0;
	}
	while(getline(fin,line)){
		istringstream iss(line);
		iss>>name>>author>>call_number>>subject;
		if(name==book.name&&author==book.author&&call_number==book.call_number&&subject==book.subject){
			cout<<"Book in library"<<endl;
			return 0;
		}
	}
	cout<<"Book not found"<<endl;
}

