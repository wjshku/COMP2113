#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>

using namespace std;

struct Page {
    int id;
    string path;
    int counter;
    Page(int id, string path) {
        this->id = id;
        this->path = path;
        counter = 0;
    };
};

// This function can facilitate sorting
bool operator<(const Page & a, const Page & b) {
    return a.id < b.id;
};

vector<Page> pages;

struct User {
    int id;
    vector<string> visits;
    User(int id) {
        this->id = id;
    };
    void add_visit(int page_id) {
        Page p(page_id, "");
        //vector<Page>::iterator iter = lower_bound(pages.begin(), pages.end(), p);
        //if(iter->id == page_id)
        //    visits.push_back(iter->path);
	vector<Page>::iterator iter;
	for(iter=pages.begin();iter != pages.end();iter++){
		if(iter->id  == page_id)
			visits.push_back(iter->path);
	}
    };
    int size() const {
        return visits.size();
    };
    void print_visits() {
        sort(visits.begin(), visits.end());
        vector<string>::iterator iter;
        for(iter = visits.begin(); iter != visits.end(); iter++) {
            cout << "- " << *iter << endl;
        }
    }
};

vector<User> users;

// Please implement the following function to facilitate the sorting of users
bool operator<(const User & a, const User & b) {
	if(a.size() != b.size())
		return(a.size() < b.size());
	return(a.id > b.id);
};

// Please implement the following function
void add_page(const Page& p) {
	pages.push_back(p);
}

// Please implement the following function
bool cmp_page_count(const Page & a, const Page & b) {
	if(a.counter<b.counter)
		return true;
	else if(a.counter>b.counter)
		return false;
	return a.path>b.path;
}

// Please implement the following function
void print_pages(int number){
	vector<Page>::iterator iter = pages.end();
	for(int i = 0; i < number; i++)
	{	
		iter--;
		cout<<(*iter).counter<<":"<<(*iter).path<<endl;
	}
	
}

// Please implement the following function
void add_user(User u) {
	users.push_back(u);
}

// Please implement the following function
void add_visit(int page_id) {
	users[users.size()-1].add_visit(page_id);

}

// Please implement the following function
void print_users(int number) {
	vector<User>::iterator iter = users.end();
        for(int i = 0; i < number; i++)
        {
                iter--;
                cout<<(*iter).size()<<":"<<(*iter).id<<endl;
		(*iter).print_visits();
        }
}



int main() {
//    cout<<"Begin"<<endl;
    string type;
    while(cin >> type) {
          if(type == "USER") {
          int user_id;
          cin >> user_id;
          User u(user_id);
          add_user(u);
        } else if(type == "PAGE") {
          int page_id;
          string page_path;
          cin >> page_id;
          cin >> page_path;
          Page p(page_id, page_path);
          add_page(p);
        } else if(type == "VISIT") {
          int page_id;
          cin >> page_id;
          Page p(page_id, "");
          //vector<Page>::iterator iter = lower_bound(pages.begin(), pages.end(), p);
          //if(iter->id == p.id) {
          //  iter->counter++;
          //}
          vector<Page>::iterator iter;
          for(iter = pages.begin();iter != pages.end();iter++){
                if(iter->id  == page_id)
                        iter->counter++;
          }
	  add_visit(p.id);
        }
    }
    sort(pages.begin(), pages.end(), cmp_page_count);
    cout << "*** 5 most popular pages ***" << endl;
    print_pages(5);
    sort(pages.begin(), pages.end());

    sort(users.begin(), users.end());
    
    cout << "*** 5 most active users ***" << endl;
    print_users(5);

    return 0;

}
