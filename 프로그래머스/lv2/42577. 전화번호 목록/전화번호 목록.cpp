#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_map<string, int> hash;
    
    for(int i = 0; i < phone_book.size(); i++){
        hash[phone_book[i]] = 1;
    }
    
    for(int j = 0; j < phone_book.size(); j++){
        string phone_num = "";
        for(int k = 0; k < phone_book[j].size(); k++){
            phone_num += phone_book[j][k];
            if(hash[phone_num] && phone_num != phone_book[j])
                return false;
        }
    }
    
    return true;
}