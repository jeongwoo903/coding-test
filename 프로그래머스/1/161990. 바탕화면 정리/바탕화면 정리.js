function solution(wallpaper) {
    const startPoint = [];
    const endPoint = [];
    
    wallpaper.forEach((item, i) => {
        const line = [...item];
        
        line.forEach((data, j) => {
            if(data === '#') {
                startPoint.push([i,j]);
                endPoint.push([i + 1,j + 1]);
            }
        });
    });
    
    const startX = Math.min(...startPoint.map(item => {return item[0]}));
    const startY = Math.min(...startPoint.map(item => {return item[1]}));
    const endX = Math.max(...endPoint.map(item => {return item[0]}));
    const endY = Math.max(...endPoint.map(item => {return item[1]}));
    
    return [startX,startY,endX,endY];
}