/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,char> smap, tmap;
        for (size_t i = 0; i < s.size(); i++){
            char sc = s[i], tc = t[i];
            if(smap.count(sc)){
                if(smap[sc] != tc) return false;
            }
            else if(tmap.count(tc)){
                if(tmap[tc] != sc) return false;
            }
            else{
                smap[sc] = tc;
                tmap[tc] = sc;
            }
        }
        return true;
    }
};

