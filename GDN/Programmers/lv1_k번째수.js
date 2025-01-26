function solution(array, commands) {
    let result = [];
    
    for (let command of commands) {
        let i = command[0];
        let j = command[1];
        let k = command[2];

        let slicedArray = array.slice(i - 1, j);

        let sortedArray = slicedArray.sort((a, b) => a - b);

        result.push(sortedArray[k - 1]);
    }
    
    return result;
}
