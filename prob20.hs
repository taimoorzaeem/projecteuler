module FactorialDigitSum where


getSum :: [Char] -> Integer
getSum [] = 0
getSum (x:xs) = ((read . pure) x) + getSum xs


fact :: Integer -> [Char]
fact n = show $ product [1..n]


-- run: "getSum (fact 100)" in ghci to get the answer
