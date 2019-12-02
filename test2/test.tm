#Q = {start,find1,mv1,find2,mv2,reset12,reset23,cmp,clean1,clean2,accept,accept2,accept3,accept4,halt_accept,reject,reject2,reject3,reject4,reject5,halt_reject}
#S = {0,1,2}
#G = {0,1,2,_,T,r,u,e,F,a,l,s}
#q0 = start
#B = _
#F = {halt_accept}
#N = 3

;start
start ___ ___ *** accept ;空串
start 0__ 0__ *** find1  ;寻找第一个1
start 1__ 1__ *** reject ;
start 2__ 2__ *** reject ;


;find1
find1 0__ 0__ r** find1 
find1 1__ 1__ *** mv1
find1 2__ 2__ *** reject
find1 ___ ___ *** reject

;mv1
mv1 0__ 0__ *** reject
mv1 1__ 11_ rr* mv1
mv1 2__ 22_ rr* mv1
mv1 ___ ___ ll* reset12


;reset12
reset12 ___ ___ rr* find2
reset12 *__ *__ l** reset12
reset12 **_ **_ ll* reset12

;find2
find2 *1_ *1_ *r* find2
find2 *2_ *2_ *** mv2


;mv2
mv2 *__ *__ *ll reset23
mv2 *2_ *22 *rr mv2
mv2 *1_ *** *** reject
mv2 *0_ *** *** reject

;reset23
reset23 *__ *__ *rr cmp
reset23 **_ **_ *l* reset23
reset23 *** *** *ll reset23

;cmp
cmp 012 012 rrr cmp
cmp 12_ 12_ *** accept
cmp *** *** *** reject

;accept
accept *** *** l** accept
accept _** _** r** clean1
clean1 *** _** r** clean1
clean1 _** T** r** accept2
accept2 _** r** r** accept3
accept3 _** u** r** accept4
accept4 _** e** *** halt_accept

;reject
reject *** *** l** reject
reject _** _** r** clean2
clean2 *** _** r** clean2
clean2 _** F** r** reject2
reject2 _** a** r** reject3
reject3 _** l** r** reject4
reject4 _** s** r** reject5
reject5 _** e** *** halt_reject

 