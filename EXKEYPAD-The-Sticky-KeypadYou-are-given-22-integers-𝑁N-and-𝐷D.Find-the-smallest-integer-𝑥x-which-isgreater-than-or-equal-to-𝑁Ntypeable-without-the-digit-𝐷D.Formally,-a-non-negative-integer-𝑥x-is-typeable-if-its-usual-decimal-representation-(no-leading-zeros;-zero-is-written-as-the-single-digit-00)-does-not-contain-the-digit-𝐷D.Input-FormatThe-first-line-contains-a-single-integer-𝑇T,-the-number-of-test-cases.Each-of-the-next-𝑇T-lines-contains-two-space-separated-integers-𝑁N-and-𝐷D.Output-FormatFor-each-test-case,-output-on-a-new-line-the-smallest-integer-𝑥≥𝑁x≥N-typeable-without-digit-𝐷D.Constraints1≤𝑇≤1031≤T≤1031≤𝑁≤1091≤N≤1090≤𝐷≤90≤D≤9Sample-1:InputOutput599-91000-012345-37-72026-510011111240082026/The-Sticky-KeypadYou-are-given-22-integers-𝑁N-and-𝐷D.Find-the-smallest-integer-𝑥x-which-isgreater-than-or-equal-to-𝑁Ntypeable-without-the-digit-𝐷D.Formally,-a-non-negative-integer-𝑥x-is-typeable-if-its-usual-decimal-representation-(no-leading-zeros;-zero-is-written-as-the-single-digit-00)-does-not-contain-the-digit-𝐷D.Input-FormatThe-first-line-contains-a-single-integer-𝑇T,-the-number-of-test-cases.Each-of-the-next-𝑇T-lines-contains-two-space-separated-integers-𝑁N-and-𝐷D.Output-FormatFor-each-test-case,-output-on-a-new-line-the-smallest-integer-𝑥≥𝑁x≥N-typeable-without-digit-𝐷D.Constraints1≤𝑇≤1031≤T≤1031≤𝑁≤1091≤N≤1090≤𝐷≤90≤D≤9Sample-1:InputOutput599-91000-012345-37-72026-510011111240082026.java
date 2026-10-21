{
    static boolean typeable(long n, int d)
    {
        //Set<Integer> s = new HashSet<>();
        while(n>0)
        {
            if(n%10 == d) return true;
            //s.add(n%10);
            n=n/10;
        }
        return false;
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            long n = sc.nextLong();
            int d = sc.nextInt();
            while(typeable(n,d)){
                n++;
            }
            System.out.println(n);
        }
    }
}
