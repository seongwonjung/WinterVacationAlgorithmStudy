package woojin.Baekjoon;

import java.util.HashSet;
import java.util.Scanner;

class cal11478 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);    
        String S = sc.nextLine();   // 문자열 S
        int n = S.length(); // 문자열 S의 길이

        sc.close();

        HashSet<String> hash = new HashSet<>();

        for(int i=0; i<n; i++){ // 첫 번째 문자부터 끝까지, 두 번째 문자부터 끝까지 - 
            for(int j=i+1; j<=n; j++){
                hash.add(S.substring(i, j));    // 해시셋에 부분 문자열 추가
            //    System.out.print(S.substring(i, j)+" ");         
            }
        }
        //System.out.println(hash);   
        System.out.println(hash.size()); // 해시셋에 추가된 부분 문자열의 개수 출력력
    }
}
