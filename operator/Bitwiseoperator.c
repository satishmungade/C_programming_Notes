/*//bitwise operator (indviual bit work this operator)APPLICATION :INCRPTION DESCRIPTION 
operator  Name		 			ary       	 precedance      associtivity 
	~     bitwise NOT tild	 	unary 		        level 1		      R->L
--------------------------------------------------------------------------
	<<    bit left-shitf   		binary			level 2			L->R
	>>    bit Right-shitf  		binary			level 3			L->R
	&	  bit And   		binary			level 4			L->R
	^	  XOR    		binary			level 5			L->R
	|	  OR    		binary			level 6			L->R
..........................................................................
Thise operator also work using truth depending table but work on indivial bite 

X-OR: AT TIME ONE WILL BE ONE  :APLLICATION: MEMORY ZERO OUT USE 
		OPERAND1 |	OPERAND2  |  ^X-OR |
			1	 | 		1	  |   0    |
			1        |		0	  |	  1    |
			0	 |		1	  |	  1    |
			0	 |		0	  |	  0    |


RIGHT-SHIFT RIGHT LA SHIFT HONE JEVDYE DILE TEVTHE 

	128 	64	32	16	8	4	2	1
			
4.	 0	0	0	0	0	1       0	0 	=4	
5.	 0      0       0       0       0       1       0       1	=5  use 4 and 5 binary table ^&!| ya bitwise operation perform karna sadhi (yanch vr truth table follow kar)
---------------------------------------------------------------------------------------
4&5  0      0       0       0       0       1       0       0	=4 

4|4  0      0       0       0       0       1       0       1	=5

4^5  0      0       0       0       0       0       0       1	=1

!4   1      1       1       1       1       0       1       1	=251
---------------------------------------------------------------------------------------
lEFT-SHIFT LEFT LA SHIFT HONE JEVDYE DILE TEVTHE 
       		 128  	64		32		16		8		4		2		1	
		
4<<1		 0		0		0		0		0		1		0		1 	=5

			 0       0      0        1      0       0       1        0  =17 
ek no left shit ho left jevthi value aste tevthe nhi shift ho same as right shift

       		 128  	64		32		16		8		4		2		1	
		
4>>1		 0	0		0		0		0		1		0		1 	=5

	         0       0      0        0      0       0       1        0   =2



5.	 0      0       0       0       0       1       0       1	=5
4&5      0      0       0       0       0       1       0       0	=4 
4|4      0      0       0       0       0       1       0       1	=5
4^5      0      0       0       0       0       0       0       1	=1
!4       1      1       1       1       1       0       1       1	=251
*/

