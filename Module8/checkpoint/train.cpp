#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


struct Car {
	string id;
	Car *next;
};

void append(Car *&head, string id){
	Car *temp = head;
	Car *p = new Car;
	while(head->next!=NULL){
                        head = head->next;
        }
	head->id = id;
        head->next = p;
        head = temp;
}

void appendCar(Car *&head, string id);
void printTrain(Car *&head);

int main() {
	Car *head = NULL;
	int n;
	cin >> n;
	string id;
	for (int i = 0; i < n; i++) {
		cin >> id;
		//append(head,id);
		appendCar(head, id);
	}
	printTrain(head);
	return 0;
}




// Please implement the function appendCar() here.
void appendCar(Car *&head, string id){
	Car *temp = head;
	if(head == NULL){
		Car *p = new Car;
		p->id = id;
		//head->id = id;
		head = p; //you must write like this, since head is not initialized. This means that head->id = id is invalid, because you are dereferencing it.
	}
	else{
		Car * p = new Car;
		p->id = id;
		while(head->next!=NULL){
			head = head->next;
		}
		head->next = p;
		head = temp;
	}
}

void printTrain(Car *&head) {
	Car *current = head;
	while (current != NULL) {
		if (current->next != NULL) {
			cout << current->id << ", ";
		}
		else {
			cout << current->id;
		}
		current = current->next;
	}
}

