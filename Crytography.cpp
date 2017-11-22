/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class Cryptography{
public:
	long long encrypt(vector <int> numbers){
	long long int temp = 1,max = LONG_MIN;
	for(int i = 0;i<numbers.size();i++){
		numbers[i]++;
		for(int j = 0;j<numbers.size();j++){
			temp = temp*numbers[j];
		}
		if(max<temp) max = temp;
		temp = 1;
		numbers[i]--;
	}
	return max;
	}

};
