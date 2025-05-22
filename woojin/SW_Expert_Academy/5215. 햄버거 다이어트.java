package woojin.SW_Expert_Academy;

import java.io.IOException;
import java.util.Scanner;

class Solution {
    static int[][] arr;
    static int maxCal;
    static int N;
    static int maxScore;

    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        sc.nextLine();

        for(int i=1; i<=T; i++){
            N = sc.nextInt();
            maxCal = sc.nextInt();
            maxScore=0;
            sc.nextLine();

            arr = new int[N][2];

            for(int j=0; j<N; j++){
                arr[j][0]=sc.nextInt();
                arr[j][1]=sc.nextInt();
            }

            cal(0, 0, 0);

            System.out.println("#"+i+" "+maxScore);
        }
        sc.close();
    }

    public static void cal(int idx, int sumScore, int sumCal){
        if(sumCal>maxCal){
             return;
        }
        if(maxScore<sumScore){
            maxScore=sumScore;
        }

        for(int i=idx; i<N; i++){
            cal(i+1, sumScore+arr[i][0], sumCal+arr[i][1]);
        }
    }
}
