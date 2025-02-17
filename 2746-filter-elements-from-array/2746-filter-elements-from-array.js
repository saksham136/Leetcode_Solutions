/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {

    let fa=[];
    for(let i=0;i<arr.length;i++)
    {
        if(fn(arr[i],i))
        fa.push(arr[i]);
    }
    return fa;
};