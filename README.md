<h1 align='center'><u><b> Generate Parentheses</b> </u></h1>

<h2> <u>Problem Link:</u> https://leetcode.com/problems/generate-parentheses/ </h2>

<h1 ><u> Idea Used: </u></h1>

## So for any given N, for any pair there will be 2N chars(N Open+N Closed). So for each char we have

## two choices either open/close. But we can use open when (number_open<N), we can use close when

## (number_close<number_open), i.e there is atleast one unbalaned open bracket. When number of close and open brackets

## equals to N, then we got one pair of balanced parenthesis of size N.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(2^N)

## Space-Compexity: O(N)...[Auxillary Space for recursion Stack]
