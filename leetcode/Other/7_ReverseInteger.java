// Mon, 26th Oct, 2020
class Solution {
    public int reverse(int x) {
        String s = String.valueOf(x);
        String rev = ""; int lower = 0;
        if (s.charAt(0) == '-') {rev += "-"; lower = 1;}
        for (int i = s.length()-1; i >= lower; --i) {
            rev += s.charAt(i);
        }
        
        try{
            return Integer.parseInt(rev);
        }
        catch (Exception e) {
            return 0;
        }
    }
}
