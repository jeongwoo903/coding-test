function solution(sides) {
    // 다른 두 변의 길이의 합보다 작아야 한다.
    // sides 외에 가장 큰 변이 있는 경우
    const arr = [];
    
    const max = Math.max(...sides);
    const min = Math.min(...sides);
    
    // sides 내에 가장 큰 변이 있는 경우
    Array.from({length: max}).forEach((_,index) => {
        if((min + index + 1) > max) {
            arr.push(index + 1)
        }
    });
    
    const limit = Math.max(...arr);
    
    for(let i = (max + min - 1); limit < i; i--) {
        arr.push(i);
    }

    return arr.length;
}
