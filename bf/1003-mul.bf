# BF script that multiplies two numbers
# Result less than 10 and must be a single digit

# block 0 to store the result
# block 1 holds the multiply value
# block 2 holds the amount of times multiplied
# result input of 42 will give the result of 4*2

# read into block 1 and 2
# subtract 48 from each: '0'
# loop while block 2 != 0 and adding value of block 1 to block 0 every time

# BLOCK 0	BLOCK 1		BLOCK 2		BLOCK 3 	BLOCK4
# 0		4		1		0 		

>,------------------------------------------------ # read into #1
>,------------------------------------------------ # read into #2
[<[>>+<<<+>-]>>[<<+>>-] COPY BLOCK 1 INTO BLOCK 3 AND 0 THEN COPY BLOCK 3 BACK TO BLOCK 1
<-] MOVE BLOCK TO BLOCK 2 AND DECREASE (DONE WITH ONE ITERATION)



# MOVE TO BLOCK 0 AND INCREASE BY ASCII '0' (DEC 48)
<<++++++++++++++++++++++++++++++++++++++++++++++++.
