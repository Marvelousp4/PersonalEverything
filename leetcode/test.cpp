#include "all.h"
using namespace std;
const int N = 2510;

int longestContinuousSubstring(string s)
{
    int res = 0;
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        j = i + 1;
        int t = s[i] - 'a';
        while (j < s.size() && ++t == s[j] - 'a') {
            res = max(res, j - i + 1);
            j++;
        }
    }
    return res == 0 ? 1 : res;
}
int main()
{
    string s = "abcde";
    string s1 = "pcfftiovoygwwncfgews";
    cout << longestContinuousSubstring(s);
    cout << longestContinuousSubstring(s1);
}