module CoinSums where

countSums :: Int -> Int
countSums amt = cc amt 8

cc :: Int -> Int -> Int
cc amt coins
    | amt == 0 = 1
    | amt < 0 || coins == 0 = 0
    | otherwise = (cc amt (coins - 1)) + (cc (amt - (coinCat coins)) coins)

coinCat :: Int -> Int
coinCat coins
    | coins == 1 = 1
    | coins == 2 = 2
    | coins == 3 = 5
    | coins == 4 = 10
    | coins == 5 = 20
    | coins == 6 = 50
    | coins == 7 = 100
    | coins == 8 = 200

getAns = countSums 200
