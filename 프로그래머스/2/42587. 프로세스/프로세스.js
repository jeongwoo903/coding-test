function solution(priorities, location) {
    let queue = priorities.map((p, i) => [i, p]);
    let result = [];
    
    while (queue.length > 0) {
        let current = queue.shift();
        let hasHigher = queue.some((item) => item[1] > current[1]);
        
        if (hasHigher) {
            queue.push(current);
        } else {
            result.push(current[0]);
            if (current[0] === location) {
                return result.length;
            }
        }
    }
}
