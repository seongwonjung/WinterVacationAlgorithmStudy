package woojin.Baekjoon;

import java.util.Scanner;

class cal2941{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        String s[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="}; //크로아티아 문자열


        for(int i=0; i<s.length; i++){ // s배열 길이만큼 반복복
            if(str.contains(s[i])){ // s배열의 i번째 요소를 포함하고 있으면
                str=str.replace(s[i], "1"); // 입력받은 문자열에서 1로 대체시킴.  
            }
        }
        System.out.println(str.length()); // 변경된 크로아티아 문자열 길이 수 출력
    }

}