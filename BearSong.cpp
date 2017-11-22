/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class BearSong{
public:
	int countRareNotes(vector <int> notes){
	set<int> st;
	st.insert(notes.begin(),notes.end());
	return st.size()-1;
	}
};
