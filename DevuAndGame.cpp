/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class DevuAndGame{
public:
	string canWin(vector <int> nextLevel){
	int visited[nextLevel.size()+1];
	visited[0] = 0;
	int i;
	while(1){
		i = nextLevel[0];
		if(nextLevel[i] == -1){
			return "Win";
		}
		if(visited[i] == 0 && nextLevel[i] != -1 ){
			i = nextLevel[i];
			visited[i] = 1;
		}else if(visited[i] == 1){
			return "Lose";
		}
	}
	return "Win";
	}
};
