/*

Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode"
return 2.

Note: You may assume the string contains only lowercase English letters.

*/

int firstUniqChar(string s)
{
    unordered_map<char,int> letters;
    int i;
     for (i=0;i<s.length();++i)
     {
           letters[s[i]]++;
     }
    for(i=0;i<s.length();i++)
    {
        if(letters[s[i]]==1)
            return  i;
    }
    return -1;
}
