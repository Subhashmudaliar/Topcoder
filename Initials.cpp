/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class Initials{
public:
	string getInitials(string name){
	string x;
	x +=name[0];
	for(int i = 0;i<name.length();i++){
		if(name[i] == ' '){
			x+=name[i+1];
		}
	}
	return x;
	}
};
