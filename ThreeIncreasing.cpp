/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class ThreeIncreasing{
public:
	int minEaten(int a, int b, int c){
		int count = 0;
		while(1 && (a>=b || b>=c)){
		if(a>=b && a>0){
			a--;
			count++;
		}if(b>=c && b>0){
			b--;
			count++;
		}
		}
		if(a<b && b<c && a>0&&b>0&&c>0){
			return count;
		}else{
			return -1;
		}
		return count;
}
};
