#include <string>
#include <vector>

using namespace std;

int answer = 0;

void make_target(vector<int> number, int t, int sum, int idx){
    if(idx == number.size()){
        if(sum == t){
            answer++;
        }   
        return;
    }
    
    make_target(number, t, sum + number[idx], idx + 1);
    make_target(number, t, sum - number[idx], idx + 1);
}

int solution(vector<int> numbers, int target) {
    make_target(numbers, target, 0, 0);    
    return answer;
}