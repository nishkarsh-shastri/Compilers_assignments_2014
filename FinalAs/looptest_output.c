   ******************************** GLOBAL SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
           main                      function      NULL         0         0         function-ST
   ---------------------------------------------------------------------------------------

    ******************************       main SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
 $return_value$                           int      NULL         4         0                NULL
              i                           int      NULL         4         4                NULL
              j                           int      NULL         4         8                NULL
              a                array(10, int)      NULL        40        12                NULL
        _tmp000                           int        10         4        52                NULL
              x                        double   _tmp001         8        56                NULL
        _tmp001                        double  1.000000         8        64                NULL
              y                           int   _tmp002         4        72                NULL
        _tmp002                           int         9         4        76                NULL
       constant                           int   _tmp003         4        80                NULL
        _tmp003                           int       100         4        84                NULL
              k                        double      NULL         8        88                NULL
        _tmp004                        double  9.000000         8        96                NULL
        _tmp005                           int         1         4       104                NULL
        _tmp006                          bool      NULL         0       108                NULL
        _tmp007                           int      NULL         4       108                NULL
        _tmp008                           int        10         4       112                NULL
        _tmp009                        double      NULL         8       116                NULL
        _tmp010                        double      NULL         8       124                NULL
        _tmp011                        double      NULL         8       132                NULL
        _tmp012                        double      NULL         8       140                NULL
        _tmp013                           int      NULL         4       148                NULL
        _tmp014                           int         1         4       152                NULL
        _tmp015                          bool      NULL         0       156                NULL
        _tmp016                           int      NULL         4       156                NULL
        _tmp017                           int         1         4       160                NULL
        _tmp018                           int         1         4       164                NULL
        _tmp019                           int      NULL         4       168                NULL
        _tmp020                           int      NULL         4       172                NULL
        _tmp021                           int      NULL         4       176                NULL
        _tmp022                          bool      NULL         0       180                NULL
        _tmp023                          bool      NULL         0       180                NULL
        _tmp024                           int         9         4       180                NULL
        _tmp025                          bool      NULL         0       184                NULL
        _tmp026                          bool      NULL         0       184                NULL
        _tmp027                        double      NULL         8       184                NULL
        _tmp028                        double      NULL         8       192                NULL
        _tmp029                        double      NULL         8       200                NULL
        _tmp030                        double      NULL         8       208                NULL
        _tmp031                           int      NULL         4       216                NULL
        _tmp032                          bool      NULL         0       220                NULL
   ---------------------------------------------------------------------------------------



0)  FUNCTION main:
1) _tmp000 = 10
2) _tmp001 = 1.000000
3) _tmp002 = 9
4) _tmp003 = 100
5) _tmp004 = 9.000000
6) k = _tmp004
7) _tmp005 = 1
8) i = _tmp005
9) if i<constant goto 11
10) goto 13
11) _tmp006 = 1
12) goto 19
13) _tmp006 = 0
14) goto 28
15) goto 28
16) _tmp007 = i
17) i = i + 1
18) goto 9
19) _tmp008 = 10
20) _tmp009 = inttodbl(_tmp008)
21) _tmp010 = x + _tmp009
22) x = _tmp010
23) _tmp011 = inttodbl(y)
24) _tmp012 = _tmp011 - x
25) _tmp013 = dbltoint(_tmp012)
26) y = _tmp013
27) goto 16
28) _tmp014 = 1
29) if y<_tmp014 goto 31
30) goto 33
31) _tmp015 = 1
32) goto 36
33) _tmp015 = 0
34) goto 39
35) goto 39
36) _tmp016 = y + constant
37) y = _tmp016
38) goto 28
39) _tmp017 = 1
40) j = _tmp017
41) _tmp018 = 1
42) _tmp019 = i - _tmp018
43) i = _tmp019
44) _tmp020 = j * 4
45) _tmp021 = a[_tmp020]
46) if _tmp021<k goto 48
47) goto 50
48) _tmp022 = 1
49) goto 41
50) _tmp022 = 0
51) goto 53
52) goto 53
53) if i<j goto 55
54) goto 57
55) _tmp023 = 1
56) goto 67
57) _tmp023 = 0
58) goto 59
59) _tmp024 = 9
60) if y<_tmp024 goto 62
61) goto 64
62) _tmp025 = 1
63) goto 67
64) _tmp025 = 0
65) goto 71
66) goto 76
67) _tmp027 = inttodbl(y)
68) _tmp028 = x - _tmp027
69) x = _tmp028
70) goto 76
71) _tmp029 = inttodbl(y)
72) _tmp030 = _tmp029 - x
73) _tmp031 = dbltoint(_tmp030)
74) y = _tmp031
75) goto 76
76) if x>y goto 78
77) goto 80
78) _tmp032 = 1
79) goto 83
80) _tmp032 = 0
81) goto 85
82) goto 85
83) x = k
84) goto 85
85) END of PROGRAM
