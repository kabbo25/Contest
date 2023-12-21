import java.util.ArrayList;
import java.util.Scanner;
public class C_Quests{
    static Scanner sc = new Scanner(System.in);
    public static void solve(){
        int n=sc.nextInt();
        int k=sc.nextInt();
        ArrayList<Integer> a= new ArrayList<>();
        ArrayList<Integer> b= new ArrayList<>();
        ArrayList<Integer> prefix_max= new ArrayList<>();
        
        for(int i=1;i<=n;++i){
            a.add(sc.nextInt());
        }
        for(int i=1;i<=n;++i)
            b.add(sc.nextInt());
        for(int i=0;i<n;++i){
            if(i==0)prefix_max.add(b.get(i));
            else prefix_max.add(Math.max(prefix_max.get(i-1),b.get(i)));
        }
        int []dp= new int[n];
        int prefix_sum=0;
        for(int i=0;i<n;++i){
            prefix_sum+=a.get(i);
            if(i>0)
                dp[i]=dp[i-1];
            if(i>=k)continue;
            int rem=(k-(i+1));
            dp[i]=Math.max(dp[i],rem*prefix_max.get(i)+prefix_sum);
        }
        System.out.println(dp[n-1]);   
    }
    public static void main(String[] args){
        
        int t=sc.nextInt();
        for(int i=1;i<=t;++i){
            solve();
        }
        sc.close();
    }

}