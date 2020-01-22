condition = ""
started = False
while condition != "quit":
    condition = input(">").lower()
    if condition == "start":
    	if started:
    	 print("car already started")
    	else:
    		started = True
    		print("car started")
    elif condition == "stop":
    	if not started:
    		print("car already stopped")
    	else:	
            print("car stopped ")
    elif condition == "help":
     print( """ stop - to stop 
     	start -  to start 
     quit - to quit""") 
    elif condition == "quit":
    	break
    else:	
     print("i dont understand sorry!") 


