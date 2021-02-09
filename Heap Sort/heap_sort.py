def heapify(a, num, i):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    if l < num and a[i] < a[l]:
        largest = l

    if r < num and a[largest] < a[r]:
        largest = r

    if largest != i:
        a[i], a[largest] = a[largest], a[i]
        heapify(a, num, largest)


def heapSort(a):
    num = len(a)

    for i in range(num // 2, -1, -1):
        heapify(a, num, i)

    for i in range(num - 1, 0, -1):
        a[i], a[0] = a[0], a[i]
        heapify(a, i, 0)


a = [11, 34, 9, 5, 16, 10]
num = len(a)
print("Unsorted array:")
for i in range(num):
    print("%d " % a[i], end='')
heapSort(a)
print("Sorted array:")
for i in range(num):
    print("%d " % a[i], end='')


