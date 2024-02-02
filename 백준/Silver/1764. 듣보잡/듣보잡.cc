#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
 
#define endl '\n'
 
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

    int N, M;
    string name;
    map<string, int> m;
    vector<string> result;
    
    cin >> N >> M;
    
    int sum = N+M;
    
    while(sum--){
        cin >> name;
        
        m[name]++;

        if(m[name] > 1){
            result.push_back(name);
        }
    }
    
    sort(result.begin(), result.end());
    cout << result.size() << endl;
    
    for(int i=0; i< result.size(); i++){
        cout << result[i] << endl;
    }
}