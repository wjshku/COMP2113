#include<iostream>

using namespace std;

struct Node{
	int num;
	Node * next;
};

void build_backward(Node * &head, int num){
	Node * p = new Node;
        p->num = num;
        p->next = NULL;

	if(head == NULL){
		head = p;
	}else{
		p->next = head;
		head = p;
	}
}		

void countdown(Node * &current,int k){
	for(int i = 0;i < (k - 1) - 1;i++){
			current = current->next;
	}
}

void delete_nextnode(Node * current){
	Node * p = current->next;
	current->next = current->next->next;
	delete p;
}

void print_list(Node * head, int n)
{
    Node * current = head;
    for(int i = 0; i<n;i++)
        {
                // process the current node, e.g., print the content
                cout << current->num << " -> ";
                current = current->next;
        }
    cout<<endl;
}


int main(){
	Node * head = NULL, * current = NULL;
	int n, k;
	cin>>n>>k;
	for(int i = 0;i < n; i++){
		build_backward(head,n-i);
		if( i == 0)
			current = head;
	}
	current->next = head;
	//print_list(head,n);
	current = head;
	while(current->next->num != current->num){
		countdown(current,k);
		delete_nextnode(current);
		current = current->next;
		//print_list(current,n);
	}
	cout<<current->num<<endl;
	delete current;
}
