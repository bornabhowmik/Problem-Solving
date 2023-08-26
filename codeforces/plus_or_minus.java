import java.util.*;

public class plus_or_minus {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        int a, b, c;

        for(int i = 0; i<t; i++){
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            if(a+b == c){
                System.out.println("+");
            }else{
                System.out.println("-");
            }
        }
    }
}
