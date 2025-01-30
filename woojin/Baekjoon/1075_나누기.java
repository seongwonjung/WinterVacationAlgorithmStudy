package woojin.Baekjoon;

import java.util.Scanner;

class cal1075 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int F = sc.nextInt();
        int x = N%100;
        int result = N-x;
    
        sc.close();

        while(result%F!=0){
            result++;
        }
        
        result=result%100;
    
        String resulString = Integer.toString(result);


        if(result<10){
            System.out.println("0"+(resulString));
        }
        else{
            System.out.println(resulString);
        }

    }
}