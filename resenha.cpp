#include <iostream>
using namespace std;
int main(){
  int N,R;
  cin >> N;
  cin >> R;

  int a,b,c,sum= 0;

  for(int i = 0; i < R; i++){
    cin >> a;
    cin >> b;
    cin >> c;
    sum += c;
  }

  int F;
    cin >> F;
  for(int i = 0; i < F; i++){
    cin >> a;
    cin >> b;
    cin >> c;
    sum += c;

  }
  
  cout << sum;
}