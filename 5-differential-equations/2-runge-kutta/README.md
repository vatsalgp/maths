# Steps:
1. The pair (x0, y0) is given to us. We have to find the value of (x1, y1) .
2. Let h = x1 - x0 .
3. Evaluate k1 = h * f(x0, y0)
4. Evaluate k2 = h * f(x0 + h / 2, y0 + k1 / 2)
5. Evaluate k3 = h * f(x0 + h / 2, y0 + k2 / 2)
6. Evaluate k4 = h * f(x0 + h, y0 + k3)
7. Evaluate k = (k1 + 2 * k2 + 2 * k3 + k4) / 6
8. The solution y1 is y0 + k .