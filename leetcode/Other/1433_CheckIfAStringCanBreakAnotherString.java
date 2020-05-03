// Sun, 3rd May, 2020
class Solution {
    public boolean checkIfCanBreak(String s1, String s2) {
        char arr1[] = s1.toCharArray();
        char arr2[] = s2.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        String min = new String(arr1);
        String max = new String(arr2);
        System.out.println(min);
        System.out.println(max);
        
        boolean success = true;
        for (int i = 0; i < s1.length(); ++i) {
            if (max.charAt(i) < min.charAt(i)) {success = false; System.out.println("breaked max = " + max.charAt(i) + " min = " + min.charAt(i)); break;}
        }
        
        if (success == true) return true;
        min = new String(arr2);
        max = new String(arr1);
        success = true;
        
        for (int i = 0; i < s1.length(); ++i) {
            if (max.charAt(i) < min.charAt(i)) {success = false; System.out.println("breaked max = " + max.charAt(i) + " min = " + min.charAt(i)); break;}
        }
        return success;
    }
}
