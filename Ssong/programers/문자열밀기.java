
class PushString {
    public static int pushString(String A, String B) {
        int answer = 0;
        String a = A;

        for(int i = 0; i < A.length(); i++){
            if(a.equals(B)){
                return answer;
            }

        String c = a.substring(a.length() - 1); 
        a = c + a.substring(0, a.length() - 1); 
        answer++;
        }
        return -1;
    }
    public static void main(String[] args) {
        String A = "hello"; 
        String B = "ohell";
        int result = pushString(A,B);
        System.out.print(result);
    }
    
}