/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {

    let fa=[];
    arr.forEach((num,index)=>{
        if(fn(num,index))
        fa.push(num);
    })
    return fa;
    // for(int i=0;i<arr.size();i++)
    // {
    //     if(fn())
    // }
};