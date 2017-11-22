/*
Author :- Subhash Mudaliar
*/
#include<bits/stdc++.h>
using namespace std;
class Xylophone{
public:
     int countKeys(vector <int> keys){
         set<int>s;
         vector<int>z;
     	int a[52];
        for( int i = 1;i<=50;i++){
        	if(i%7 != 0){a[i] = i%7;
                 }else{a[i] = 7;}
        }
         for(int i = 0;i<keys.size();i++){
         	z.push_back(a[keys[i]]);
         }
         s.insert(z.begin(),z.end());
         return s.size();
     }
};
