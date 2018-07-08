// In C99 yes, but in C89 no.
// In C89 first expression has undefined behavior and
// may be rounded up or down, while second expression
// calculates i/j first (that will always round down) and
// then negates it.
