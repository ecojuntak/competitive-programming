
import java.io.BufferedReader;
import java.math.BigInteger;
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author CappyHoding
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        BigInteger res = new BigInteger("0");
        n = sc.nextInt();
        
        for(int i=0 ;i<n;i++){
            String bil = sc.next();
            BigInteger a = new BigInteger(bil);
            res = res.add(a);
        }
        
        String last = Integer.toString(n);
        BigInteger asd = new BigInteger(last);
        res = res.add(asd);
        
        System.out.println(res);
        
    }
    
}
