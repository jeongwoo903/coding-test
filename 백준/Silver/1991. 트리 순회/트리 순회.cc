#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<char, char> node[26];
int n;

void preOrder(char child) {
  if(child == '.') {
    return;
  }

  cout << child;
  preOrder(node[child-'A'].first);
  preOrder(node[child-'A'].second);
}

void inOrder(char child) {
  if(child == '.') {
    return;
  }

  inOrder(node[child-'A'].first);
  cout << child;
  inOrder(node[child-'A'].second);
}

void postOrder(char child) {
  if(child == '.') {
    return;
  }

  postOrder(node[child-'A'].first);
  postOrder(node[child-'A'].second);
  cout << child;
}


int main(){
  
  cin>>n;
  for(int i=0; i<n; i++){
    char parent, left, right;
    cin >> parent >> left >> right;

    // 문자를 index형식으로 사용하기 위해 parent - 'A'와 같은 형식으로 접근
    node[parent-'A'].first=left;
    node[parent-'A'].second=right;
  }

  preOrder('A');
  cout<<"\n";

  inOrder('A');
  cout<<"\n";

  postOrder('A');
}
