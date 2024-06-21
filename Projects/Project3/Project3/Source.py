from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys

a = []

with open(r'C:\\Users\\slava\\Documents\\Visual Studio 2012\\Projects\\Project3\\Project3\\example.txt', 'r') as file:
    for page in file:
        a.append(page)
     
#for i in range(len(a)):
    #print(a[i])





browser = webdriver.Firefox()

browser.get('http://www.yahoo.com')
assert 'Yahoo' in browser.title

elem = browser.find_element(By.NAME, 'p')  # Find the search box
elem.send_keys('seleniumhq' + Keys.RETURN)

browser.quit()


