#include"/Users/acephoenix02/bits/stdc++.h"

using namespace std;

int main(){

  int n, a, ans = 0;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>a;
    ans = ans^a;
  }

  cout<<"Unique number is: "<<ans;

  return 0;}
