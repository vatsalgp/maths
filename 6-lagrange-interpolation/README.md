# It is used to estimate the value of a polynomial at a certain position when a pair of points lying on the polynomail are given .

# Steps:
1. Let the given points be (xi, yi) for i = 0, 1, ... , n .
2. Then the value of f(x) at x is given by:

    ((x - x1) * (x - x2) * ... * (x - xn)) / ((x0 - x1) * (x0 - x2) * ... * (x0 - xn)) * y0 + 

    ((x - x0) * (x - x2) * ... * (x - xn)) / ((x1 - x0) * (x1 - x2) * ... * (x1 - xn)) * y1 + 

    ... +

    ((x - x0) * (x - x2) * ... * (x - xn-1)) / ((xn - x0) * (xn - x1) * ... * (xn - xn-1)) * yn
    
