// let a = 30;
// let b = 2;
// let x = 2*(a+b) %15 ;
// let y = (2*4/7-2.5)/(1/70);
// console.log(y);

// let a = 1;
// let b = 1;
// let c ;
// (a === b) && (c =5)
// console.log(c);

let a = "" + 1 + 0//10
let b ="" - 1 + 0//10
let c = true + false//false
let d = 6 / "3"//
let e = "2" * "3"
let f = 4 + 5 + "px"
let h = "$" + 4 + 5
let i = "4" - 2
let k = "4px" - 2
let l = "  -9  " + 5
let m = "  -9  " - 5
let n = null + 1
let o = undefined + 1
let p = " \t \n" - 
console.log(a);
console.log(b);
console.log(c);
console.log(d);
console.log(e);
console.log(f);
console.log(h);
console.log(i);
console.log(k);
console.log(l);
console.log(m);
console.log(n);
console.log(o);
console.log(p);

let a = 200;
if (( a >= 100 && a <= 999) || (a >= -100 && a <= -999)) { 
    console.log('трехзначное')
}else { 
    console.log("не трехзначное")
}

let price = 1001;
let status = 'vip';
if ( price > 1000) {
        if ( price > 1000 && status ==='vip' ) { 
            console.log('discount 10%')
        }else {
            console.log('discount 5%')
        }
}else {
    console.log('Price 100%');
}
day = 3;
let status = (day >=6)?'Выходной':'рабочий'
console.log(day)

let count = 0;
while (count <= 100 ) {
    if (count % 2 ===0){
    console.log(count)
    }
}