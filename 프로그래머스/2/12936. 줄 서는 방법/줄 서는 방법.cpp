#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long factorial(int a) {
    if(a <= 1) return 1;
    else return a * factorial(a - 1);
}

void comb(vector<int> &temp, vector<int> &answer, long long &k) {
    if(temp.size() == 1) {
      answer.push_back(temp[0]);
      return;
    }

    long long fac = factorial(temp.size() - 1);
    
    for(int i = 0; i < temp.size(); i++) {
      if((i + 1) * fac >= k) {
        answer.push_back(temp[i]);
        temp.erase(temp.begin() + i);
        k = k - i * fac;
        comb(temp, answer, k);
      }
    }
} 

vector<int> solution(int n, long long k) {
    vector<int> answer;
    vector<int> temp(n);
    
    for(int i = 0; i < n; i++) { temp[i] = i + 1; }
    comb(temp, answer, k);
    
    return answer;
}