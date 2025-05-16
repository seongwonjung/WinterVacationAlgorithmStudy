package woojin.SW_Expert_Academy;

import java.util.Scanner;

class Solution {
    public static void main(String[] args) throws Exception{  
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for(int i=0; i<T; i++){
            int N = sc.nextInt();
            int Ateam[] = new int[N];
            int Bteam[] = new int[N];
            String str[] = new String[N];
            boolean visited[] = new boolean[N];

            for(int j=0; j<N; j++){
                Ateam[j]=sc.nextInt();
            }
            for(int j=0; j<N; j++){
                Bteam[j]=sc.nextInt();
            }

            int aidx=0;
            int bidx=0;
            boolean aTurn=true;

            for(int j=0; j<N; j++){
                if(aTurn){
                    while (visited[Ateam[aidx]-1]) {
                        aidx++;
                    }
                    str[Ateam[aidx]-1]="A";
                    visited[Ateam[aidx]-1]=true;
                    aidx++;
                }
                else{
                    while (visited[Bteam[bidx]-1]) {
                        bidx++;
                    }
                    str[Bteam[bidx]-1]="B";
                    visited[Bteam[bidx]-1]=true;
                    bidx++;
                }
                
                aTurn=!aTurn;
            }
            for (String string : str) {
                System.out.print(string);
            }
            System.out.println();

        }   
        sc.close();
    }
}
