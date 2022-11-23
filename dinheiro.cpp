#include <iostream>
#include <vector>
using namespace std;
int main(){

  int N,M;
  cin >> N >> M;
  vector<int> debitos;
  int o;
  for (int i = 0; i < N; i++){
    cin >> o;
    debitos.push_back(o);
  }
  
  int X,Y;
  for (int i = 0; i < M; i++){
    cin >> X >> Y;
    debitos[Y] = debitos[X] + debitos[Y]; 
    if (debitos[Y] < 0){
      cout << "IMPOSSIBLE";
      return 0;
    }
  }
  cout << "POSSIBLE";

  return 0;
}