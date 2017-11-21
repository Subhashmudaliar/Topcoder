/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class CostOfDancing{
public:
	int minimum(int K, vector <int> danceCost){
	  int sum = 0;
	  sort(danceCost.begin(),danceCost.end());
	  for(int i = 0;i<K;i++){
	    sum+=danceCost[i];
	  }
	return sum;
	}
};
