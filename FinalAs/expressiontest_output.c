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
        _tmp003                        double      NULL         8       217                NULL
        _tmp004                           int         9         4       225                NULL
        _tmp005                        double      NULL         8       229                NULL
        _tmp006                        double      NULL         8       237                NULL
        _tmp007                           int      NULL         4       245                NULL
       array_2d     array(30, array(40, int))      NULL      4800       249                NULL
        _tmp008                           int        30         4      5049                NULL
        _tmp009                           int        40         4      5053                NULL
        _tmp010                           int         3         4      5057                NULL
        _tmp011                           int      NULL         4      5061                NULL
        _tmp012                           int         4         4      5065                NULL
        _tmp013                           int      NULL         4      5069                NULL
        _tmp014                           int      NULL         4      5073                NULL
        _tmp015                           int      NULL         4      5077                NULL
        _tmp016                           int         4         4      5081                NULL
        _tmp017                           int      NULL         4      5085                NULL
        _tmp018                           int         5         4      5089                NULL
        _tmp019                           int      NULL         4      5093                NULL
        _tmp020                           int      NULL         4      5097                NULL
        _tmp021                          char       'a'         1      5101                NULL
        _tmp022                           int        10         4      5102                NULL
        _tmp023                           int        20         4      5106                NULL
        _tmp024                           int        12         4      5110                NULL
        _tmp025                        double      NULL         8      5114                NULL
        _tmp026                        double  1.000000         8      5122                NULL
        _tmp027                          bool      NULL         0      5130                NULL
        _tmp028                        double      NULL         8      5130                NULL
        _tmp029                          char      NULL         1      5138                NULL
        _tmp030                        double      NULL         8      5139                NULL
        _tmp031                        double      NULL         8      5147                NULL
        _tmp032                           int      NULL         4      5155                NULL
        _tmp033                        double      NULL         8      5159                NULL
        _tmp034                        double      NULL         8      5167                NULL
        _tmp035                           int      NULL         4      5175                NULL
        _tmp036                        double      NULL         8      5179                NULL
        _tmp037                           int      NULL         4      5187                NULL
        _tmp038                           int      NULL         4      5191                NULL
        _tmp039                          char      NULL         1      5195                NULL
        _tmp040                          bool      NULL         0      5196                NULL
        _tmp041                          bool      NULL         0      5196                NULL
        _tmp042                          bool      NULL         0      5196                NULL
        _tmp043                        double      NULL         8      5196                NULL
        _tmp044                        double      NULL         8      5204                NULL
        _tmp045                           int      NULL         4      5212                NULL
        _tmp046                           int      NULL         4      5216                NULL
              x                           int      NULL         4      5220                NULL
        _tmp047                          bool      NULL         0      5224                NULL
              y                           int      NULL         4      5224                NULL
        _tmp048                           int      NULL         4      5228                NULL
        _tmp049                        double      NULL         8      5232                NULL
        _tmp050                        double      NULL         8      5240                NULL
        _tmp051                           int      NULL         4      5248                NULL
        _tmp052                           int      NULL         4      5252                NULL
        _tmp053                        double      NULL         8      5256                NULL
        _tmp054                        double      NULL         8      5264                NULL
        _tmp055                        double      NULL         8      5272                NULL
        _tmp056                        double      NULL         8      5280                NULL
        _tmp057                        double      NULL         8      5288                NULL
        _tmp058                           int      NULL         4      5296                NULL
        _tmp059                        double      NULL         8      5300                NULL
        _tmp060                           int      NULL         4      5308                NULL
   ---------------------------------------------------------------------------------------



0)  FUNCTION main:
1) _tmp000 = 1
2) _tmp001 = 20
3) _tmp002 = 12
4) _tmp003 = _tmp002 * 8
5) array[_tmp003] = a
6) _tmp004 = 9
7) _tmp005 = _tmp004 * 8
8) _tmp006 = array[_tmp005]
9) _tmp007 = dbltoint(_tmp006)
10) h = _tmp007
11) _tmp008 = 30
12) _tmp009 = 40
13) _tmp010 = 3
14) _tmp011 = _tmp010 * 120
15) _tmp012 = 4
16) _tmp014 = _tmp012 * 4
17) _tmp013 = _tmp011 + _tmp014
18) _tmp015 = array_2d[_tmp013]
19) h = _tmp015
20) _tmp016 = 4
21) _tmp017 = _tmp016 * 120
22) _tmp018 = 5
23) _tmp020 = _tmp018 * 4
24) _tmp019 = _tmp017 + _tmp020
25) array_2d[_tmp019] = e
26) _tmp021 = 'a'
27) c = _tmp021
28) _tmp022 = 10
29) a = _tmp022
30) _tmp023 = 20
31) b = _tmp023
32) _tmp024 = 12
33) _tmp025 = inttodbl(_tmp024)
34) f = _tmp025
35) _tmp026 = 1.000000
36) g = _tmp026
37) if a<b goto 39
38) goto 41
39) _tmp027 = 1
40) goto 44
41) _tmp027 = 0
42) goto 48
43) goto 48
44) _tmp028 = f + g
45) _tmp029 = dbltochar(_tmp028)
46) c = _tmp029
47) goto 37
48) _tmp030 = inttodbl(b)
49) _tmp031 = f * _tmp030
50) _tmp032 = dbltoint(_tmp031)
51) a = _tmp032
52) _tmp033 = chartodbl(c)
53) _tmp034 = _tmp033 * g
54) _tmp035 = dbltoint(_tmp034)
55) b = _tmp035
56) _tmp036 = e / f
57) _tmp037 = dbltoint(_tmp036)
58) temp = _tmp037
59) _tmp038 = a - b
60) _tmp039 = inttochar(_tmp038)
61) c = _tmp039
62) if a<b goto 64
63) goto 66
64) _tmp040 = 1
65) goto 68
66) _tmp040 = 0
67) goto 80
68) if e>=f goto 70
69) goto 72
70) _tmp041 = 1
71) goto 75
72) _tmp041 = 0
73) goto 80
74) goto 83
75) _tmp043 = inttodbl(h)
76) _tmp044 = f + _tmp043
77) _tmp045 = dbltoint(_tmp044)
78) temp = _tmp045
79) goto 83
80) _tmp046 = dbltoint(f)
81) temp = _tmp046
82) goto 83
83) if a<b goto 85
84) goto 87
85) _tmp047 = 1
86) goto 89
87) _tmp047 = 0
88) goto 89
89) x = _tmp047
90) if a<b goto 92
91) goto 94
92) _tmp048 = 1
93) goto 96
94) _tmp048 = 0
95) goto 96
96) _tmp049 = inttodbl(_tmp048)
97) _tmp050 = _tmp049 + e
98) _tmp051 = dbltoint(_tmp050)
99) y = _tmp051
100) _tmp052 = -b
101) _tmp053 = inttodbl(_tmp052)
102) _tmp054 = _tmp053 * f
103) _tmp055 = e / f
104) _tmp056 = _tmp055 - g
105) _tmp057 = _tmp054 / _tmp056
106) _tmp058 = dbltoint(_tmp057)
107) a = _tmp058
108) _tmp059 = chartodbl(c)
109) _tmp060 = dbltoint(_tmp059)
110) x = _tmp060
111) END of PROGRAM
