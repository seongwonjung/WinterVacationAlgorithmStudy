package woojin.Baekjoon;

import java.util.Arrays;
import java.util.Scanner;

class bj_1920 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] A = new int[N];

        for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }

        Arrays.sort(A);

        int M = sc.nextInt();

        StringBuilder sb = new StringBuilder();
        
        for(int i=0; i<M; i++){
            int num = sc.nextInt();
            if(BinarySearch(num, A)){
                sb.append("1\n");
            }
            else{
                sb.append("0\n");
            }
        }
        sc.close();
        System.out.println(sb);
    }

    public static boolean BinarySearch(int key, int[] A){
        int min = 0;
        int max = A.length-1;
        
        while(min<=max){
            int mid=(min+max)/2;

            if(key == A[mid]){
                return true;
            }
            else if(key > A[mid]){
                min = mid +1;
            }
            else{
                max = mid - 1;
            }


        }
        return false;
    }
}
