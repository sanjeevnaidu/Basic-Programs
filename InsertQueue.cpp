/*
Algorithm:
1.	If(front=1 and rear=N) Or front=rear+1, then
	Write: Queue overflow error
	Return
	[end of if]
2.	If front=NULL and rear=NULL, then
	Set front:=rear:=1
	Else
	If rear=N, then
	Set rear:=1
	Else
	Set rear:=rear+1
	[end of if]
	[end of if]
3.	Set Queue[rear]:=val
4.	return
*/
