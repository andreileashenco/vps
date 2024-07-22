//консольный вывод текста
//быстрый коментарий ctrl+/


console.log("hello")

//переменные - кодовое название для какого-то значения
//в названии переменных нельзя использовать специальные символы . , ? ! @ & * ...

//способы названия переменных, состоящих из нескольких слов
let beginoftheprogram
// 1 - через нижние подчеркивания
let begin_of_the_program
// 2 - camel case (кэмел кейс)
let beginOfTheProgram
// 3 -  snake case (снейк кейс)
let BeginOfTheProgram


let name
name = 'Polina'
console.log(name)

//константы
const NAME = 'Bob'
console.log(NAME)


let number = 1
console.log(typeof(number))
number = 'hgdsafhj'
console.log(typeof(number))

//типы данных
//общие во многих языках

//integer - может хранить в себе целочисленные значения
//float - содержит десятичные дроби
//char - хранит код символа в таблице asci
//string - хранит строку
//boolean - хранит значение true/false

//типы в js

//number - хранит все числа и цифры
//string - хранит строку
//boolean - хранит значение true/false
//undefined - неопознанное значение
//null - пустое значение
//object - тип для инициализации объектов
//NaN - сочетание чисел со строкой


//математические операции
// + - сложение
// - - вычитание
// = - приравнивание
// / - деление
// * - умножение
// ** - возведение в степень
// % - остаток от деления


console.log(`bdhfj ${number} 2f`)


//создайте переменную x, в которой будет храниться значение удвоенной суммы переменных a и b и остаток деления этого выражения на 15, в консоль лог выводим следеющее "Значение выражения: число"

// let a = 30;
// let b = 2;
// let x = 2*(a+b) % 15  ;
// console.log(x);


let y = ((2 * 7 + 4) / 7 - 2.5)/(1/70);
console.log(y);

//операторы сравнения

// == - нечеткое сравнение значений
// let c = '3' == 3
// console.log(c) //true

// === - четкое сравнение значений
// let v = '3' == 3
// console.log(c) //false

// != - не равно
// !== - четкое неравенство
let g = '3' != 3
console.log(g) //false

let e = '3' !== 3
console.log(e) //true

//логические операторы

// && - и
// true && true = true
// true && false = false
// false && false = false

// true && true && true && false = false



// || - или
// true || true = true
// true || false = true
// false || false = false

// true || true || true || false = true


// &&= - присваевает какое-то значение, если первая часть выражения равна true / 1
let f = true
let n = false

f &&= 2
console.log(f)

n &&= 2
console.log(n)

// ||= - присваевает какое-то значение, если первая часть выражения равна false / 0
f ||= 3
console.log(f)

n ||= 3
console.log(n)

//напишите программу, которая сравнивает значение 2 переменных, если они равны присвоить 3ей переменной значение 5

// let a = 1;
// let b = 1;
// let c ;
// (a === b) && ( c = 5 );
// console.log(c)

let m,h
m = 12
h = 14
let q = m == h
q &&= 5
console.log(q);

//---------------------------

// & - and
let o = 5 // 101
let z = 3 // 011

console.log(o & z) //001

// | - or
console.log(o | z) //111

// ^ - xor
console.log(o ^ z) //110

// ~ - not
console.log(~z) //100




ДЗ 1
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
