
def conversion(time1):
    time1, day = time1[:-2], time1[-2:].lower()
    if day == 'am':
        return time1
    elif day == 'pm':									
        return str(int(time1[0:2]) + 12) + time1[2:]
        
print(conversion("05:45:01PM"))

