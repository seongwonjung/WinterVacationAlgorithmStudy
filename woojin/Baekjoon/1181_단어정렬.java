package woojin.Baekjoon;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class cal1181{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();

        String[] arr = new String[N];

        for(int i=0; i<arr.length; i++){
            arr[i]= sc.next();    
        }

        sc.close();


        String tmp = null;

        /* 정렬 */
        Arrays.sort(arr, new Comparator<String>() {
            public int compare(String s1, String s2){
                if(s1.length()==s2.length()){
                    return s1.compareTo(s2);
                }
                else{
                    return s1.length()-s2.length();
                }
            }
        });
        

        /*중복제거 */
        for(int i=0; i<arr.length-1; i++){
            if(arr[i].equals(arr[i+1])){
                arr[i]=null;
            }
        }


        for(int i=0; i<arr.length; i++){
            if(arr[i]!=null){
                System.out.println(arr[i]);
            }
        }   

    }
}
