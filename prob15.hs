module LatticePaths where


factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n-1)


getRoutes :: Integer -> Integer
getRoutes n = ((factorial (n*2)) `div` (factorial ((n*2)-2))) `div` (factorial 2)


-- type: "getRoutes 20" in ghci to get the answer
