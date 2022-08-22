module PowerDigitSum where


getSum :: [Char] -> Integer
getSum [] = 0
getSum (x:xs) = ((read . pure) x) + getSum xs


getPowerChars :: [Char]
getPowerChars = show (2 ^ 1000)


-- run: "getSum getPowerChars" in ghci to get the answer
