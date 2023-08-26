import java.util.*;
public class AplusB {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int a,b;

        while(t--<0){
            a=sc.nextInt();
            b=sc.nextInt();
            if(a>0 && b>0 && a<=9 && b<=9){
                System.out.println(a+b);
            }
        }
    }
}