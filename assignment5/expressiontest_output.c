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
              b                           int      NULL         4         8                NULL
              h                           int      NULL         4        12                NULL
              e                        double      NULL         8        16                NULL
              f                        double      NULL         8        24                NULL
              g                        double      NULL         8        32                NULL
           temp                           int   _tmp000         4        40                NULL
        _tmp000                           int         1         4        44                NULL
              c                          char      NULL         1        48                NULL
          array             array(20, double)      NULL       160        49                NULL
        _tmp001                           int        20         4       209                NULL
        _tmp002                           int        12         4       213                NULL
        _tmp003                           int      NULL         4       217                NULL
        _tmp004                           int         9         4       221                NULL
        _tmp005                           int      NULL         4       225                NULL
        _tmp006                        double      NULL         8       229                NULL
        _tmp007                           int      NULL         4       237                NULL
       array_2d     array(30, array(40, int))      NULL      4800       241                NULL
        _tmp008                           int        30         4      5041                NULL
        _tmp009                           int        40         4      5045                NULL
        _tmp010                           int         3         4      5049                NULL
        _tmp011                           int      NULL         4      5053                NULL
        _tmp012                           int         4         4      5057                NULL
        _tmp013                           int      NULL         4      5061                NULL
        _tmp014                           int      NULL         4      5065                NULL
        _tmp015                           int      NULL         4      5069                NULL
        _tmp016                           int         4         4      5073                NULL
        _tmp017                           int      NULL         4      5077                NULL
        _tmp018                           int         5         4      5081                NULL
        _tmp019                           int      NULL         4      5085                NULL
        _tmp020                           int      NULL         4      5089                NULL
        _tmp021                          char       'a'         1      5093                NULL
        _tmp022                           int        10         4      5094                NULL
        _tmp023                           int        20         4      5098                NULL
        _tmp024                           int        12         4      5102                NULL
        _tmp025                        double      NULL         8      5106                NULL
        _tmp026                        double  1.000000         8      5114                NULL
        _tmp027                          bool      NULL         0      5122                NULL
        _tmp028                        double      NULL         8      5122                NULL
        _tmp029                          char      NULL         1      5130                NULL
        _tmp030                        double      NULL         8      5131                NULL
        _tmp031                        double      NULL         8      5139                NULL
        _tmp032                           int      NULL         4      5147                NULL
        _tmp033                        double      NULL         8      5151                NULL
        _tmp034                        double      NULL         8      5159                NULL
        _tmp035                           int      NULL         4      5167                NULL
        _tmp036                        double      NULL         8      5171                NULL
        _tmp037                           int      NULL         4      5179                NULL
        _tmp038                           int      NULL         4      5183                NULL
        _tmp039                          char      NULL         1      5187                NULL
        _tmp040                          bool      NULL         0      5188                NULL
        _tmp041                          bool      NULL         0      5188                NULL
        _tmp042                          bool      NULL         0      5188                NULL
        _tmp043                        double      NULL         8      5188                NULL
        _tmp044                        double      NULL         8      5196                NULL
        _tmp045                           int      NULL         4      5204                NULL
        _tmp046                           int      NULL         4      5208                NULL
              x                           int      NULL         4      5212                NULL
        _tmp047                          bool      NULL         0      5216                NULL
              y                           int      NULL         4      5216                NULL
        _tmp048                           int      NULL         4      5220                NULL
        _tmp049                        double      NULL         8      5224                NULL
        _tmp050                        double      NULL         8      5232                NULL
        _tmp051                           int      NULL         4      5240                NULL
        _tmp052                           int      NULL         4      5244                NULL
        _tmp053                        double      NULL         8      5248                NULL
        _tmp054                        double      NULL         8      5256                NULL
        _tmp055                        double      NULL         8      5264                NULL
        _tmp056                        double      NULL         8      5272                NULL
        _tmp057                        double      NULL         8      5280                NULL
        _tmp058                           int      NULL         4      5288                NULL
        _tmp059                        double      NULL         8      5292                NULL
        _tmp060                           int      NULL         4      5300                NULL
   ---------------------------------------------------------------------------------------



