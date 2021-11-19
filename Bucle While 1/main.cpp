#include <iostream>

using namespace std;

int main()
{
 int n = 1;
 int k;
 cin >> k;
 bool fin = false;
 while(!fin){
    cout << n << " ";
 if(n == k) fin = true;
 n++;
 }
 return 0;
}
