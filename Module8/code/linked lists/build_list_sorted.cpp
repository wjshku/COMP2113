#include <iostream>

using namespace std;

struct Node
{
	int info;
	Node * next;
};

void print_list(Node * head)
{
    Node * current = head;
	while (current != NULL)
	{
		// process the current node, e.g., print the content
		cout << current->info << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}

void head_insert(Node * & head, int num)
{
	Node * p = new Node;
	p->info = num;
	p->next = head;
	head = p;
}

// assume that after points to a node
// i.e., after not equals null
void insert( Node * after, int num )
{
	Node * p = new Node;
	p->info = num;
	p->next= after->next;
	after->next = p;
}

// return the node which is the last one in
// the list that is smaller than num
Node * find_prev( Node * head, int num )
{
	if (head == NULL || head->info >= num )
		return NULL;

	// at least one node in the list now
	Node * current = head;

	while (current->next != NULL) {
	//	  cout<<"Current "<<current->next->info<<endl;

		if (current->next->info >= num){
			return current;
		}
		else
			current = current->next;
	}

	return current;
}

Node * get_item(Node * head,int k){
	Node * current = head;
	for(int i = 0; i < k;i++){
		current = current->next;
		if(current == NULL)
			return NULL;
	}
	return current;

}

Node * find( Node * head, int num )
{
	Node * current = head;

	while (current != NULL) {
		if (current->info == num)
			return current;
		else
			current = current->next;
	}

	return NULL;
}

void delete_head( Node * & head)
{
	if (head != NULL) {
		Node * p = head;
		head = head->next;
		delete p;
	}
}

// assume that after points to a node
// i.e., after not equals null
void delete_node( Node * after)
{
	Node * p = after->next;
	after->next = p->next;
	delete p;
}

int get_option()
{
    int c;
    cout << endl << "enter option (1: insert; 2: delete; 3: reverse; 4: get kth item; 5: sublist; 0: quit) ";
    cin >> c;
    return c;
}

void option_insert(Node * & head)
{
    int num;
    cout << endl << "number to insert: ";
    cin >> num;

    Node * after_this = find_prev(head, num);
    if (after_this == NULL){
    	//	cout<<"head insert"<<endl;	    
	        head_insert(head, num);
    }
	else{
	//	cout<<"insert after"<<endl;
		insert(after_this, num);
	}
}

void option_delete(Node * & head)
{
    int num;
    cout << endl << "number to delete: ";
    cin >> num;

    Node * p = find(head, num);

    if (p == NULL) {
        cout << "item not found!" << endl;
    }
    else {
        // find the previous node, so that we can delete
        p = find_prev(head, num);
        if (p == NULL)
            delete_head(head);
        else
            delete_node(p);
    }
}

void option_divide(Node * & head, Node * & second){
	Node * current = head;
	int length = 0;
	while(current != NULL){
		length++;
		current = current->next;
	}
	length = length/2;
	second = head;
	for(int i= 0; i<length; i++){
		second = second->next;
		//cout<<"second "<<second->info<<endl;
	}
	current = second;
	second = second->next;
	current->next = NULL;
}

void option_reverse(Node * & head){
	Node * temp = new Node;
	Node * before = head;
	temp = NULL;
	head = head->next;
	before->next = temp;
	while(head != NULL){
		temp = before;
		before = head;
		head = head->next;
		before->next = temp;
	}
	head = before;	
}


void delete_list(Node * & head)
{
    while ( head != NULL )
    {
        delete_head(head);
        print_list(head);
    }
}

int main()
{
    Node * head = NULL, * after_this, * second;
    int num = 0;

    // build sorted linked list
    cout << "input integers (-999 to end): ";
    cin >> num;
    while ( num != -999 ) {
        after_this = find_prev(head, num);

		if (after_this == NULL)
			head_insert(head, num);
		else
			insert(after_this, num);

		print_list(head);

		cin >> num;

    }

    int c;
    while (c = get_option()) {
        switch (c)
        {
        case 1:
            // insert a node
            option_insert(head);
            print_list(head);

	    break;
        case 2:
            // delete a node
            option_delete(head);
            print_list(head);
	    break;
	case 3:
	    //reverse
	    option_reverse(head);
	    print_list(head);
	    break;
	case 4:
	    //get item
	    int k;
	    cout<<"Input the item you want to find: ";
	    cin>>k;
	    //Node * p = get_item(head,k);
	    if(get_item(head,k) != NULL)
		    cout<< get_item(head,k)->info<<endl;
	    else
		    cout<< "Item does not exist."<<endl;
	    break;
	case 5:
	    option_divide(head,second);
	    print_list(head);
	    print_list(second);
	    break;
        }
    }

    delete_list(head);

    return 0;
}
