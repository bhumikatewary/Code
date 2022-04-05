class Solution {
public:
    string freqAlphabets(string s) {
         for (int i = s.size() - 1; i >= 0; i--) { // "21#10#15" = (5 -> 1 -> 10# -> 21#)
            if (s[i] != '#') {
				// ASCII - '1' = 49;   49 + 48 = 97 = 'a'
                s.replace(i, 1, string(1, s[i] + 48));
            } else {
                // Example - 10# -> '1' + '0' + (first_number * 9) = 49 + 48 + (1 * 9) = 106 = 'j' 
                // Example - 21# -> '2' + '1' + (first_number * 9) = 50 + 49 + (2 * 9) = 117 = 'u' 
                s.replace(i - 2, 3, string(1, s[--i] + s[--i] + ((s[i] - '0') * 9))); 
            }
        }
        return s;
    }
};
