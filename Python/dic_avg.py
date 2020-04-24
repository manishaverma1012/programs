if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    print("%2f" %(sum(student_marks[query_name])/len(student_marks[query_name])))
    





    #if student_marks['query_name'] == student_marks['name']:
        #student_marks['query_name'] = scores
        #print(scores)
    #print(query_score.append(scores))
    #print( sum(query_score))
    #b = a/3
    #print(b)
    	