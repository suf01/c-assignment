#include<bits/stdc++.h>
using namespace std;

class student{
private:
	string name, section, DOB, DOJ, pass_out;
	int roll_no;
	int marks[5];

public:
	void set_data(){
		cout<<"Name: ";
		cin>>name;

		cout<<"Roll no: ";
		cin>>roll_no;

		cout<<"section: ";
		cin>>section;

		cout<<"Date of birth: ";
		cin>>DOB;

		cout<<"Date of joining: ";
		cin>>DOJ;

		cout<<"Pass out year: ";
		cin>>pass_out;

		cout<<"Enter marks(5): "<<endl;
		for(int i = 0; i < 5; i++){
			cin>>marks[i];
		}
		cout<<endl;
	}

	void get_data(){
		cout<<"Name: "<<name<<endl;

		cout<<"Roll no: "<<roll_no<<endl;

		cout<<"section: "<<section<<endl;

		cout<<"Date of birth: "<<DOB<<endl;

		cout<<"Date of joining: "<<DOJ<<endl;

		cout<<"Pass out year: "<<pass_out<<endl;

		cout<<"marks: ";
		for(int i = 0; i < 5; i++){
			cout<<marks[i]<<" ";
		}
		cout<<endl;
	}

	bool search_name(string src_name){
		if(name == src_name){
			return true;
		}
		return false;
	}
};

int main(){

	int X;

	cout<<"Enter of students X: ";
	cin>>X;
    cout<<endl;

	student stud[X];

	for(int i = 0; i < X; i++){
		stud[i].set_data();
	}

	string src_name;
	cout<<"Enter the name for search: ";
	cin>>src_name;

	int flag = 0;
	for(int i = 0; i < X; i++){
		if(stud[i].search_name(src_name)){
			stud[i].get_data();
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		cout<<"student not found"<<endl;
	}
}