module CollatzSeq where

import Data.Map (Map)
import qualified Data.Map as Map

-- Problem 14: Longest Collatz Sequence

colSeq :: Int -> Map Int Int -> Map Int Int
colSeq 1 map =
    case Map.lookup 1 map of
        Just _ -> map
        Nothing -> Map.insert 1 1 map
colSeq n map =
    case Map.lookup n map of
        Just m -> map
        Nothing -> 
            if even n
                  then (let newMap = colSeq (div n 2) map
                            val = (case Map.lookup (div n 2) newMap of
                                      Just x -> x
                                      Nothing -> -1)
                        in Map.insert n (1 + val) newMap)
                  else (let newMap = colSeq ((3 * n) + 1) map 
                            val = (case Map.lookup ((3 * n) + 1) newMap of
                                      Just x -> x
                                      Nothing -> -1)
                        in Map.insert n (1 + val) newMap)


getSeqLength :: [Int] -> Map Int Int -> [Int]
getSeqLength [] _ = []
getSeqLength (x:xs) map =
    let newMap = (colSeq x map)
    in (case Map.lookup x newMap of   
            Just m -> m : getSeqLength xs newMap
            Nothing -> -1 : getSeqLength xs newMap)


maximum' :: (Ord a) => [a] -> a
maximum' = foldr1 (\x y ->if x >= y then x else y)


getAns = maximum' $ getSeqLength [1..1000000] Map.empty

-- To run: type "getAns" in ghci
