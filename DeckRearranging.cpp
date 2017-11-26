#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class DeckRearranging {
public:
	string rearrange(string deck, vector <int> above) {
		string dup;
		for(int i = 0,j=0;i<deck.size();i++){
		if(above[j] == 0){
			dup = dup+deck[i];
		}else{
			dup.insert(j-above[i], 1, deck[i]);
			}
			j++;
		}
		reverse(dup.begin(),dup.end());
		return dup;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
