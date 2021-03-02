#include <bits/stdc++.h> 
using namespace std; 
  
// function to evaluate n-th polite number 
double polite(double n) 
{ 
    n += 1; 
    double base = 2; 
    return n + (log((n + (log(n) / 
                 log(base))))) / log(base); 
} 
  
// driver code 
int main() 
{ 
    double n = 7; 
    cout << (int)polite(n); 
    return 0; 
} 
