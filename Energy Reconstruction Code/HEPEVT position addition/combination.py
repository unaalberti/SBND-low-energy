"""
with open( 'events_bnb_test.txt','r+') as fopen:
    string = ""
    for line in fopen.readlines():
        string = string + line[:-3] + "\n"

with open( 'events_bnb_test.txt','w') as fopen:
    fopen.write(string)
"""

with open('events_bnb_2000_use2.txt', "r+") as fp:
    temp_list = []
    for line in fp:
        if line[0] == "0" :
            line = line
            #if line[3] == "0" :
                #line = line[0:5]
                #print("hi")
            #if line[3] == "1":
                #line = line[0:5]
                #print("hi")
            #else:
                #line = line[0:3]
        else:
            line = line[:-12]
        temp_list.append(line)
    fp.seek(0, 0)
    fp.write("\n".join(temp_list))
    #print(temp_list)

    with open("events_bnb_2000_use2.txt", 'r') as r, open('events_bnb_2000_output.txt', 'w') as o:
        for line in r:
            #strip() function
            if line.strip():
                o.write(line)
    