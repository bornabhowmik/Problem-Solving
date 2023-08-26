import java.util.*;
public class AplusB {
    public static void main(String args[]) {

        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();

        for(int i=0; i<t; i++){
            String stringLine=sc.nextLine();
            int result= Character.getNumericValue(stringLine.charAt(0)) + Character.getNumericValue(stringLine.charAt(2));

            System.out.println(result);
        }

        sc.close();
    }
}