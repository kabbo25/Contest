import java.util.*;
public class Maximum_Score {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testCases = scanner.nextInt();
        for (int t = 0; t < testCases; t++) {
            int n = scanner.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }

            Map<Integer, Integer> itemCount = new HashMap<>();
            for (int item : a) {
                itemCount.put(item, itemCount.getOrDefault(item, 0) + 1);
            }

            int one = 0;
            int zero = 0;
            for (Map.Entry<Integer, Integer> entry : itemCount.entrySet()) {
                int key = entry.getKey();
                int value = entry.getValue();
                if (key == 1) {
                    one = value;
                } else {
                    zero = value;
                }
            }

            System.out.println(Math.min(one, zero));
        }
        scanner.close();
    }
}
