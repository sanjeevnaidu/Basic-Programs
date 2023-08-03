/*
Algorithm:
1.	If front=NULL, then	[NULL can be replaced by 0 and vice versa]
	Write: Queue underflow error
	return
	[end of if]
2.	set val:=queue[front]
3.	If front=rear, then
	Set front:=rear:=0	[now queue is empty]
	else
	If front=N, then
	set front:= 1
	else
	set front:=front+1
	[end of if]
	[end of if]
4.	return
*/
