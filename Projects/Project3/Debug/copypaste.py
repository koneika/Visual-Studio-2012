import pyautogui
import time
time.sleep(5)
# Открываем файл для чтения
with open('example.txt', 'r') as file:
    # Читаем файл построчно
    for line in file:
        # Обрабатываем каждую строку здесь
        a = line.strip()
        pyautogui.write(a)
        time.sleep(1)
        pyautogui.press('enter')
