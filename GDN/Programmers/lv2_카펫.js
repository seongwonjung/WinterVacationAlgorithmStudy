function solution(brown, yellow) {
    let answer = [];

    for (let y = 3; y <= Math.sqrt(brown + yellow); y++) {
        if ((brown + yellow) % y === 0) { 
            let x = (brown + yellow) / y;

            if ((x - 2) * (y - 2) === yellow) {
                answer = [x, y];
                break;
            }
        }
    }
    return answer;
}