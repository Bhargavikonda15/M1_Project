# TEST_PLAN
## High level test plan
|ID   	  |Description                                                                 |Input               	|Expected output     	|Actual output      	|
|-------	|----------------------------------------------------------------------------|---------------------	|-------------------	|---------------------|
|H_01   	|User shall be able to register new account by phone no,account no,password  |944,944,aaa   	      |Reg success   	      |Reg success          |
|H_02   	|User shall be able to login a an account                         	         |944(account no)     	|Login success   	    |Login success        |
|H_03   	|User shall be able to Add an amount              	                         |1000                	|success add amount  	|success add amount   |
|H_04   	|User Shall be able to Withdraw an amount   	                               |100                  	|success withdrawn   	|success withdrawn    |
|H_05   	|User shall be able to Online transfer an amount using phone no              |100(phone no=944)    	|success transfered  	|success transfered   |
|H_06   	|User shall be able to change the password	by old password                  |aaaa(new password)   	|changes success     	|changes success    	|

## Low level test plan
|ID     	|Description                       	|Input              	|Expected output    	|Actual output    	  |
|---------|---------------------------------	|-------------------	|--------------------	|------------------ 	|
|L_01   	|Check login account              	|944                	|success            	|success          	  |
|L_02   	|check login account              	|9444               	|success            	|failed   	          |
|L_03   	|online transfering amount        	|0(phone no=9444)   	|success            	|not registered   	  |
|L_04   	|change password by old password   	|aaaa(old)          	|success            	|invalid old password |
