/*
Author :- Subhash Mudaliar
Topcoder question :- https://community.topcoder.com/stat?c=problem_statement&pm=1650
*/
#include<bits/stdc++.h>
using namespace std;
class Soccer{
  public:
    int maxPoints(vector <int> wins, vector <int> ties)
    {
      int sum ,max = INT_MIN;
      for(int i = 0;i<wins.size();i++){
        sum = 3*wins[i]+ties[i];
        if(max<sum) max = sum;
      }
    return max;
    }
};
