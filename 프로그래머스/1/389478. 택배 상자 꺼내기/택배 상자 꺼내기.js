function solution(n, w, num) {
    let result = 0;
    const arr = [];
    
    Array.from({length: w}).forEach((_, index) => {
        let count = 2;
        const startNum = index + 1;
        const subArr = [startNum];
        
        while(true) {
            const floorNum = (count%2 === 0) ? w * count - (startNum-1) : w * count - (w - startNum);
            if(floorNum > n) {
                break;
            }
            
            subArr.push(floorNum);
            count++;
        }
        arr.push(subArr);
    })
    
    arr.forEach((subArr) => {
        if(subArr.includes(num)) {
            result =  subArr.length - subArr.indexOf(num);
        }
    });
                

    return result;
}




/*
* 가로: w
* 개수: n
* 상자번호: num
**/