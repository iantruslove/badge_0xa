#include <Arduino.h>

int freq = 2000;
#define CHANNEL 0
int resolution = 8;
  
void setup() {
  Serial.begin(115200);
  ledcSetup(CHANNEL, freq, resolution);
  ledcAttachPin(26, CHANNEL);
}
  
// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).

void tone(int tonePin, int frequency, double msecs) {
  ledcWriteTone(CHANNEL, frequency);
  delayMicroseconds(int(msecs*1000));
  ledcWriteTone(CHANNEL, 0);
}

void bass() {
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*432.3177083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*46.557291666666664));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2946.411458333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*419.015625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*152.97395833333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2939.7604166666665));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*432.3177083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*46.557291666666664));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2953.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*419.015625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*192.88020833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*139.671875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*212.83333333333331));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2953.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*405.71354166666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*279.34375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*525.4322916666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*192.88020833333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*445.61979166666663));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*452.2708333333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*166.27604166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*472.2239583333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*232.78645833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*598.59375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*558.6875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*212.83333333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*598.59375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*518.78125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*325.90104166666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*152.97395833333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*166.27604166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*472.2239583333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*219.484375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*419.015625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*598.59375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*638.5));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*638.5));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*392.4114583333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*505.47916666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*26.604166666666664));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*598.59375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*399.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*166.27604166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*152.97395833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*3192.5));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*325.90104166666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*152.97395833333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*458.921875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*179.578125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*285.99479166666663));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*399.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*325.90104166666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*152.97395833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*432.3177083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*139.671875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*179.578125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2953.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*419.015625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2939.7604166666665));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*279.34375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*219.484375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*419.015625));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*545.3854166666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*166.27604166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*472.2239583333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*212.83333333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*139.671875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*179.578125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*232.78645833333331));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*598.59375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*279.34375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*405.71354166666663));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*545.3854166666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*192.88020833333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*445.61979166666663));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*166.27604166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*472.2239583333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*212.83333333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*179.578125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*611.8958333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*26.604166666666664));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*638.5));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*305.94791666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*638.5));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*392.4114583333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*512.1302083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*26.604166666666664));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*591.9427083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*392.4114583333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*166.27604166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*3192.5));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*452.2708333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*452.2708333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*259.390625));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*452.2708333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*259.390625));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*399.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*478.875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*19.953125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2946.411458333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*246.08854166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*419.015625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2939.7604166666665));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*226.13541666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*525.4322916666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*212.83333333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*232.78645833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*598.59375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*638.5));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*292.6458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 77.78174593052023);
delayMicroseconds(int(1000*638.5));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*399.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*26.604166666666664));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*512.1302083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*585.2916666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*159.625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*212.83333333333331));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*3192.5));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*26.604166666666664));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*305.94791666666663));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*452.2708333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*266.04166666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*39.90625));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*339.203125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*299.296875));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*339.203125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*139.671875));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*385.76041666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*19.953125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*259.390625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*46.557291666666664));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*352.5052083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*285.99479166666663));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*339.203125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*139.671875));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*259.390625));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*319.25));
ledcWriteTone(CHANNEL, 61.7354126570155);
delayMicroseconds(int(1000*19.953125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*259.390625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*46.557291666666664));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*379.109375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*359.15625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*279.34375));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 73.41619197935188);
delayMicroseconds(int(1000*399.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*239.4375));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*325.90104166666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*152.97395833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*372.4583333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*106.41666666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*438.96875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*345.85416666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 82.4068892282175);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*332.5520833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*73.16145833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*86.46354166666666));
ledcWriteTone(CHANNEL, 46.2493028389543);
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*465.57291666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*13.302083333333332));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*412.3645833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*79.8125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*66.51041666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2939.7604166666665));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*259.390625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*419.015625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*192.88020833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*139.671875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*179.578125));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2939.7604166666665));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*425.66666666666663));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*53.20833333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*133.02083333333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*186.22916666666666));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*99.765625));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*172.92708333333331));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*113.06770833333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*206.18229166666666));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2939.7604166666665));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*252.73958333333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*432.3177083333333));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*46.557291666666664));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*126.36979166666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*192.88020833333331));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*146.32291666666666));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*179.578125));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*59.859375));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*93.11458333333333));
ledcWriteTone(CHANNEL, 55.0);
delayMicroseconds(int(1000*152.97395833333331));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*166.27604166666666));
ledcWriteTone(CHANNEL, 51.91308719749314);
delayMicroseconds(int(1000*119.71875));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
delayMicroseconds(int(1000*199.53125));
ledcWriteTone(CHANNEL, 69.29565774421802);
delayMicroseconds(int(1000*2953.0625));
ledcWriteTone(CHANNEL, 0); /* NOTE OFF */
}

void loop() {
    // Play midi
    bass();
}
