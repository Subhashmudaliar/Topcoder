/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class SwapAndArithmetic{
public:
	string able(vector <int> x){
	sort(x.begin(),x.end());
	int d  = x[1]-x[0],c = 0;
	for(int i = 0;i<x.size()-1;i++){
		if(x[i+1]-x[i] == d && c == i){
			c++;
		}else{
			return "Impossible";
		}
		}
		return "Possible";
	}
};
