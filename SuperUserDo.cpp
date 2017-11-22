/*
Author :- Subhash Mudaliar
*/

#include<bits/stdc++.h>
using namespace std;
class SuperUserDo{
public:
	int install(vector <int> A, vector <int> B){
	vector<int>v;
	v.resize(1001, 0);
	int sum = 0;
	for(int i = 0;i<A.size();i++){
	for(int j = A[i];j<=B[i];j++){
		v[j] = 1;
	}
	}
	for(int i = 0;i<v.size();i++){
	sum = sum+v[i];
	}
	return sum;
	}
};
