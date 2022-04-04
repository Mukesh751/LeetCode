class Solution {
    public String longestPalindrome(String s) {
         int length = s.length();
        int start = 0, end = length - 1, tempStart = 0, tempEnd = length - 1;
        String str = "";
        if (length <= 1)
            return s;
        else {
            while (start < length) {
                if (s.charAt(tempStart) == s.charAt(tempEnd)) {
                    if (tempStart >= tempEnd) {
                        if (start == 0 && ((end - start + 1) == length)) {
                            str = s;
                            break;
                        }
                        if ((end - start + 1) > str.length()) {
                            str = s.substring(start, end + 1);
                        }
                        start++;
                        end = length - 1;
                        tempStart = start;
                        tempEnd = end;
                    } else {
                        tempStart++;
                        tempEnd--;
                    }
                } else {
                    if (tempStart == tempEnd) {
                        start++;
                        end = length - 1;
                        tempStart = start;
                        tempEnd = end;
                    } else {
                        tempStart = start;
                        end--;
                        tempEnd = end;
                    }
                }
            }
            return str;
        }
    
    }
}