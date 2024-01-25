import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
public class A_Problemsolving_Log {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();
      for (int i = 1; i <= t; ++i) {
         int n = sc.nextInt();
         String s = sc.next();
         HashMap < Character, Integer > mp = new HashMap < > ();
         for (int j = 0; j < n; ++j) {
            mp.put(s.charAt(j), mp.getOrDefault(s.charAt(j), 0) + 1);

         }
         int ans = 0;
         for (Map.Entry < Character, Integer > entry: mp.entrySet()) {
            int need = entry.getKey() - 'A' + 1;
            if (entry.getValue() >= need) {
               ans++;
            }
         }
         System.out.println(ans);
      }

      sc.close();
   }
}