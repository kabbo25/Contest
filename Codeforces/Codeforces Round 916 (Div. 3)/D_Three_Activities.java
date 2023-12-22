import java.awt.Point;
import java.util.Arrays;
import java.util.Scanner;

public class D_Three_Activities {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n-- > 0) {
            int x = sc.nextInt();
            Point[] A = new Point[x], B = new Point[x], C = new Point[x];
            int res = 0;
            for (int i = 0; i < x; i++) {
                A[i]=new Point(sc.nextInt(),i+1);
            }
            for (int i = 0; i < x; i++) {
                B[i]=new Point(sc.nextInt(),i+1);
            }
            for (int i = 0; i < x; i++) {
                C[i]=new Point(sc.nextInt(),i+1);
            }
            Arrays.sort(A, (o1, o2) -> o2.x- o1.x);
            Arrays.sort(B,(o1, o2) -> o2.x- o1.x);
            Arrays.sort(C,(o1, o2) -> o2.x- o1.x);
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 3; k++) {
                        if (A[i].y == B[j].y || B[j].y == C[k].y || C[k].y == A[i].y) continue;
                        res = Math.max(res, A[i].x + B[j].x + C[k].x);
                    }
                }
            }
        System.out.println(res);
        }
        sc.close();
    }
}