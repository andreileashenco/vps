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

// ДЗ 1
1. Какой результат будет у выражений ниже?
"" + 1 + 0
"" - 1 + 0
true + false
6 / "3"
"2" * "3"
4 + 5 + "px"
"$" + 4 + 5
"4" - 2
"4px" - 2
"  -9  " + 5
"  -9  " - 5
null + 1
undefined + 1
" \t \n" - 2

//START Выполнение
let a = "" + 1 + 0 //10
let b ="" - 1 + 0/ /-1
let c = true + false //1
let d = 6 / "3" //2
let e = "2" * "3" //6
let f = 4 + 5 + "px" //9px
let h = "$" + 4 + 5//$45
let i = "4" - 2//2
let k = "4px" - 2/NaN
let l = "  -9  " + 5//-9 5
let m = "  -9  " - 5//-14
let n = null + 1 //1
let o = undefined + 1//Nan
let p = " \t \n" - //NaN
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
//END Выполнение

2. Что выведет данный скрипт

let name = "Ilya";
console.log( `hello ${1}` ); // ?
console.log( `hello ${"name"}` ); // ?
console.log( `hello ${name}` ); // ?
//Start выролнение
console.log( `hello ${1}` ); // hello 1
console.log( `hello ${"name"}` ); // hello name
console.log( `hello ${name}` ); // hello Ilya
//END Выполнение

3. Напишите программу, которая строго сравнивает 2 значения, если они не равны в 3ю переменную записать результат их побитового или(or)
 
let value1 = 5;
let value2 = 10;
let result = (value1 !== value2) && (value1 | value2); // побитовый or только если значения не равны
console.log(result);
