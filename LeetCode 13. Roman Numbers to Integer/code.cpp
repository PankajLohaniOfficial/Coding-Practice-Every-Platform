class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> m; // isme hamne hash map banaya hai..

        // ISME HAM LOG HASH MAP MAI VALUE PUT KAR RHE THAI
        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X', 10});
        m.insert({'L', 50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});

        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == s.size() - 1)
            {                   // this checks that the current one is the last one of the string or not
                ans += m[s[i]]; // if yes it will add  simply the value to the ans since after it no element is there to compare...
            }
            else if (m[s[i]] >= m[s[i + 1]])
            {                   // check if the value of current roman numeral is greater than or equal to the value of the next numeral.
                ans += m[s[i]]; // Add value if the current Roman numeral is greater than or equal to the next one
            }
            else
            {
                ans -= m[s[i]]; // Subtract value if the current Roman numeral is smaller than the next one
            }
        }
    }

    return ans;
}
}
;