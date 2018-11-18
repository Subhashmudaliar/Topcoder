#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t = 0;
for(int i = 1;i<1000;i++){
        if(i%5 == 0 || i %3 == 0){
                t+=i;
        }
}
cout<<t<<endl;
return 0;
}
