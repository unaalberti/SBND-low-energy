with open('events_bnb_2000_output.txt', 'r') as file1, open('positions_2000.txt', 'r') as file2:

    with open('output_2000.txt', 'w') as ostr:
        temp_list = []
        for line1, line2 in zip(file1, file2):
            if line1[0] == "0":
                line = line1
                line_keep = line2
            else:
                line = line1.rstrip('\n')+ " " + line_keep
            temp_list.append(line)
            #print(line, file=ostr)
        ostr.seek(0, 0)
        ostr.write("\n".join(temp_list))




with open("output_2000.txt", 'r') as r, open('output_1_2000.txt', 'w') as o:
    for line in r:
        #strip() function
        if line.strip():
            o.write(line)

with open("output_1_2000.txt", 'r') as r_1, open('output_2_2000.txt', 'w') as o_1:
    temp_list_1 = []
    a = 0
    for line,i in zip(r_1,range(20000)):
        if line[0] == "0":
            a = a+1
            line_1 = line[1]
            line_2 = line[2] 
            line_3 = line[3]
            line = str(a) + line_1 +line_2 +line_3
            #line = line_3
            print(line)
        else:
            line = line
        temp_list_1.append(line)
    o_1.seek(0, 0)
    o_1.write("\n".join(temp_list_1))


with open("output_2_2000.txt", 'r') as r, open('output_3_2000.txt', 'w') as o:
    for line in r:
        #strip() function
        if line.strip():
            o.write(line)

   