/// GCD:Euclidean algorithm
/// Pulak Banerjee, 06/10/2024
#include<bits/stdc++.h>
using namespace std;

class gcd1{
    public:
        gcd1() ;
        int get_gcd(int i1, int i2);
        void input();

};

gcd1::gcd1(){ }
int gcd1::get_gcd(int i1,int i2)
{
    if (i1== 0 && i2!=0)
    {
    return i2;
    }
    else if (i2== i1)
    {
    return i1;
    }
    else if (i2== 0 && i1!=0)
    {
    return i1;
    }
    else if (i1>i2)
    {
    return get_gcd(i1-i2,i2);
   }
    else return get_gcd(i1,i2-i1);
   
}

int main()
{
    gcd1 gg2;
    int m, n;
    cout<<"Give the 1st number:"<<endl;
    cin>>m;
    cout<<"Give the 2nd number:"<<endl;
    cin>>n;
    cout<<"Gcd of " << m << " and "<< n << " is: "<<gg2.get_gcd(m,n)<<endl;
    return(0);

}
