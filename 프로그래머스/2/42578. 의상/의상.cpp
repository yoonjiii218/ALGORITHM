#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
unordered_map<string, int> um;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    for(auto iter : clothes){
        um[iter[1]]++;
    }
    
    for(auto i : um){
        answer *= (i.second + 1);
    }
    
    answer -= 1;
    
    return answer;
}