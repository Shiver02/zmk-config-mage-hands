  
/*                KEY POSITIONS
  ╭────────────────────────────╮ ╭────────────────────────────╮   ╭─────────────────────────────╮ ╭─────────────────────────────╮  
  │  0   1   2   3   4   5   6 │ │  7   8   9  10  11  12  EC │   │ LC6 LC5 LC4 LC3 LC2 LC1 LC0 │ │ RC0 RC1 RC2 RC3 RC4 RC5 ENC │
  │ 13  14  15  16  17  18  19 │ │ 20  21  22  23  24  25  26 │   │ LN6 LN5 LN4 LN3 LN2 LN1 LN0 │ │ RN0 RN1 RN2 RN3 RN4 RN5 RN6 │
  │ 27  28  29  30  31  32  33 │ │ 34  35  36  37  38  39  40 │   │ LT6 LT5 LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 RT5 RT6 │
  │ 41  42  43  44  45  46  47 │ │ 48  49  50  51  52  53  54 │   │ LM6 LM5 LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 RM5 RM6 │
  │ 55  56  57  58  59  60  61 │ │ 62  63  64  65  66  67  68 │   │ LB5 LB5 LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 RB5 RB6 │
  ╰───────────────╮     69  70 │ │ 77  78     ╭───────────────╯   ╰───────────────╮     LH4 LH3 │ │ RH3 RH4     ╭───────────────╯
                  │ 71  72  73 │ │ 74  75  76 │                                   │ LH2 LH1 LH0 │ │ RH0 RH1 RH2 │
                  ╰────────────╯ ╰────────────╯                                   ╰─────────────╯ ╰─────────────╯ 
*/

#pragma once

#define LC0  6  // left-ceiling row
#define LC1  5
#define LC2  4  
#define LC3  3
#define LC4  2
#define LC5  1
#define LC6  0

#define RC0  7  // right-ceiling row
#define RC1  8  
#define RC2  9
#define RC3  10
#define RC4  11
#define RC5  12

#define LN0 19  // left-number row
#define LN1 18
#define LN2 17
#define LN3 16
#define LN4 15
#define LN5 14
#define LN6 13

#define RN0 20  // right-number row
#define RN1 21
#define RN2 22
#define RN3 23
#define RN4 24
#define RN5 25
#define RN6 26

#define LT0 33  // left-top row
#define LT1 32
#define LT2 31
#define LT3 30
#define LT4 29
#define LT5 28
#define LT6 27

#define RT0 34  // right-top row
#define RT1 35
#define RT2 36
#define RT3 37
#define RT4 38
#define RT5 39
#define RT6 40

#define LM0 47  // left-middle row
#define LM1 46
#define LM2 45
#define LM3 44
#define LM4 43
#define LM5 42
#define LM6 41

#define RM0 48  // right-middle row
#define RM1 49
#define RM2 50
#define RM3 51
#define RM4 52
#define RM5 53
#define RM6 54

#define LB0 61  // left-bottom row
#define LB1 60
#define LB2 59
#define LB3 58
#define LB4 57
#define LB5 56
#define LB6 55

#define RB0 62  // right-bottom row
#define RB1 63
#define RB2 64
#define RB3 65
#define RB4 66
#define RB5 67
#define RB6 68

#define LH0 73  // left thumb keys
#define LH1 72
#define LH2 71
#define LH3 70
#define LH4 69

#define RH0 74  // right thumb keys
#define RH1 75
#define RH2 76
#define RH3 77
#define RH4 78