from sklearn.cluster import KMeans
import pandas as pd
from sklearn.preprocessing import MinMaxScaler
from matplotlib import pyplot as plt

data = {
    'Mahasiswa': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11],
    'IPK': [0.8, 1.2, 1, 2, 0.7, 2.5, 3, 3, 3, 3.5, 2.5],
    'Tingkat Kemiskinan(TM)': [0.8, 1, 1.2, 1.5, 1.5, 3, 2.5, 2, 3, 3.9, 3.5],
    'Beasiswa/Tidak': [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1]
}

df = pd.DataFrame(data)
df.to_csv('beasiswa.csv', index=False)

df1 = pd.read_csv('beasiswa.csv')
print("Before")
print(df.head)

plt.scatter(df['IPK'], df['Tingkat Kemiskinan(TM)'])
plt.xlabel('IPK')
plt.ylabel('Tingkat Miskin')


km = KMeans(n_clusters=2)
y_predicted = km.fit_predict(df[['IPK', 'Tingkat Kemiskinan(TM)']])
y_predicted

df1['klaster'] = y_predicted
print("\nAfter")
print(df1)

dfa = df[df1.klaster == 0]
dfb = df[df1.klaster == 1]
plt.scatter(dfa['IPK'], dfa['Tingkat Kemiskinan(TM)'], color='red')
plt.scatter(dfb['IPK'], dfb['Tingkat Kemiskinan(TM)'], color='black')
plt.scatter(km.cluster_centers_[:, 0], km.cluster_centers_[:, 1], color='purple', marker='*', label='center')
plt.xlabel('IPK')
