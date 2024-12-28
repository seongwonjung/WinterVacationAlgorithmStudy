package woojin.Baekjoon;

import java.util.Scanner;

class cal2108{
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] arr = new int[N];
        int[] cnt = new int[8001]; //인덱스 0~8000
        int sum=0;          //  합
        int mid=0;          //  중앙값
        int mode=0;         //  최빈값
        int range=0;        //  범위값
    

        for(int i=0; i<arr.length; i++){
            arr[i]=sc.nextInt();
            sum+=arr[i];
            cnt[arr[i]+4000]++;
        }

        sc.close();

        /*  정렬 */
        int[] Array = new int[N];
        int j =0;

        for(int i=0; i<cnt.length; i++){
            int c = cnt[i];
            while(c>0){
                Array[j]=i-4000;
                c--;
                j++;
            }
            
        }

        /*  중앙값  */
        mid=Array[N/2];


        /*  최빈값  */
        int maxCnt=0;
        boolean secondMode=false;
        for(int i=0; i<cnt.length; i++){
            if(cnt[i]>maxCnt){
                maxCnt=cnt[i];
                mode=i-4000;
                secondMode=false;
            }
            else if(cnt[i]==maxCnt && secondMode==false){
                mode=i-4000;
                secondMode=true;
            }
        }

        /*  범위값  */
        if(N==1){
            range=0;
        }
        else{
            range=Array[N-1]-Array[0];
        }

        
        System.out.println((int)Math.round((double)sum / N));
        System.out.println(mid);
        System.out.println(mode);
        System.out.println(range);
    }

}