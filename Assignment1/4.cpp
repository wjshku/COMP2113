#include<iostream>
using namespace std;
char CaesarShift(char c,int k){
	if((c<='Z'&&c>='A')||(c<='z'&&c>='a')){
		while(k<0){
			k += 26;
		}
                if((c-'A')/26){

                        c = 'A'+(c-'a'+k+26)%26;
                }
                else{
			c = 'a'+(c-'A'+k+26)%26;
		}
                }
                cout<<c;
}
int main(){
	char c;
	int shift,lettercase,multi;
	cin>>c;
	if(c=='e') multi=1;
	else multi=-1;
	cin>>shift;
	cin>>c;
	while(c!='!'){
		CaesarShift(c,multi*shift);
		cin>>c;
	}
	cout<<c<<endl;
}
