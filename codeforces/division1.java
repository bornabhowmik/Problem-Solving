import java.util.*;

public class division1 {
    public static void main(String args[]) {

        Scanner scan = new Scanner(System.in);
        
        int t = scan.nextInt();
        int rating = scan.nextInt();

        while(t-- < 0) {
            if(1900 <= rating) {
                System.out.println("Division 1");
            } 
            if(1600 <= rating && rating <= 1899) {
                System.out.println("Division 2");
            }
            if(1400<=rating && rating<=1599) {
                System.out.println("Division 3");
            }
            if(rating <= 1399) {
                System.out.print("Division 4");
            } 
        }
        
    }
} 