   ******************************** GLOBAL SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
           main                      function      NULL         0         0         function-ST
   ---------------------------------------------------------------------------------------

    ******************************       main SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
 $return_value$                           int      NULL         4         0                NULL
              a                           int      NULL         4         4                NULL
              x                        double      NULL         8         8                NULL
              y                        double   _tmp000         8        16                NULL
        _tmp000                        double  9.000000         8        24                NULL
        _tmp001                        double  1.000000         8        32                NULL
              z                           int   _tmp002         4        40                NULL
        _tmp002                           int        10         4        44                NULL
              b                           int   _tmp003         4        48                NULL
        _tmp003                           int        10         4        52                NULL
          check                          char      NULL         1        56                NULL
        _tmp004                        double      NULL         8        57                NULL
        _tmp005                        double      NULL         8        65                NULL
        _tmp006                        double      NULL         8        73                NULL
        _tmp007                           int      NULL         4        81                NULL
        _tmp008                          char       'c'         1        85                NULL
        _tmp009                          bool      NULL         0        86                NULL
        _tmp010                          bool      NULL         0        86                NULL
        _tmp011                           int      NULL         4        86                NULL
        _tmp012                          bool      NULL         0        90                NULL
        _tmp013                          bool      NULL         0        90                NULL
        _tmp014                          bool      NULL         0        90                NULL
        _tmp015                          bool      NULL         0        90                NULL
        _tmp016                           int      NULL         4        90                NULL
        _tmp017                           int      NULL         4        94                NULL
   ---------------------------------------------------------------------------------------



0)  FUNCTION main:
1) _tmp000 = 9.000000
2) _tmp001 = 1.000000
3) x = _tmp001
4) _tmp002 = 10
5) _tmp003 = 10
6) _tmp004 = x * y
7) _tmp005 = inttodbl(b)
8) _tmp006 = _tmp004 + _tmp005
9) _tmp007 = dbltoint(_tmp006)
10) a = _tmp007
11) _tmp008 = 'c'
12) check = _tmp008
13) if a<b goto 15
14) goto 17
15) _tmp009 = 1
16) goto 20
17) _tmp009 = 0
18) goto 34
19) goto 37
20) if b<x goto 22
21) goto 24
22) _tmp010 = 1
23) goto 27
24) _tmp010 = 0
25) goto 30
26) goto 33
27) _tmp011 = a + b
28) a = _tmp011
29) goto 37
30) a = a - 1
31) a = a
32) goto 37
33) goto 37
34) a = a + 1
35) b = a
36) goto 37
37) if x<y goto 39
38) goto 41
39) _tmp012 = 1
40) goto 43
41) _tmp012 = 0
42) goto 55
43) if y>=z goto 45
44) goto 47
45) _tmp013 = 1
46) goto 52
47) _tmp013 = 0
48) goto 49
49) if (a) goto 52
50) goto 55
51) goto 58
52) _tmp016 = b
53) b = b + 1
54) goto 58
55) _tmp017 = b
56) b = b - 1
57) goto 58
58) END of PROGRAM
