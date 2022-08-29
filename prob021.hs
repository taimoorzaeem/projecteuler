module AmicableNums where


-- An VERY inefficient solution

getDivisors :: Int -> [Int]
getDivisors n = [ x | x <- [1..(div n 2)], mod n x == 0 ]


getAmicableNums :: Int -> Int
getAmicableNums n = sum [ x | x <- [1..n], 
                        x == 
                        sum (getDivisors (sum (getDivisors x)))]

-- To Run: Load the module in ghci and type "getAmicableNums 10000".
