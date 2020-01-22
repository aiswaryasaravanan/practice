let days = ['sun', 'mon', 'tue', 'wed', 'thur', 'fri', 'sat'];

function findDays(days, day){
    let msg = '';
    try{
        msg = days[day-1];
    }catch(err){
        msg = "Limit exeeded";
        console.log("inside catch");
    }
    return msg;
}

console.log(findDays(days,100));