form machine import PWM, ADC, Pin
import utime


s=PWM(Pin(32))
s.freq(50)
adc = ADC(11)

s1=PWM(Pin(33))
s.freq(50)
adc2 = ADC(13)


while True:
    pot = int(adc.read_u16()*180/65535) 
    print(pot)
    ton=(pot+45)*100000/9
    s.duty_ns(int(ton))
    utime.sleep_ms(200)

while True:
    pot2 = int(adc2.read_u16()*180/65535)
    print(pot2)
    ton2=(pot2+45)*100000/9
    s.duty_ns(int(ton2))
    utime.sleep_ms(200)