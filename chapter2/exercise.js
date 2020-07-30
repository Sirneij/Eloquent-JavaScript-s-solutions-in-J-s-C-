//Exercise One
let hash = '#';
for (let index = 0; index < 7; index++) {
    console.log(hash);
    hash += '#';
}

//Exercise two
for (let index = 1; index <= 100; index++) {
    if (index % 3 == 0) {
        if(index % 5 == 0){
            console.log('FizzBuzz');
        }else{
            console.log('Fizz');
        }
    } else if(index % 5 == 0){
        console.log('Buzz');
    }else{
        console.log(index);
    }
}

//Exercise three
const size = 8;
let chessBoard = '';
for (let outer = 0; outer < size; outer++) {
    for (let inner = 0; inner < size; inner++) {
       if((inner + outer) % 2 == 0){
           chessBoard += ' ';//for the reverse pattern, change this to chessBoard += '#';
       }else{
           chessBoard += '#';//for the reverse pattern, change this to chessBoard += ' ';
       }
    }
    chessBoard += '\n';
}
console.log(chessBoard);