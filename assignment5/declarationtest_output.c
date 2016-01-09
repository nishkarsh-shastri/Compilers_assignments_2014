   ******************************** GLOBAL SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
       function                      function      NULL         0         0         function-ST
           main                      function      NULL         0         0         function-ST
   ---------------------------------------------------------------------------------------

    ******************************   function SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
              a                           int      NULL         4         0                NULL
              b                           int      NULL         4         4                NULL
 $return_value$                        double      NULL         8         8                NULL
              x                           int      NULL         4        16                NULL
              c                          char   _tmp000         1        20                NULL
        _tmp000                          char       'f'         1        21                NULL
              y                        double         x         8        22                NULL
   ---------------------------------------------------------------------------------------

    ******************************       main SYMBOL TABLE **********************************
   ---------------------------------------------------------------------------------------
    Symbol Name                   Symbol Type  Initial Value      Size    Offset    function pointer
 $return_value$                           int      NULL         4         0                NULL
              x                           int      NULL         4         4                NULL
              y                           int      NULL         4         8                NULL
              a                           int      NULL         4        12                NULL
              b                           int      NULL         4        16                NULL
           val1                        double      NULL         8        20                NULL
           val2                        double      NULL         8        28                NULL
      char_val1                          char      NULL         1        36                NULL
              p                  pointer(int)      NULL         4        37                NULL
              q               pointer(double)      NULL         4        41                NULL
   char_pointer                 pointer(char)      NULL         4        45                NULL
              d                          char      NULL         1        49                NULL
              f                           int   _tmp000         4        50                NULL
        _tmp000                           int         4         4        54                NULL
            dbl                        double   _tmp001         8        58                NULL
        _tmp001                        double  4.500000         8        66                NULL
          array               array(100, int)      NULL       400        74                NULL
        _tmp002                           int       100         4       474                NULL
       array_2d  array(24, array(34, double))      NULL      6528       478                NULL
        _tmp003                           int        24         4      7006                NULL
        _tmp004                           int        34         4      7010                NULL
         consec                        double      NULL         8      7014                NULL
              k         pointer(pointer(int))      NULL         4      7022                NULL
   ---------------------------------------------------------------------------------------



0)  FUNCTION main:
1) _tmp000 = 4
2) f = _tmp000
3) _tmp001 = 4.500000
4) dbl = _tmp001
5) _tmp002 = 100
6) _tmp003 = 24
7) _tmp004 = 34
8)  FUNCTION function:
9) _tmp000 = 'f'
10) c = _tmp000
11) y = x
12) return y
13) END of PROGRAM
