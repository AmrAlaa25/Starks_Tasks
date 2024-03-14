#define SET_BIT(x,BIT_NUM) x|=(1<<BIT_NUM) 
#define CLEAR_BIT(x,BIT_NUM) x&=~(1<<BIT_NUM)
#define READ_BIT(x,BIT_NUM) ((x&(1<<BIT_NUM)))>>BIT_NUM
#define TOGGLE_BIT (x,BIT_NUM) x^=(1<<BIT_NUM)