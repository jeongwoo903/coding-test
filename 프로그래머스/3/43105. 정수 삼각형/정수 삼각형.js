function solution(triangle) {
    let dp = [triangle[0][0]];
    
    for(let i = 1; i < triangle.length; i++) {
        const curLine = triangle[i];
        const newDp = [];
        
        for(let j = 0; j <= i; j++) {
            if(j === 0) {
                newDp.push(dp[0] + curLine[j]);
            }

            else if(j === i) {
                newDp.push(dp[j-1] + curLine[j]);
            }

            else {
                newDp.push(Math.max(dp[j-1], dp[j]) + curLine[j]);
            }
        }
        
        dp = newDp;
    }
    
    return Math.max(...dp);
}