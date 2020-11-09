#include <iostream>

using namespace std;

struct Node
{
	int info;
	Node * next;
};

void delete_node(Node * & head);
Node * find_prev(Node * head, int num);
void add_node(Node * & temp,int num){
	Node * p = new Node;
	p->info = num;
	p->next = temp;
	temp = p;
}

void print_list(Node * head)
{
    Node * current = head;
	int time = 20;    
    while (current != NULL)
	{
		time--;
		if(time == 0) break;
		// process the current node, e.g., print the content
		cout << current->info << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}

void tail_insert(Node * & head,
	Node * & tail, int num)
{
	Node * p = new Node;
	p->info = num;
	p->next = NULL;

	if (head == NULL) {
		head = p;
		tail = p;
	}
	else {
		tail->next = p;
		tail = p;
	}
}

void insert(Node * & after, int num){
	Node * p = new Node;
	p->info = num;
	p->next = after->next;
	after->next = p;
}


void sort_list(Node * & head){
	Node * temp = new Node;
	Node * current = new Node;

	temp->info = head->info;
	//delete_node(head);

	while(head->next != NULL){
		//cout<<"head "<<head->info<<endl;
		if(find_prev(temp,head->next->info) == NULL){
			add_node(temp,head->next->info);
			cout<<"temp "<<temp->info<<temp->next->info<<endl;
			delete_node(head);
		}else{

			current = find_prev(temp,head->next->info);
			insert(current,head->next->info);	
			delete_node(head);
		}
//		cout<<"success "<<head->info<<endl;
	}
	delete head;
	head = temp;
}

void delete_node(Node * & head){
	Node * temp = head;
	head = head->next;
	delete temp;
}


Node * find_prev(Node * head, int num){
	int time = 20;
	if(head == NULL||head->info >= num){
		return NULL;
	}
	Node * current = head;
	while(current->next != NULL){
		time--;
		if(time==0) break;
		cout<<"lopp!"<<endl;
		if(current->next->info >= num){
			return current;
		}else
			current = current->next;
	}
	return current;
}

int main()
{
    Node * head = NULL, * tail = NULL;
    int num = 0;

    // build linked list backward
    cout << "input integers (-999 to end): ";
    cin >> num;
    while (num != -999) {
        tail_insert(head, tail, num);
        cin >> num;
    }

    // print the items in the linked list
    print_list(head);
    
    sort_list(head);
    
    print_list(head);

    return 0;
}
