
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author CappyHoding
 */
public class Solution {

    /**
     * @param args the command line arguments
     */
    public static boolean calculate(String a) {
        for(int i=0; i<a.length(); i++){
            String s = new String(a);
            
            char last = s.charAt(0);
            
            String x = new String(""+last);
            s = s.concat(x);
            
            s = s.substring(1, s.length());
            
            System.out.println(s);
            
            BigInteger bil = new BigInteger(s);
            BigInteger mod = new BigInteger("50");
            BigInteger nol = new BigInteger("0");
            a = s;
            
            if(bil.mod(mod).equals(nol)){
                return true;
            }
        }
        return false;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String bil;
        int n;
        
        n = sc.nextInt();
        
        if(n==0) System.out.println("");
        
        for(int i=1;i<=n;i++){
            bil = sc.next();
            System.out.print("Case #" + i +": ");
           
            if(calculate(bil)){
                System.out.println("YA");
            }else{
                System.out.println("TIDAK");
            }
        }
    }
    
}
