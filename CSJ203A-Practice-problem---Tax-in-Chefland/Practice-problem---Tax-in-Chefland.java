// Solution as follows
import java.util.Scanner;

class Codechef
{
    public static void main (String[] args)
    {
        Scanner read = new Scanner(System.in);
        
        int t = read.nextInt();
        for(int i=0; i<t; i++)
        {
            int x = read.nextInt();
            
            // Primary condition in the problem statement
            if(x>100){
                System.out.println(x-10);
            }
            else{
                System.out.println(x);
            }
        }
    }
}