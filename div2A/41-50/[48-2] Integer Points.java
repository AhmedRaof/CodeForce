import java.util.Scanner;

public class Main {
    public static void function(long a_odd,long a_even,long b_odd,long b_even){
        long sum=a_odd*b_odd+a_even*b_even;
        System.out.println(sum);
    }
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        long t;
        long n,m;
        t=scanner.nextLong();
        for (long i=0;i<t;i++){
            long a_odd=0;
            long a_even=0;
            long b_odd=0;
            long b_even=0;
            n=scanner.nextLong();
            for (long j=0;j<n;j++){
                if(scanner.nextLong()%2==0)a_even++;
                else a_odd++;
            }
            m=scanner.nextLong();
            for (long j=0;j<m;j++){
                if(scanner.nextLong()%2==0)b_even++;
                else b_odd++;
            }
            function(a_odd,a_even,b_odd,b_even);
        }
    }
}
