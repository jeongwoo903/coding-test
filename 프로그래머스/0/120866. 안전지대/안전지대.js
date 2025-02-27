function solution(board) {
    const arr = [];
    
    board.forEach((line, y) => {
        line.forEach((item, x) => {
            if(item === 1) {
                arr.push([x-1,y-1]);
                arr.push([x,y-1]);
                arr.push([x+1,y-1]);
                
                arr.push([x-1,y]);
                arr.push([x,y]);
                arr.push([x+1,y]);
                
                arr.push([x-1,y+1]);
                arr.push([x,y+1]);
                arr.push([x+1,y+1]);
            }
        })
    });
    
    const max = board[0].length;
    console.log(max)

    const filtered = arr.filter((item) => {
        return !item.includes(-1) && !item.includes(max);
    });

    const setObj = new Set();
    const filteredArray = filtered.filter(subArr => {
      const key = JSON.stringify(subArr);
      if (setObj.has(key)) return false;
      setObj.add(key);
      return true;
    });
    
    const result = (max * max) - filteredArray.length;

    return result;
}
