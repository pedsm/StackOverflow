main :: IO()
main  = recurse 0 

recurse :: Int -> IO()
recurse x = do print x
               recurse(x+1)

