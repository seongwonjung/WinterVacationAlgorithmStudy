function solution(A, B) {
    if (A===B) return 0
    
    for(let i = 1; i <= A.length; i++) {
        A = A.slice(-1) + A.slice (0, -1);
        if (A===B) return i
    }
    return -1
}


//1월 10일 노트북에 커피를 쏟은 이슈로 늦게 커밋합니다
