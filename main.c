#include <stdio.h>
int main()
{
  float kenya_mix_price = 900.0;
  float kenya_strong_mix_price = 1100.0;
  float iranian_strong_mix_price = 550.0;
  float us_tea_price = 10.0;
  float kashmiri_tea_price = 2200.0;
  float green_tea_italian_price = 650.0;
  float green_tea_sell = 100.0;
  float kashmiri_tea_sell = green_tea_sell * 0.25;
  float italian_tea_sell = kashmiri_tea_sell * 0.35;
  float kashmiri_italian_sell_sum = kashmiri_tea_sell + italian_tea_sell;
  float kenya_strong_mix_sell = kashmiri_italian_sell_sum * 0.445;
  float iranian_strong_mix_sell = green_tea_sell + kashmiri_tea_sell + italian_tea_sell + kenya_strong_mix_sell;
  float kenya_mixture_sell = kashmiri_tea_sell * 0.25 + italian_tea_sell * 0.5;
  printf("Sell of Kenya Mixture: Rs. %f\n", kenya_mixture_sell * kenya_mix_price);
  printf("Sell of Kenya Strong Mixture: Rs. %f\n", kenya_strong_mix_sell * kenya_strong_mix_price);
  printf("Sell of Iranian Strong Tea: Rs. %f\n", iranian_strong_mix_sell * iranian_strong_mix_price);
  printf("Sell of US Tea: Rs. %f\n", green_tea_sell * us_tea_price);
  printf("Sell of Kashmiri Tea: Rs. %f\n", kashmiri_tea_sell * kashmiri_tea_price);
  printf("Sell of Green Tea Italian: Rs. %f\n", italian_tea_sell * green_tea_italian_price);
}
