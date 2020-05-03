// Sat, 2nd May, 2020 - Leetcode Biweekly Contest 25, #B
class Solution {
    public int maxDiff(int num) {
        StringBuilder s = new StringBuilder(String.valueOf(num));
        boolean found = false;
        int min, max;
        char mins='/', maxs;
        char goal = '/';
        if (s.charAt(0) != '1') {goal = s.charAt(0); found = true; mins = '1';}
        for (int i = 0; i < s.length(); ++i) {
            char c = s.charAt(i);
            if (!found && c != '1' && c != '0') {
                goal = c;
                found = true;
                mins = '0';
            } 
            if (found && c == goal) {
                s.setCharAt(i, mins);
            }
        }
        min = Integer.parseInt(s.toString());
        s = new StringBuilder(String.valueOf(num));
        goal = '/'; maxs = '9';
        found = false;
        for (int i = 0; i < s.length(); ++i) {
            char c = s.charAt(i);
            if (!found && c != maxs) {
                found = true;
                goal = c;
            }
            if (found && c == goal){
                s.setCharAt(i, maxs);
            }
        }
        max = Integer.parseInt(s.toString());

        return max - min;
    }
}
