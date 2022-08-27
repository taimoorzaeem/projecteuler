module LexiPerm where

import Data.List

fact :: Int -> Int
fact 1 = 1
fact n = n * fact (n-1)



recur :: [Char] -> Int -> [Char]
recur [n] _ = [n]
recur xs i =
    let buckets = fact ((length xs) - 1)
        (digit,x) = (xs !! (div i buckets), (mod i buckets))
    in digit : recur (delete digit xs) x


-- To run: load this module and type 'recur "0123456789" (1000000 - 1)' in ghci
