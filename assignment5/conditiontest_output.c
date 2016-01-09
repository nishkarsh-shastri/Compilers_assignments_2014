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
2) y = _tmp000
3) _tmp001 = 1.000000
4) x = _tmp001
5) _tmp002 = 10
6) z = _tmp002
7) _tmp003 = 10
8) b = _tmp003
9) _tmp004 = x * y
10) _tmp005 = inttodbl(b)
11) _tmp006 = _tmp004 + _tmp005
12) _tmp007 = dbltoint(_tmp006)
13) a = _tmp007
14) _tmp008 = 'c'
15) check = _tmp008
16) if a<b goto 18
17) goto 20
18) _tmp009 = 1
19) goto 23
20) _tmp009 = 0
21) goto 37
22) goto 40
23) if b<x goto 25
24) goto 27
25) _tmp010 = 1
26) goto 30
27) _tmp010 = 0
28) goto 33
29) goto 36
30) _tmp011 = a + b
31) a = _tmp011
32) goto 40
33) a = a - 1
34) a = a
35) goto 40
36) goto 40
37) a = a + 1
38) b = a
39) goto 40
40) if x<y goto 42
41) goto 44
42) _tmp012 = 1
43) goto 46
44) _tmp012 = 0
45) goto 58
46) if y>=z goto 48
47) goto 50
48) _tmp013 = 1
49) goto 55
50) _tmp013 = 0
51) goto 52
52) if (a) goto 55
53) goto 58
54) goto 61
55) _tmp016 = b
56) b = b + 1
57) goto 61
58) _tmp017 = b
59) b = b - 1
60) goto 61
61) END of PROGRAM
