# include<iostream>
# include<algorithm>
# include<map>
using namespace std;

/*
    kiểm tra t có số kí tự giống của s
*/
class Solution
{
    public:
        bool isAnagram(string s, string t) {
            // loại bỏ khi thứ tự không bằng nhau
            if( s.size() != t.size() ) return false;

            // dùng bảng đo tần suất để kiểm tra
            int tanSuat[256] = {0};
            for(int i=0; i<s.size(); i++)
            {
                tanSuat[s[i]]++;
                tanSuat[t[i]]--;
            }

            for( auto& x : tanSuat)
            {
                if( x != 0) return false;
            }
            return true;
        }
};


int main()
{
    Solution l;
    string s = "anagram";
    string t = "anagram"; 
    cout<< l.isAnagram(s, t)<<endl;
}
