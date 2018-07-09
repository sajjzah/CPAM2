// ++i. i++ and (i += 1) produce different values.
// for example, when i = 1:
// if we write j = (i += 1), then j = 2
// if we write j = (++i), then j = 2
// if we write j = (i++), then j = 1
