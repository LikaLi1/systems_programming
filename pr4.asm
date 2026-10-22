sf | sign flag
of | overflow flag
cf | carry flag
zf | zero flag

'RFLAGS' 
(* | регистр флага *)

je | A == B | zf = 1
jne | A != B | zf = 0

jnz | * != 0 | zf = 0
jz | * == 0 | zf = 0

ja | A > B | cf = 0 & zf = 0
jae | A >= B | cf = 0
jb | A < B | cf = 1
jbe | A <= B | cf = 1 | zf = 1

jg | A > B | zf = 0 & sf = of
jge | A >= B | sf = of
jl | A < B | sf != of
jle | A <= B | zf = 1 | sf != of
