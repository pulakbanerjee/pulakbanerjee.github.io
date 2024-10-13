// Find the max pairwise product among a given input set of numbers.
// Using brute force algorithm
// Pulak Banerjee, 13/10/2024

#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::max;
using std::endl;

class pairwise
{
    private:
        int n;
    public:
        pairwise() {int n=0; vector<int>  arrinit={0};}
        void  findmax();
};

void pairwise::findmax()
{
    int pdt = 0;
    cout<<"Enter the total number of datas:" <<endl;
    cin>>n;
    vector<int>  arrinit(n); 
    cout<<"Enter the array elements:"<<endl;
    for (int ii = 0; ii < n; ii++)
    {
        cin>>arrinit[ii];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            pdt = max(pdt, arrinit[i]*arrinit[j]);
        }
    }
    cout<<"The max of pairwise product among the numbers is:" <<pdt<<endl;
}

int main()
{
    pairwise pp1;
    pp1.findmax();
    return (0);
}