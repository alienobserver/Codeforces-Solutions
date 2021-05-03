import java.util.Scanner;
import java.math.*;

public class smthJava{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while(t--!=0){
            long count = 0;
            long x = sc.nextLong();
            long y = sc.nextLong();
            long a = sc.nextLong();
            long b = sc.nextLong();
            if(2*a > b){
                if(x > y){
                    x-=y;
                    count += y * b;
                    count += x * a;
                }
                else{
                    y -= x;
                    count += x * b;
                    count += y * a;
                }
            }
            else{
                if(x > y){
                    x -= y;
                    count += y * 2*a;
                    count += x * a;
                }
                else{
                    y -= x;
                    count += x * 2*a;
                    count += y * a;
                }
            }
            System.out.println(count);
        }
    }
}