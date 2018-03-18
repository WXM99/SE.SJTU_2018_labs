#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_wondow_open(){char ch; cin>>ch;}

int factorial(int n){
        int n_ = int(n); 
        if(n_ == 0){
            return 1;
        }else if(n < 0){
            int res = 1;
            for(int i = n_; i <= -1; i++){
                res *= i;}
                return res;
        }else{
            int res = 1;
            for(int i = 1; i <= n_; i++){
                res *= i;
            }
            return res;
        }
}

int main(){
    while(true){
    try{
        double getIn;
        cout<<">";
        cin>>getIn;
        if(cin.fail()){
            throw runtime_error("bad input(no letters)");
            return 1;
        }
        if(getIn != int(getIn)){
            throw runtime_error("bad input(no float)");
            return 2;
        }
        cerr<<getIn<<"!";
        int res = factorial(int(getIn));
        cout<<"="<<res<<endl;
    }catch(runtime_error& e){
        cerr<<e.what()<<endl;
    }}
    return 0;
}
