// There are 2 bottles: one 5 lt and one 3 lt. Neither one is marked aside from the total volume. 
// How can you measure out exactly 4 liter of water from a running tap of water? 
// Pulak Banerjee, 11/10/2023

#include<iostream>

class tap
{
    public:
        int A,B, Amax,Bmax;
        tap();
        void print();
        void input();
        void step1(); // this contains the step till first container is 0 and second container is !=0
        void step2(); // starts from step 1 and makes container equal to 4 litres
};

tap::tap():A(0), B(0)
{}

void tap::input()
{
    std::cout<<"Enter the maximum values of the two containers(which differs by 2) "<<std::endl;
    std::cin>>Amax>>Bmax;
}

void tap::print()
{
    std::cout<<"At this moment, the contents in A and B are: "<<A<<" and "<<B<<std::endl;
}

inline void tap::step1()
{
    if( ( (A==0) && (B==0) ) )
    {
        A=A+Amax; // fill the first container
        B=Bmax;   // fill the second container by flushing from the first container.
        tap::print();
        A=A-B;    // after flushing, keeps the first container with the difference of two containers
        B=A;      // Flushes the second container for 1st time and for 2nd time, flushes the first container
        A=0;
        tap::print();

    }

    else
    {
        std::cout<<"The step1 if did not ran through"<<std::endl;
    }
}

inline void tap::step2()
{
    if( ( (A==0) && (B!=0) ) )
    {
        A=A+Amax; // fill the first container
        tap::print();
        A=A-(Bmax-B);  // empty out the first container so that it contains the final 4 liters
        B=Bmax;   // fill the second container till the brim
    }

    else
    {
        std::cout<<"The step1 if did not ran through"<<std::endl;
    }
}


 int main()
 {
    tap tt;
    tt.input();
    tt.print();
    tt.step1();
    tt.step2();
    tt.print();
    return (0);
 } 
