import pandas as pd

data = {'Name': ['Ali', 'Zara', 'Ahmed'], 'Marks': [85, 92, 78]}
df = pd.DataFrame(data)

average = df['Marks'].mean()
print("Average Marks:", average)
