package woojin.Baekjoon;

import java.util.Scanner;

class bj_24060 {
    static int cnt=0;
    static int[] tmp;
    static int K;
    static int result = -1;

    static void merge_sort(int[] arr, int p, int r){
        if(cnt>K){
            return;
        }
        if(p < r){
            int q = ((p+r)/2);
            merge_sort(arr, p, q);
            merge_sort(arr, q+1, r);
            merge(arr, p, q, r);
        }
    }

    static int merge(int[] arr, int p, int q, int r){
        int i=p, j=q+1, t=0;
        
        while(i <= q && j <=r){
            if(arr[i] <= arr[j]){
                tmp[t++] = arr[i++];
            }
            else{
                tmp[t++] = arr[j++];
            }
        }
        while (i <= q) {
            tmp[t++] = arr[i++];            
        }
        while (j <= r) {
            tmp[t++] = arr[j++];
        }
        i=p; t= 0;
        while (i<=r) {
            cnt++;
            if(cnt==K){
                result=tmp[t];
                break;
            }
            arr[i++] = tmp[t++];
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        K = sc.nextInt();
        int arr[] = new int[N];
        tmp = new int[N];

        for(int i=0; i<N; i++){
            arr[i] = sc.nextInt();
        }
        
        merge_sort(arr, 0, N-1);

        System.out.println(+result);
        sc.close();
    }
}
