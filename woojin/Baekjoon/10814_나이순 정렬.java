package woojin.Baekjoon;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class bj_10814 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        String[][] strArr = new String[N][3]; 

        for(int i=0; i<N; i++){
            strArr[i][2] = String.valueOf(i);
        }
        
        for(int i=0; i<N; i++){
            for(int j=0; j<2; j++){
                strArr[i][j] = sc.next();
            }
            sc.nextLine();
        }

        Arrays.sort(strArr, new Comparator<String[]>(){
            @Override
            public int compare(String[] o1, String[] o2){
                int age1 = Integer.valueOf(o1[0]);
                int age2 = Integer.valueOf(o2[0]);

                if(age1 != age2){
                    return age1 - age2;
                }
                else{
                    return Integer.valueOf(o1[2]) - Integer.valueOf(o2[2]);
                }
            }
        });

        for(int i=0; i<N; i++){
            for(int j=0; j<2; j++){
                System.out.print(strArr[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}