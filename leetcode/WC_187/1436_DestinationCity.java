// Sun, 3rd May, 2020 - Leetcode Weekly Contest 187, #A
class Solution {
    public String destCity(List<List<String>> paths) {
        Map<String, String> map = new HashMap();
        for(int i = 0; i < paths.size(); ++i) {
            map.put(paths.get(i).get(0), paths.get(i).get(1));
        }
        
        String destination = paths.get(0).get(0);
        while (true) {
            if (map.get(destination) == null) return destination;
            destination = map.get(destination);
        }
    }
}
