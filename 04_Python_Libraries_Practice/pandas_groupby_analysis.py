import pandas as pd

data = {'Name': ['Ali', 'Zara', 'Ali'], 'Score': [85, 90, 78]}
df = pd.DataFrame(data)

grouped = df.groupby('Name').mean()
print(grouped)
