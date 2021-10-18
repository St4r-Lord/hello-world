#include<bits/stdc++.h>
using namespace std;
int main() {
  char a;
  cin>>a;
  switch(a) {
    case 'A': cout<<"Welcome";
              break;
    case 'B': cout<<"Not Welcome";
              break;
    case 'C': cout<<"Ask Permission";
              break;
    default: cout<<"Sorry, try again later";
              break;
  }
  return 0;
}
