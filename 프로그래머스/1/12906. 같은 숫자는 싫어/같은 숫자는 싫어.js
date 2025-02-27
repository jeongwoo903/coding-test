function solution(arr) { 
    const result = []
    let cur = -1;
    
    arr.forEach((item, index) => {
        if(item !== cur) {
            result.push(item);
            cur = item;
        }
    });
    
    return result;
}