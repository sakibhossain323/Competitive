#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

using ll = long long;
#define MOD 1000000007


// Add macro and global variables for solutions here



class testcase
{
    public:
        //add input data of testcases here

        long long var1, var2, var3;
        
};

class solution
{
    public:
        //add output data of testcases here

        long long result;
};


ll rnd(ll a, ll b)
{
    return a + rand() % (b-a+1);
}

testcase generate()
{
    testcase test;

    // Assign values according to constrains
    test.var1 = rnd(1, 1e18);
    test.var2 = rnd(1, 1e18);
    test.var3 = rnd(1, 1e18);

    return test;
}

// Add functions required for optimized solution here



solution ac(testcase test)
{
    
    
    
    // Assign results to solution members;
    solution sol;

    return sol;
}

// Add functions required for optimized solution here



solution wa(testcase test)
{
    


    // Assign results to solution members;
    solution sol;

    return sol;
}



bool diff(solution sol1, solution sol2)
{
    // Return true if soltuions dont match.

    return true;
}   

int main ()
{
    ll passed = 1;
    while(true)
    {
        testcase test = generate();



        solution sol1 = ac(test);
        solution sol2 = wa(test);
        


        if(diff(sol1, sol2))
        {
            cout << "\n######test failed(" << passed++ << ")\n";
            break;
        }
        cout << "------test passed(" << passed++ << ")\n";

        Sleep(2000);
    }
    

    return 0;
}