import pandas as pd

data = {'Name': ['Ali', 'Zara', None], 'Age': [22, None, 19]}
df = pd.DataFrame(data)

print("Before cleaning:\n", df)
df = df.dropna()
print("After cleaning:\n", df)
