#include<bits/stdc++.h>
using namespace std;

class gcd1{
    public:
        gcd1() ;
        int get_gcd(int i1, int i2);
        void input();

};

class lcm1
{
    public:
        lcm1();
        int get_lcm(int j1, int j2);
        void set(int i1, int i2);
        void input();
        void print();
        ~lcm1();
    private:
        int m;
        int n;
};

