//first unique character in a  string.cpp
class Solution {
public:
    int firstUniqChar(string s) {                     
      map<char,int >m;// m is that initilize variable to char 
        for(char ans : s) //string read
        {
            m[ans]++;
    }
    for (int i=0; i<s.size(); i++)
    {
        if(m[s.at(i)]==1)
        {
            return i;
        }}
    return -1;
        }};

// problem 2- 
//Ransom Note.cpp leetcode
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
     // For loop that holds the frequency of characters in magazine
        for(int i = 0; i < magazine.length(); i++) 
        {
            map[magazine[i]]++;
        }
     // Iterate through ransomNote and check if there are sufficient characters to create ransom note
        for(int i = 0; i < ransomNote.length(); i++)
        {
            if(map[ransomNote[i]] == 0) // No characters available, thus return false
                return false;
            else
                map[ransomNote[i]]--; // Reduce the available chars for char at ransomNote[i]
        }
        return true; 
    }
};




// problem 3  leet code
// Valid Anagram .cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> counts(26, 0);
        for (int i = 0; i < s.size(); ++i) {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (const auto count : counts) {
            if (count != 0) return false;
        }
        return true;
    }
};
