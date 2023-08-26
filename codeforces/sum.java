import java.util.*;
public class sum {
    public static void main(String args[]){

        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();

        for(int i=0; i<t; i++){
            int a=sc.nextInt(), b=sc.nextInt(), c=sc.nextInt();
            
            if(a+b==c || a+c==b || b+c==a){

                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
    }
}
