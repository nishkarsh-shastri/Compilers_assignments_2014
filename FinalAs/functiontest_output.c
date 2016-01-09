   ******************************** GLOBAL SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
       function                      function      NULL         0         0         function-ST
      func_mine                      function      NULL         0         0         function-ST
           main                      function      NULL         0         0         function-ST
   ---------------------------------------------------------------------------------------

    ******************************   function SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
              a                           int      NULL         4         0                NULL
              b                           int      NULL         4         4                NULL
 $return_value$                        double      NULL         8         8                NULL
        _tmp000                           int        10         4        16                NULL
        _tmp001                           int        20         4        20                NULL
        _tmp002                           int      NULL         4        24                NULL
              c                        double      NULL         8        28                NULL
        _tmp003                        double      NULL         8        36                NULL
        _tmp004                        double      NULL         8        44                NULL
   ---------------------------------------------------------------------------------------

    ******************************  func_mine SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
              x                           int      NULL         4         0                NULL
              y                           int      NULL         4         4                NULL
              z                        double      NULL         8         8                NULL
 $return_value$                          char      NULL         1        16                NULL
              a                          char      NULL         1        17                NULL
        _tmp000                          char       'a'         1        18                NULL
        _tmp001                          bool      NULL         0        19                NULL
        _tmp002                           int      NULL         4        19                NULL
        _tmp003                        double      NULL         8        23                NULL
        _tmp004                        double      NULL         8        31                NULL
        _tmp005                           int      NULL         4        39                NULL
        _tmp006                          bool      NULL         0        43                NULL
        _tmp007                        double      NULL         8        43                NULL
        _tmp008                        double      NULL         8        51                NULL
        _tmp009                           int      NULL         4        59                NULL
        _tmp010                           int      NULL         4        63                NULL
   ---------------------------------------------------------------------------------------

    ******************************       main SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
 $return_value$                           int      NULL         4         0                NULL
              x                           int      NULL         4         4                NULL
              y                           int      NULL         4         8                NULL
              k                        double      NULL         8        12                NULL
        _tmp000                           int         2         4        20                NULL
        _tmp001                      function      NULL         0        24                NULL
        _tmp002                        double      NULL         8        24                NULL
              n                          char      NULL         1        32                NULL
        _tmp003                           int         2         4        33                NULL
        _tmp004                           int         3         4        37                NULL
        _tmp005                      function      NULL         0        41                NULL
        _tmp006                          char      NULL         1        41                NULL
   ---------------------------------------------------------------------------------------



0)  FUNCTION function:
1) _tmp000 = 10
2) a = _tmp000
3) _tmp001 = 20
4) b = _tmp001
5) _tmp002 = a + b
6) a = _tmp002
7) _tmp003 = inttodbl(a)
8) c = _tmp003
9) _tmp004 = inttodbl(a)
10) return _tmp004
11)  FUNCTION main:
12) _tmp000 = 2
13) param _tmp000
14) param y
15) _tmp001 = call function, 2
16) k = _tmp001
17) _tmp003 = 2
18) _tmp004 = 3
19) param _tmp004
20) param _tmp003
21) param k
22) _tmp005 = call func_mine, 3
23) n = _tmp005
24)  FUNCTION func_mine:
25) _tmp000 = 'a'
26) a = _tmp000
27) if x<y goto 29
28) goto 31
29) _tmp001 = 1
30) goto 34
31) _tmp001 = 0
32) goto 52
33) goto 56
34) _tmp002 = x * y
35) _tmp003 = inttodbl(_tmp002)
36) _tmp004 = _tmp003 / z
37) _tmp005 = dbltoint(_tmp004)
38) x = _tmp005
39) if x<y goto 41
40) goto 43
41) _tmp006 = 1
42) goto 46
43) _tmp006 = 0
44) goto 56
45) goto 51
46) _tmp007 = inttodbl(x)
47) _tmp008 = _tmp007 + z
48) _tmp009 = dbltoint(_tmp008)
49) x = _tmp009
50) goto 39
51) goto 56
52) _tmp010 = x
53) x = x - 1
54) y = _tmp010
55) goto 56
56) return a
57) END of PROGRAM
