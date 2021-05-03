import java.util.Scanner;
import java.math.*;

public class Cf {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t--!=0){
            long n = sc.nextLong();
            long arr[] = new long[100+1];
            long count = 1;
            long maxim = 0;
            for(int i = 0; i < n; i++){
                arr[i] = sc.nextLong();
                if(i != 0 && arr[i] == arr[i-1]) count++;
                else{
                    maxim = Math.max(count, maxim);
                    count = 1;
                }
            }
            System.out.println(Math.max(maxim, count));
        }
    }
}