#include <bits/stdc++.h> 
using namespace std; 
void findStrictlyIncreasingNum(int start, string out, int n) 
{ 
    if (n == 0) 
    { 
        cout << out << " "; 
        return; 
    } 
  
    for (int i = start; i <= 9; i++) 
    { 
        string str = out + to_string(i); 

        findStrictlyIncreasingNum(i + 1, str, n - 1); 
    } 
} 
  
int main() 
{ 
    int n = 3; 
    findStrictlyIncreasingNum(0, "", n); 
    return 0; 
} 
