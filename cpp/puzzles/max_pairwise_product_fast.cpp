// Fast algorithm for max pairwise product.
// Pulak Banerjee, 15/10/2024
#include<iostream>
#include<vector>
#include<cstdlib>

using std::vector;
using std::cin;
using std::cout;
using std::max;
using std::endl;
using std::rand;

class pairwise
{
    private:
        int n=100;
    public:
        int64_t  findmax();
        void  generate();
        vector<int64_t> a;
};

void pairwise::generate()
{

srand(time(0));
for(int i=0;i<=n;i++)
{
    a.push_back(rand()%10000);
}
}

int64_t  pairwise::findmax()
{
    int64_t pdt = 0;
    int index1=0;
    int index2=0;
    
        index1 = 0 ; 

    for (int i = 1; i <= n; ++i)
    {
        if(a[i] > a[index1])
        {
            index1 = i;
        }
            if(index1 == 0) 
            { 
                index2 = 1; 
           }
            else 
            {
                index2=0;
            }
    }
    for (int i = 1; i <= n; ++i) 
    {
        if(a[i] != a[index1] & a[i] > a[index2] )
        {
            index2 = i;
        }
    }    
    pdt = a[index1] * a[index2];
    return pdt;
}

int main()
{
    pairwise pp1;
    int64_t pp2;
    
    pp1.generate();
    pp2 = pp1.findmax();
    cout<<"The max of pairwise product among the numbers is: "<<pp2<<endl;
    return (0);
}
