//Finding the last digit of a Fibonacci number.
// Pulak Banerjee, 3/4/2025
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::tuple;
using std::modulus;

class fibo
{
    public:
        fibo(int m); //Conversion constructor
        ~fibo();    // Destructor
        int64_t fibonacci(int n); 
        int64_t fibonaccilast(int n);
    private:
        int n;  
};

fibo::fibo(int m)
{
    m=n;
}

fibo::~fibo()
{
    cout<<"Destructor invoked"<<endl;
}

int64_t fibo::fibonacci(int m)
{
    if(m <= 1)
    {
        return 1;
    }
    return (fibonacci(m-1) + fibonacci(m-2));
}

int64_t fibo::fibonaccilast(int m)
{
    if(m <= 1)
    {
        return 1;
    }
    int64_t ss = (fibonacci(m-1) + fibonacci(m-2))%10;
    return  ss;
}

int main()
{ 
    int num;
    cout<<"Give the Fibonacci n'th integer:"<<endl;
    cin>>num;
    fibo ff(num);
    int64_t fibonumber = ff.fibonacci(num);
    int64_t fibolast = ff.fibonaccilast(num);
    cout<<"The Fibonacci number is: "<<fibonumber<<endl;
    cout<<"The last digit of this Fibonacci number is: "<<fibolast<<endl;
    return (0);
}
