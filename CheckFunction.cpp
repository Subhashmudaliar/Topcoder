/*
Author :- Subhash Mudaliar
Topcoder question :- https://community.topcoder.com/stat?c=problem_statement&pm=4788
*/
#include<bits/stdc++.h>
using namespace std;
class CheckFunction{
public:
  int newFunction(string s){
	vector<pair<int,int> >v;
	  v.push_back(make_pair(0,6));
  	  v.push_back(make_pair(1,2));
	  v.push_back(make_pair(2,5));
  	  v.push_back(make_pair(3,5));
	  v.push_back(make_pair(4,4));
	  v.push_back(make_pair(5,5));
  	  v.push_back(make_pair(6,6));
  	  v.push_back(make_pair(7,3));
	  v.push_back(make_pair(8,7));
	  v.push_back(make_pair(9,6));
  	  int sum = 0;
  	  for(int i = 0;i<s.length();i++){
    	    sum+=v[s[i]-'0'].second;
	  }
	  return sum;
	}
};
