import java.util.Scanner;

public class dsa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter any Number : ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {

            // Left triangle
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            // Middle spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                System.out.print("  ");
            }

            // Right triangle
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}
 