0)  FUNCTION main:
1) _tmp000 = 1
2) temp = _tmp000
3) _tmp001 = 20
4) _tmp002 = 12
5) _tmp003 = _tmp002 * 8
6) array[_tmp003] = a
7) _tmp004 = 9
8) _tmp005 = _tmp004 * 8
9) _tmp006 = array[_tmp005]
10) _tmp007 = dbltoint(_tmp006)
11) h = _tmp007
12) _tmp008 = 30
13) _tmp009 = 40
14) _tmp010 = 3
15) _tmp011 = _tmp010 * 160
16) _tmp012 = 4
17) _tmp014 = _tmp012 * 4
18) _tmp013 = _tmp011 + _tmp014
19) _tmp015 = array_2d[_tmp013]
20) h = _tmp015
21) _tmp016 = 4
22) _tmp017 = _tmp016 * 160
23) _tmp018 = 5
24) _tmp020 = _tmp018 * 4
25) _tmp019 = _tmp017 + _tmp020
26) array_2d[_tmp019] = e
27) _tmp021 = 'a'
28) c = _tmp021
29) _tmp022 = 10
30) a = _tmp022
31) _tmp023 = 20
32) b = _tmp023
33) _tmp024 = 12
34) _tmp025 = inttodbl(_tmp024)
35) f = _tmp025
36) _tmp026 = 1.000000
37) g = _tmp026
38) if a<b goto 40
39) goto 42
40) _tmp027 = 1
41) goto 45
42) _tmp027 = 0
43) goto 49
44) goto 49
45) _tmp028 = f + g
46) _tmp029 = dbltochar(_tmp028)
47) c = _tmp029
48) goto 38
49) _tmp030 = inttodbl(b)
50) _tmp031 = f * _tmp030
51) _tmp032 = dbltoint(_tmp031)
52) a = _tmp032
53) _tmp033 = chartodbl(c)
54) _tmp034 = _tmp033 * g
55) _tmp035 = dbltoint(_tmp034)
56) b = _tmp035
57) _tmp036 = e / f
58) _tmp037 = dbltoint(_tmp036)
59) temp = _tmp037
60) _tmp038 = a - b
61) _tmp039 = inttochar(_tmp038)
62) c = _tmp039
63) if a<b goto 65
64) goto 67
65) _tmp040 = 1
66) goto 69
67) _tmp040 = 0
68) goto 81
69) if e>=f goto 71
70) goto 73
71) _tmp041 = 1
72) goto 76
73) _tmp041 = 0
74) goto 81
75) goto 84
76) _tmp043 = inttodbl(h)
77) _tmp044 = f + _tmp043
78) _tmp045 = dbltoint(_tmp044)
79) temp = _tmp045
80) goto 84
81) _tmp046 = dbltoint(f)
82) temp = _tmp046
83) goto 84
84) if a<b goto 86
85) goto 88
86) _tmp047 = 1
87) goto 90
88) _tmp047 = 0
89) goto 90
90) x = _tmp047
91) if a<b goto 93
92) goto 95
93) _tmp048 = 1
94) goto 97
95) _tmp048 = 0
96) goto 97
97) _tmp049 = inttodbl(_tmp048)
98) _tmp050 = _tmp049 + e
99) _tmp051 = dbltoint(_tmp050)
100) y = _tmp051
101) _tmp052 = -b
102) _tmp053 = inttodbl(_tmp052)
103) _tmp054 = _tmp053 * f
104) _tmp055 = e / f
105) _tmp056 = _tmp055 - g
106) _tmp057 = _tmp054 / _tmp056
107) _tmp058 = dbltoint(_tmp057)
108) a = _tmp058
109) _tmp059 = chartodbl(c)
110) _tmp060 = dbltoint(_tmp059)
111) x = _tmp060
112) END of PROGRAM
