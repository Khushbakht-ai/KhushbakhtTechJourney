import pandas as pd
import matplotlib.pyplot as plt

data = {'Subject': ['Math', 'Physics', 'English'], 'Score': [80, 75, 90]}
df = pd.DataFrame(data)

plt.bar(df['Subject'], df['Score'])
plt.title("Student Performance")
plt.show()
