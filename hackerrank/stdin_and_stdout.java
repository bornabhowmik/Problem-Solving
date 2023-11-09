import java.util.Scanner;

public class stdin_and_stdout {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            int a = scanner.nextInt();
            System.out.println(a);
        }

        scanner.close();
    }
}