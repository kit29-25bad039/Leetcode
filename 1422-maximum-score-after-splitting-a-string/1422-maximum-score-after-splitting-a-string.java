class Solution {
    public int maxScore(String s) {
        int cnt1 = 0, n = s.length(), cnt0 = 0, ans = 0;
        for (int i = 0; i < n; i++) if (s.charAt(i) == '1') cnt1++;
        if (s.charAt(0) == '1') cnt1--;
        else cnt0++;
        ans = cnt1 + cnt0;
        for (int i = 1; i < n - 1; i++) {
            if (s.charAt(i) == '0') cnt0++;
            else cnt1--;
            ans = Math.max(ans, cnt0 + cnt1);
        }
        return ans;
    }
}