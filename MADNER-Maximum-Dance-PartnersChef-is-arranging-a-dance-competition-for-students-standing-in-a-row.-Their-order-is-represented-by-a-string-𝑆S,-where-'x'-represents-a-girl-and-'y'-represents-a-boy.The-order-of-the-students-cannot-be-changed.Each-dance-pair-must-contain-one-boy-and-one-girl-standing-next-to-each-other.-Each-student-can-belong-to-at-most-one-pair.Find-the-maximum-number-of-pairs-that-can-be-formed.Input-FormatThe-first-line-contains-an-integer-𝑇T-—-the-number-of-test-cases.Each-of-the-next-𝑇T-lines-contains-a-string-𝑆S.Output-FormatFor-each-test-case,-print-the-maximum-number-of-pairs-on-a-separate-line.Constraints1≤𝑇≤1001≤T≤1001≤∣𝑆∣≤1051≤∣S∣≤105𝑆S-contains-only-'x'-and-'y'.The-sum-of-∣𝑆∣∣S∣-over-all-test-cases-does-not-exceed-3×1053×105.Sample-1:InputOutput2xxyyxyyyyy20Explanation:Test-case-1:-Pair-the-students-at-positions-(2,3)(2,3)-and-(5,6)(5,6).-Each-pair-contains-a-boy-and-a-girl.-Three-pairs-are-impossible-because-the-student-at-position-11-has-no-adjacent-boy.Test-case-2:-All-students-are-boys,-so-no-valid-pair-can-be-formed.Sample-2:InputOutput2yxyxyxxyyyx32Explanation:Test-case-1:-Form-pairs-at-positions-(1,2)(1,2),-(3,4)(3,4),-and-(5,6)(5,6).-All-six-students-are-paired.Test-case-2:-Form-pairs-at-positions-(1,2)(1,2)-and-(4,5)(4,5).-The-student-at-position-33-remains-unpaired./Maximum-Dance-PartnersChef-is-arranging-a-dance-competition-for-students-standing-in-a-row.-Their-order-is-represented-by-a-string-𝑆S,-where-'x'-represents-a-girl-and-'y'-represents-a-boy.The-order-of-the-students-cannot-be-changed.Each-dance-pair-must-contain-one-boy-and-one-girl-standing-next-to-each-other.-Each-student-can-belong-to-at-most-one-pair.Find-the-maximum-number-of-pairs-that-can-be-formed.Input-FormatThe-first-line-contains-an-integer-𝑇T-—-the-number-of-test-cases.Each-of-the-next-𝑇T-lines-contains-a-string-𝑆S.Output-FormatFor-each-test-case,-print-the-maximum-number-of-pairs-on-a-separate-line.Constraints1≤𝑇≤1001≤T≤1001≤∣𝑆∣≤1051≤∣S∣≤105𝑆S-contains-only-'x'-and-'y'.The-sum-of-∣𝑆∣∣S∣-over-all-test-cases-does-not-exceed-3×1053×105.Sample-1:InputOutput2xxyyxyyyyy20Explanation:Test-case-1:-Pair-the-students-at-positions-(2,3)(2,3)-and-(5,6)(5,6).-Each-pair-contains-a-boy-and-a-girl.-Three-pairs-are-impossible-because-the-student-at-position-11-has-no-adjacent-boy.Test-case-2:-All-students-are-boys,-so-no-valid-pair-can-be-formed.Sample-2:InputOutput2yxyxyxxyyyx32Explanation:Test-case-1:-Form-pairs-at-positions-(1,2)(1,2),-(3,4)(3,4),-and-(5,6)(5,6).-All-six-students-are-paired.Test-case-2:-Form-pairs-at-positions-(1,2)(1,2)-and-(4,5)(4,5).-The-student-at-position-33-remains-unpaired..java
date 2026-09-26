class Solution {
    public int findMaximumPairs(String s) {
        // write your code here 
        int n = s.length();
        int c=0;
        for(int i=0;i<n-1;)
        {
            if((s.charAt(i)== 'x' && s.charAt(i+1) == 'y') || (s.charAt(i)== 'y' && 
                s.charAt(i+1) == 'x'))
            {
                i=i+2;
                c++;
            }
            else{
                i++;
            }
        }
        return c;
    }
}
