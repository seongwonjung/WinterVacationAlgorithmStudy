package woojin.Baekjoon;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class cal18870 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] arr = new int[N];
        int[] sortedArr = new int[N];

        for(int i=0; i<N; i++){
            arr[i] = sc.nextInt();
            sortedArr[i] = arr[i];
        }

        Arrays.sort(sortedArr);
        
        Map<Integer, Integer> map = new HashMap<>();
        int index=0;
        for(int num : sortedArr){
            if(!map.containsKey(num)){
                map.put(num, index++);
            }
        }
        StringBuilder sb = new StringBuilder();

        for(int i=0; i<N; i++){
            sb.append(map.get(arr[i])).append(" ");
        }
        System.out.println(sb.toString());
    }
}