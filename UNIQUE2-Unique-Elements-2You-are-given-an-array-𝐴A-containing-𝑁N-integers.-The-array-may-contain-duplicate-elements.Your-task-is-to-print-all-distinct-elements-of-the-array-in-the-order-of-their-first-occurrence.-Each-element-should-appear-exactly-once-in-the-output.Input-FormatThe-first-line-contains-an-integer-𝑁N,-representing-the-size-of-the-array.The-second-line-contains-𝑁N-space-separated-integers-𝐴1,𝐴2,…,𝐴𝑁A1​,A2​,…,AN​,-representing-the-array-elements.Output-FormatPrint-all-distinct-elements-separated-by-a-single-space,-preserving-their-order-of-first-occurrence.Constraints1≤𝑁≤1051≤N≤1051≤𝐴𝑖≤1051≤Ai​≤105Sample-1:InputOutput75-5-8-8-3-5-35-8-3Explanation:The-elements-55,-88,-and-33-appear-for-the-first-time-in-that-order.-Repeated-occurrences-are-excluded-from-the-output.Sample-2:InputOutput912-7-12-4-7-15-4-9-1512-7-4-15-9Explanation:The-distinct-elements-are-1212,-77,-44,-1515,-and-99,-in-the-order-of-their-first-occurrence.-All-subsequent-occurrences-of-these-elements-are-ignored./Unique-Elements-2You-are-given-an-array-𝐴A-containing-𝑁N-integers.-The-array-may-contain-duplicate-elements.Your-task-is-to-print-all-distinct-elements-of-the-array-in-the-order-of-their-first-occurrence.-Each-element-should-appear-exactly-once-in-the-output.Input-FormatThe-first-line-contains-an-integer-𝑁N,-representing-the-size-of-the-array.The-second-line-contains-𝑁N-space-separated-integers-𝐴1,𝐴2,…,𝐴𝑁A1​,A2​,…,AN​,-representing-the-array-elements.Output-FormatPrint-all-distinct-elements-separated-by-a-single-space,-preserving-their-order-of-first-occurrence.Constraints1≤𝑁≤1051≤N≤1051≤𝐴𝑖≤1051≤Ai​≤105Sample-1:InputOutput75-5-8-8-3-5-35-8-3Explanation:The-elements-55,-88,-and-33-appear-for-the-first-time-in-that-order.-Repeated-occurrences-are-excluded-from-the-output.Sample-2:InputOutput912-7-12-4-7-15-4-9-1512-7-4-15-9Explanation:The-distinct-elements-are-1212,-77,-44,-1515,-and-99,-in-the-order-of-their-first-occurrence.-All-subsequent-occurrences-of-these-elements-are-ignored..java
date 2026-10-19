import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Set<Integer> s = new LinkedHashSet<>();
        while(n-->0){
            s.add(sc.nextInt());
        }
        for(int x:s)
        {
            System.out.print(x+" ");
        }
    }
}
