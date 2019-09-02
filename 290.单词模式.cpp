/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词模式
 */
class Solution {
public:
bool containsValue(map<char,string>& hash, string value){
    auto it = hash.begin();
    for(; it!=hash.end();it++){
        if(it->second==value) return true;
    }
    return false;
}
bool wordPattern(string pattern, string str) {
    map<char,string> hash;
    vector<string> wordSet;
    int strIndex = 0;
    while(strIndex < str.size()){
        string word;
        for(;str[strIndex]!=' ' and strIndex < str.size();strIndex++){
            word += str[strIndex];
        }
        wordSet.push_back(word);
        strIndex++;
    }
    if(pattern.size()!=wordSet.size()) return false;
    for(int i = 0; i < pattern.size(); i++){
        auto it = hash.find(pattern[i]);
        if(it!=hash.end()){
            if(it->second != wordSet[i]) return false;
        }
        else{
            if(containsValue(hash, wordSet[i])){
                return false;
            }
            else{
                hash[pattern[i]] = wordSet[i];
            }
        }
    }
    return true;
}


};

