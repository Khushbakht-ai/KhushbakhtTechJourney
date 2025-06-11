import matplotlib.pyplot as plt

sizes = [30, 45, 25]
labels = ['Python', 'C++', 'Java']

plt.pie(sizes, labels=labels, autopct='%1.1f%%')
plt.title("Language Usage")
plt.show()
