class Solution {
    public int romanToInt(String s) {
        Map<String, Integer> rti = new HashMap();
        Map<String, Integer> uniqueInstances = new HashMap();
        rti.put("I", 1);
        rti.put("V", 5);
        rti.put("X", 10);
        rti.put("L", 50);
        rti.put("C", 100);
        rti.put("D", 500);
        rti.put("M", 1000);
        
        uniqueInstances.put("IV", 4);
        uniqueInstances.put("IX", 9);
        uniqueInstances.put("XL", 40);
        uniqueInstances.put("XC", 90);
        uniqueInstances.put("CD", 400);
        uniqueInstances.put("CM", 900);
        
        int res = 0, i = 0;
        
        //System.out.println(s.substring(i, i + 2));
       
        
        while(i < s.length()){
            if(i + 1 < s.length() && uniqueInstances.containsKey(s.substring(i, i + 2))){
                res += uniqueInstances.get(s.substring(i, i + 2));
                i += 2;
            } else {
                res += rti.get(s.substring(i,i + 1));
                i++;
            }
        }
        
        //System.out.println(res);
        
        return res;
        
    }
}
