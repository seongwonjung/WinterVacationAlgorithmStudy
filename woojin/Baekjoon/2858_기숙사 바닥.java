package woojin.Baekjoon;

import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int R = sc.nextInt();
        int B = sc.nextInt();

        int sum = R+B;

        int L = 0;
        int W = 0; 

        for(int length =3; length<=Math.sqrt(sum); length++){
            if(sum%length==0){
                int width = sum / length;

                if((length-2)*(width-2)==B){
                    L=Math.max(length, width);
                    W=Math.min(length, width);
                    break;
                }
            }
        }

        sc.close();
        System.out.println(L+" "+W);
    }
}