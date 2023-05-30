import machine
import utime 
for utime import sleep

pin = machine.Pin(15)
pwm = machine.PWM(pin)
pwm.freq(50)

pin2 = machine.Pin(16)
pwm2 = machine.PWM(pin2)
pwm2.freq(50)

min = 2000
max = 9000

for _ in range(10):
    for duty in range(min, max):
        pwm.duty_u16(duty)
        utime.sleep(0.001) 
    sleep(100)

    for duty in range (min, max):
        pwm2.duty_u16(duty)
        utime.sleep(0.001)
    sleep (100)

    for duty in range(max, min, -1):
        pwm2.duty_u16(duty)
        utime.sleep(0.001)    
    sleep(100)

    for duty in range(max, min, -1):
        pwm.duty_u16(duty)
        utime.sleep(0.001)    
    sleep(100)