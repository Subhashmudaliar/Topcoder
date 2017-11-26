// Author Subhash Mudaliar
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


class FoxProgression {
public:
	int theCount(vector <int> seq) {
		int d = seq[1]-seq[0];
		int r = seq[1]/seq[0];
		int ap = 0,gp = 0;
		for(int i = 0;i<seq.size()-1;i++){
			if(seq[i+1]-seq[i] == d ){
				ap++;
			}if(seq[i+1]/seq[i] == r){
				gp++;
			}
		}if(seq.size() == 1){
			return -1;
		}
		if(ap && gp){
			return 2;
		}
		if(ap){
			return 1;
		}if(gp ){
			return 1;
		}
		return 0;
	}
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
