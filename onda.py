import matplotlib
matplotlib.use('TkAgg') 
import matplotlib.pyplot as plt
import numpy as np
import matplotlib.pyplot as plt
import numpy as np

# Simulando uma tomada 220V (60Hz)
tempo = np.linspace(0, 0.05, 500) 
tensao = 220 * np.sin(2 * np.pi * 60 * tempo)

plt.figure(figsize=(10, 5))
plt.plot(tempo, tensao, color='blue', linewidth=2)
plt.title('Minha Primeira Simulação: Tensão AC 220V')
plt.xlabel('Tempo (s)')
plt.ylabel('Tensão (V)')
plt.grid(True)
plt.axhline(0, color='black') # Linha do zero
plt.show()