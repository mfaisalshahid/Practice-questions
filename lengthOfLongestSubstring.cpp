int lengthOfLongestSubstring(string s) {
// vector <int> count;
// for(int i = 0 ; i < s.length() ; i++)
//  {
//      std::vector<int>::iterator it = std::find(count.begin(), count.end(), s[i]);
//          if (it == count.end()){
//              count.push_back(s[i]);
//          }
//         else{
//             int finals = count.size();
//             return finals;
//         }
//  }
//     return 0;   
unordered_set <char> stringSet;
int left = 0, right = 0, maximum = 0;
//the rigth pointer need to go to the end so that is why should be less than size
while(right<s.size()){
    if (stringSet.find(s[right]) == stringSet.end()){
        stringSet.insert(s[right]);
        right++;
        int setSize = stringSet.size();
        maximum = max(maximum, setSize);
    }
    else{
        stringSet.erase(s[left]);
        left++;

    }
}
return maximum;
}
