#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define set_bit(var,bit)  (var= var|(1<<bit))
#define clear_bit(var, bit) (var &=~(1<<bit))
#define tog_bit(var,bit) (var^=(1<<bit))
#define Get_bit(var,bit)  ((var>>bit)&(0x01))

#endif // BIT_MATH_H_INCLUDED
