import pyautogui
import time
pyautogui.FAILSAFE = False
for i in range(0, 100):
    time.sleep(2)
    pyautogui.press('j')
    pyautogui.press('l')
    pyautogui.press('tab')
    time.sleep(2)
    pyautogui.press('tab')
    pyautogui.press('enter')