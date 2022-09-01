module NonAbundant where

getDivisors :: Int -> [Int]
getDivisors n = [ x | x <- [1..(div n 2)], mod n x == 0 ]


abundantNums :: [Int] -> [Int]
abundantNums xs = [ x | x <- xs, x < sum (getDivisors x)]

nonAbundantSum :: [Int] -> [Int] -> Int
nonAbundantSum [] _ = 0
nonAbundantSum (x:xs) ys = 
    if checkNumSum x (ys ++ abundantNums [x]) == False
        then x + nonAbundantSum xs (ys ++ abundantNums [x])
        else nonAbundantSum xs (ys ++ abundantNums [x])

checkNumSum :: Int -> [Int] -> Bool
checkNumSum i list' = 
    elem i [ x+y | x <- list', y <- list']


getAns = nonAbundantSum [1..28123] []

-- To run: type "getAns" in ghci
