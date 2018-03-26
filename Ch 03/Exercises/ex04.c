// Compiler goes through the input. it reads 10 and the dot
// and because integer can't contain any decimal points, it
// saves 10 into i and puts . back
// Again, compiler reads .3 and the white space and because
// a float number can't contain any spaces, it saves .3 into x
// and puts the white space back
// Finally, compiler reads and ignores the white space and reads
// 5 and the next white space. an integer can't contain a white space
// so it saves 5 into j and puts back the white space for next call of scanf
// So: i=10 , x=0.3 , j=5
