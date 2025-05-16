package woojin.Baekjoon;

import java.util.Scanner;

class bj_1157 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr [] = new int[26];
        int max=0;

        String str = sc.nextLine();

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i)>='A' && str.charAt(i)<='Z'){
                arr[str.charAt(i)-'A']++;
            }
            else{
                arr[str.charAt(i)-'a']++;
            }
        }

        char c ='?';

        for(int i=0; i<arr.length; i++){
            if(arr[i]>max){
                max=arr[i];
                c = (char)(i+65);
            }
            else if(arr[i]==max){
                c='?';
            }
        }
        System.out.println(c);
    }
}
