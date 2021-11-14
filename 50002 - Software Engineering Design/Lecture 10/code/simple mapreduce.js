// Calculate the sum of the squares of numbers in a list.

var square = function (x) { return x * x }
var sum = function (x,y) { return x + y }

[1,2,3,4,5].map(square).reduce(sum);