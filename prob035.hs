module CircularPrimes where


isqrt :: Int -> Int
isqrt = floor . sqrt . fromIntegral


isPrime :: Int -> Bool
isPrime k = 
    if k > 1 
        then null [ x | x <- [2..isqrt k], k `mod` x == 0] 
    else False


-- helper function
numRotations' :: String -> Int -> [Int]
numRotations' _ 0 = []
numRotations' x n = 
    let num = (last $ x) : (init $ x)
    in (read num) : (numRotations' num (n - 1))


numRotations :: Int -> [Int]
numRotations n = numRotations' (show n) (length $ show n)


listPrime :: [Int] -> Bool
listPrime [] = True
listPrime (x:xs) = isPrime x && listPrime xs


isCircularPrime :: Int -> Bool
isCircularPrime n = listPrime $ numRotations n

-- not terribly efficient solution
-- would probably take half a minute to compute the answer
countCirPrimes :: [Int] -> Int
countCirPrimes [] = 0
countCirPrimes (x:xs) = 
    if isCircularPrime x
        then 1 + countCirPrimes xs
    else countCirPrimes xs


getAns = countCirPrimes [2..999999]
