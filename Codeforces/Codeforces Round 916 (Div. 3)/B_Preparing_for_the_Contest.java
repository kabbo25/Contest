import java.util.Scanner;

public class B_Preparing_for_the_Contest {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            StringBuilder output = new StringBuilder();

            int start = Math.max(a - b, 1);
            for (int i = start; i <= a; ++i) {
                output.append(i).append(" ");
            }

            for (int i = 1; i < start; ++i) {
                output.insert(0, i + " ");
            }

            System.out.println(output.toString().trim());
        }

        sc.close();
    }
}
