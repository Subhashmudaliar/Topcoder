/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class SafeBetting{
public:
	int minRounds(int a, int b, int c){
	int round = 0,minb = b - a;
	for(int  i = 0;b<c;i++){
		b = b+minb;
		minb = b-a;
		round++;
	}
	return round;
	}
};
