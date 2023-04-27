#include<iostream>
#include<vector>
using namespace std;

/**
 *  @brief Count prime numbers within the range of number
 *  strickly less than number.
 * 
 * if n = 10,  2,3,5,7 are prime numbers.
 * so total number of prime numbers are 4. 
 * count primes and return.
 * 
 * @return int 
 */
   
int main()
{
    int n = 10;
    int count = 0;
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++)
    {
        if(prime[i])
        {
            count++;

            for(int j=2*i; j<n; j=j+i)
            {
                prime[j] = false;
            }
        }
    }

    cout<<"Total Prime Count : "<<count<<endl;
}