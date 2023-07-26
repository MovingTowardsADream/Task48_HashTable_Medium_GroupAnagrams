#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> words;
        std::string tmp;
        for (int i = 0;i < strs.size();i++) {
            tmp = strs[i];
            std::sort(tmp.begin(), tmp.end());
            words[tmp].push_back(strs[i]);
        }
        std::vector<std::vector<std::string>> result;
        for (auto& i : words) {
            result.push_back(i.second);
        }
        return result;
    }
};
