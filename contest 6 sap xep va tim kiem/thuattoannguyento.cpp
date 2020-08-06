//cac thuat toan liet ke so nguyen to 
//
#include<iostream>
#include<algorithm>
#include<string.h>
//#include<bits/stdc.h>
using namespace std;
//thuat toan sieve of eratosthenes 
//Time complexity : O(n*log(log(n)))
void SieveOfEratosthenes(int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 

//thua toan don gian 
//time N*N
bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) return false; 
    return true; 
} 

//thuat toan cai tien 
//time n^3/2
bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 
void printPrime(int n) 
{ 
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) 
            cout << i << " "; 
    } 
} 


//thuat toan khac
void primesInRange(int n) 
{ 
    // Compute factorials and apply Wilson's  
    // theorem. 
    int fact = 1; 
    for(int k=2;k<n;k++){ 
        fact = fact * (k - 1); 
        if ((fact + 1) % k == 0) 
            cout<<k<<endl; 
            } 
} 
  
int main(){
	 int n = 1000000; 
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl; 
    SieveOfEratosthenes(n); 

	return 0;
}

