package woojin.Baekjoon;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class cal10815 {
    static List<Integer> list = new ArrayList<Integer>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        
        for(int i=0; i<N; i++){
            list.add(sc.nextInt());
        }
        Collections.sort(list);

        int M = sc.nextInt();
        for(int i=0; i<M; i++){
            int result = BinarySearch(sc.nextInt(), 0, list.size() - 1);
            System.out.print(result + " ");
        }

        sc.close();

    }

    public static int BinarySearch(int key, int start, int end){
        while (start <= end) {
            int mid = (start + end) / 2;

            if (list.get(mid) == key) {
                return 1; 
            } else if (list.get(mid) > key) {
                end = mid - 1; 
            } else {
                start = mid + 1; 
            }
        }
        return 0; 
    }
}