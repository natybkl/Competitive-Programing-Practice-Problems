class Solution:
    def reformatDate(self, date: str) -> str:
        date = date.split()
        month = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]

        day = int(date[0][:len(date[0]) - 2])
        if day < 10:
            day = '0' + str(day)
        else:
            day = str(day)


        month = indexOf(month, date[1]) + 1
        if month < 10:
            month = '0' + str(month)
        else:
            month = str(month) 


        # print(day, month, date[-1])
        return '-'.join([date[-1], month, day])
        


