
def convert_to_24(time):
    time, half_day = time[:-2], time[-2:].lower()
    if half_day == 'am':
        return time
    elif half_day == 'pm':
        split = time.find(':')
        return str(int(time[:split]) + 12) + time[split:]
        
convert_to_24("05:45:01PM")

