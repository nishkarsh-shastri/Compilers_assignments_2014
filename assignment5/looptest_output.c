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
3) x = _tmp001
4) _tmp002 = 9
5) y = _tmp002
6) _tmp003 = 100
7) constant = _tmp003
8) _tmp004 = 9.000000
9) k = _tmp004
10) _tmp005 = 1
11) i = _tmp005
12) if i<constant goto 14
13) goto 16
14) _tmp006 = 1
15) goto 22
16) _tmp006 = 0
17) goto 31
18) goto 31
19) _tmp007 = i
20) i = i + 1
21) goto 12
22) _tmp008 = 10
23) _tmp009 = inttodbl(_tmp008)
24) _tmp010 = x + _tmp009
25) x = _tmp010
26) _tmp011 = inttodbl(y)
27) _tmp012 = _tmp011 - x
28) _tmp013 = dbltoint(_tmp012)
29) y = _tmp013
30) goto 19
31) _tmp014 = 1
32) if y<_tmp014 goto 34
33) goto 36
34) _tmp015 = 1
35) goto 39
36) _tmp015 = 0
37) goto 42
38) goto 42
39) _tmp016 = y + constant
40) y = _tmp016
41) goto 31
42) _tmp017 = 1
43) j = _tmp017
44) _tmp018 = 1
45) _tmp019 = i - _tmp018
46) i = _tmp019
47) _tmp020 = j * 4
48) _tmp021 = a[_tmp020]
49) if _tmp021<k goto 51
50) goto 53
51) _tmp022 = 1
52) goto 44
53) _tmp022 = 0
54) goto 56
55) goto 56
56) if i<j goto 58
57) goto 60
58) _tmp023 = 1
59) goto 70
60) _tmp023 = 0
61) goto 62
62) _tmp024 = 9
63) if y<_tmp024 goto 65
64) goto 67
65) _tmp025 = 1
66) goto 70
67) _tmp025 = 0
68) goto 74
69) goto 79
70) _tmp027 = inttodbl(y)
71) _tmp028 = x - _tmp027
72) x = _tmp028
73) goto 79
74) _tmp029 = inttodbl(y)
75) _tmp030 = _tmp029 - x
76) _tmp031 = dbltoint(_tmp030)
77) y = _tmp031
78) goto 79
79) if x>y goto 81
80) goto 83
81) _tmp032 = 1
82) goto 86
83) _tmp032 = 0
84) goto 88
85) goto 88
86) x = k
87) goto 88
88) END of PROGRAM
