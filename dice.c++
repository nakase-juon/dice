#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main()
{
    random_device rnd;
    mt19937_64 mt(rnd());
    uniform_int_distribution<> rand6(1, 6);
    int n, m;
    int sum = 0;
    string a, name;
    n = rand6(mt);
    m = rand6(mt);
    sum = n + m;
    a = "Rolling the dice...";
    cout << "What is your name?"
         << "\n";
    cout << "> ";
    cin >> name;
    cout << "Hello, " << name << "!"
         << "\n";
    cout << a << "\n";
    cout << "Die 1: " << n << "\n";
    cout << "Die 2: " << m << "\n";
    cout << "Total value: " << sum << endl;
    if (sum > 7)
    {
        cout << name << " won!" << endl;
    }
    else
    {
        cout << name << " lost." << endl;
    }
}
