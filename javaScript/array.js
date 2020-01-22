function isFound(array,num){
    for(let i = 0; array[i]; i++){
        if(array[i] == num)
            return true;
    }
    return false;
}

console.log(isFound([1, 2, 3, 4, 5], 3));
console.log(isFound([1, 2, 3, 4, 5], 6));
