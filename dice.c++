#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main(){
    random_device rnd;
    mt19937_64 mt(rnd());
    uniform_int_distribution<> rand6(1,6);
    int n,m;
    int sum = 0;
    string a;
    a = "Rolling the dice...";
    n=rand6(mt);
    m=rand6(mt);
    sum=n+m;
    cout<<a<<"\n";
    cout<<"Die 1: "<<n<<"\n";
    cout<<"Die 2: "<<m<<"\n";
    cout<<"Total value: "<<sum<<endl;
}
