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
 $return_value$                           int      NULL         4         8                NULL
        _tmp000                           int        10         4        12                NULL
        _tmp001                           int        20         4        16                NULL
        _tmp002                           int      NULL         4        20                NULL
              c                        double      NULL         8        24                NULL
        _tmp003                        double      NULL         8        32                NULL
              t                           int      NULL         4        40                NULL
   ---------------------------------------------------------------------------------------

    ******************************  func_mine SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
              x                           int      NULL         4         0                NULL
              y                           int      NULL         4         4                NULL
              z                        double      NULL         8         8                NULL
 $return_value$                          char      NULL         1        16                NULL
   ---------------------------------------------------------------------------------------

    ******************************       main SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
 $return_value$                           int      NULL         4         0                NULL
              x                           int      NULL         4         4                NULL
              y                           int      NULL         4         8                NULL
              k                        double      NULL         8        12                NULL
              n                           int      NULL         4        20                NULL
        _tmp000                           int         2         4        24                NULL
        _tmp001                          void      NULL         0        28                NULL
        _tmp002                           int      NULL         4        28                NULL
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
9) t = a
10) return t
11)  FUNCTION main:
12) _tmp000 = 2
13) param _tmp000
14) param y
15) _tmp002 = call function, 2
16) n = _tmp002
17) END of PROGRAM
