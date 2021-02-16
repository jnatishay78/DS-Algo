def shellSort(a, num):
    interval = num // 2
    while interval > 0:
        for i in range(interval, num):
            temp = a[i]
            j = i
            while j >= interval and a[j - interval] > temp:
                a[j] = a[j - interval]
                j -= interval
            a[j] = temp
        interval //= 2
a = [ 3, 60, 35, 2, 45, 320, 5 ]
size = len(a)
shellSort(a, size)
print('Sorted Array:')
print(a)