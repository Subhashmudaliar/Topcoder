/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class TriangleMaking{
public:
	int maxPerimeter(int a, int b, int c){
	vector<int>v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	if((v[0] == v[1])&& (v[1] == v[2])){
		return v[0]+v[1]+v[2];
	}
	if(v[0]+v[1] >= v[2]){
		v[2]--;
	}
	return v[0]+v[1]+v[2];
	}
}
