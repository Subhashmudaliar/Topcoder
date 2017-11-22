/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class BearNSWE{
public:
	double totalDistance(vector <int> a, string dir){
		int x = 0,y = 0;
		double dist,d = 0;
		for(int i = 0;i<a.size();i++){
			if(dir[i] == 'N'){
				y = y+a[i];
			}else if(dir[i] == 'S'){
				y = y -a[i];
			}else if(dir[i] == 'E'){
				x = x+a[i];
			}else if(dir[i] == 'W'){
				x = x-a[i];
			}
			d = d+a[i];
		}	
		dist = x*x+y*y;
		dist = sqrt(dist);
		d = d+dist;
		return d;
}
};
