// Compiler goes through the input and reads 12.3 and the
// white apace. because a float number can't contain any blanks
// it saves 12.3 into x and puts white space back
// Then, it reads and ignores the white space and reads 45.
// because a integer can't contain a decimal point, it saves 45
// into i and puts . back
// Finally, it reads .6 and the white space and because a float number
// can't contain any white spaces, it saves .6 into y and puts
// white space back for next call of scanf
// So: x=12.3 , i=45 , y=0.6
