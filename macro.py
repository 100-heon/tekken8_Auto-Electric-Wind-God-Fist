import subprocess
import os
import serial
from pynput.keyboard import Key, Listener
import time

# 아두이노 스케치 파일과 포트 설정
sketch_file = r"C:\Users\NEW\Desktop\tekken8_code\tekken8\tekken8.ino"
arduino_port = "com5"  # 리눅스와 맥OS 예시, 윈도우는 COM 포트를 사용합니다.
board_type = "arduino:avr:leonardo"  # 보드 타입은 사용하는 아두이노에 따라 다릅니다.

# 아두이노 스케치 업로드
subprocess.run(["arduino-cli", "compile", "--upload", "-p", arduino_port, "--fqbn", board_type, sketch_file])

arduino = serial.Serial('COM5', 9600)
last_press_time = 0
debounce_threshold = 0.5  # 디바운스 시간 설정 (초)

def on_press(key):
    global last_press_time
    current_time = time.time()
    try:
        if key.char == 'r':
            if current_time - last_press_time > debounce_threshold:
                # e 키가 눌렸을 때 아두이노에 'e' 커맨드를 보냄
                arduino.write(b'r')
                last_press_time = current_time
        if key.char == 'f':
            if current_time - last_press_time > debounce_threshold:
                # 드를 보냄
                arduino.write(b'f')
                last_press_time = current_time
        if key.char == 'q':
            if current_time - last_press_time > debounce_threshold:
                # e 키가 눌렸을 때 아두이노에 'e' 커맨드를 보냄
                arduino.write(b'q')
                last_press_time = current_time
        if key.char == 'a':
            if current_time - last_press_time > debounce_threshold:
                # e 키가 눌렸을 때 아두이노에 'e' 커맨드를 보냄
                arduino.write(b'a')
                last_press_time = current_time
    except AttributeError:
        pass

with Listener(on_press=on_press) as listener:
    listener.join()

