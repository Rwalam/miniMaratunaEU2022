#include <iostream>
#include <vector>
using namespace std;
int main(){

  int N;
  float L,Q;
  cin >> N >> L >> Q;
  
  vector<string> nomes;
  string x;
  for (int i = 0; i < N; i++){
    cin >> x;
    nomes.push_back(x);
  }
  
  float res = L;
  int p = 0;
  while(res >= Q){
    res -= Q;
    p++;
  }
  int z = p%N;
  
  cout << nomes[z] << " ";
  printf("%.1f\n", res);
  
  
  
}