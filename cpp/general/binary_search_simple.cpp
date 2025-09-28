// Simple binary search program to find if a sorted list contains a specific item. The code returns the number of itartations needed to find the number. It returns nothing, if the number is not found.
// Pulak Banerjee, 28/09/2025

#include<iostream>
#include<vector>
using namespace std;

int main()
{
std::vector<int> myvect1;
int start;
int end;

int item = 34848;
//int item = 110;
myvect1={1,3,5,7,9,11,13,15,17,21,100,112,145,156,199,221,10010,34848,8393838,17163519};

// print the vector

//for (int y : myvect1)
//        std::cout<<"print the vector: "<<y<<std::endl;

int low = 0;
int count=0;
int high =  myvect1.size()-1;
int mid=0;
int guess=0;

while(low<=high)
{
  mid = (low/2+high/2);
  guess = myvect1[mid];

if(guess == item)
{
  cout<<"Number found in the list. Number of iterations needed are "<<count<<"."<<endl;
break;
}

if (guess > item)
{
  high=mid-1;
  count = count+1;

}
else
{
  low = mid+1;
  count = count+1;
}
}

return(0);
}
