module Fib where

-- Problem 25: 1000th Fibanacci index

fib :: Int -> Integer -> Integer -> Int
fib index f1 f2 
    | length (show f2) == 1000 = index
    | otherwise = fib (index+1) f2 (f1+f2)


-- To run: load the module and type "fib 2 1 1" in ghci
