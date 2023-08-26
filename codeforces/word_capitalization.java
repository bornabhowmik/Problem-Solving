import java.util.*;
public class word_capitalization {

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String s="";
        if(sc.hasNext())
            s = sc.nextLine();
        System.out.println(s.substring(0,1).toUpperCase()+s.substring(1));
        sc.close();
    }
}
