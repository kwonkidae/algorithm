#include "../stdc++.h"
using namespace std;

int main() {
  queue<int> q;
  q.push(30);
  q.push(11);

  while(q.empty() == false)
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
  return 0;
}
