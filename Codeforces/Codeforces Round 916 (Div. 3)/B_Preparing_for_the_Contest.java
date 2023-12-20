import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class B_Preparing_for_the_Contest {
    public static void main(String[] args) throws IOException {
        Scanner sc= new Scanner(System.in);
        int t=sc.nextInt();
        for(int k=1;k<=t;++k){
            int a=sc.nextInt();
            int b=sc.nextInt();
            boolean [] arr= new boolean[a+1];
            ArrayList<Integer> ans= new ArrayList<Integer>();
            ArrayList<Integer> ans1= new ArrayList<Integer>();
            arr[Math.max(a-b,1)]=true;
            ans.add(Math.max(a-b,1));
            for(int j=1;j<=a;++j){
                if(arr[j])continue;
                if(ans.get(0)>j)
                    ans1.add(j);
            }
        Collections.sort(ans1,Collections.reverseOrder());
        ans.addAll(ans1);
        for(int i=ans.get(0)+1;i<=a;++i)
            ans.add(i);
        for(int i=0;i<ans.size();++i){
            System.out.print(ans.get(i)+" ");
        }
        System.out.println();
    }
        sc.close();
    }
}