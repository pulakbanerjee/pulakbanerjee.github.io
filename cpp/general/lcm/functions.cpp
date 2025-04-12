#include"functions.h"

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

lcm1::lcm1(){}
lcm1::~lcm1() {}

void lcm1::set(int i1, int i2)
{
    i1=m;
    i2=n;
}

int lcm1::get_lcm(int j1, int j2)
{
    gcd1 gg1;
    int gcdval = gg1.get_gcd(j1,j2);
    int q1 = j1/gcdval;
    int q2 = j2/gcdval;
    return gcdval*q1*q2;
}

void lcm1::input()
{
    cout<<"Give the 1st number:"<<endl;
    cin>>m;
    cout<<"Give the 2nd number:"<<endl;
    cin>>n;
}

void lcm1::print()
{

    lcm1 ll2;
    cout<<"LCM of " << m << " and "<< n << " is: "<<ll2.get_lcm(m,n)<<endl;
}
