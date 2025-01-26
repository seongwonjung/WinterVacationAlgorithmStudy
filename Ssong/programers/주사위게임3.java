import java.util.*;

class Solution {
    public int solution(int a, int b, int c, int d) {
        int answer = 0;
        /*
         *  a	b	c	d	result
            2	2	2	2	2222
            4	1	4	4	1681
            6	3	3	6	27
            2	5	2	6	30
            6	4	2	5	2
         */
        int [] A = {a, b, c, d};
        Arrays.sort(A);

        if(A[0] == A[3]){
            answer = 1111 * A[3];
        }else if(A[0] == A[2] || A[1] == A[3]){
            answer = (int) Math.pow(A[3] * 10 + (A[0]),2);
        }else if(A[0] == A[1] && A[2] == A[3]){
            answer = (A[0] + A[2]) * Math.abs(A[0] - A[2]);
        }else if(A[0] == A[1]){
            answer = A[2] * A[3];
        }else if(A[1] == A[2]){
            answer = A[0] * A[3];
        }else if(A[2] == A[3]){
            answer = A[0] * A[1];
        } else{
            answer = A[0];
        }
        return answer;
    }
}