func carPooling(trips [][]int, capacity int) bool {
    var people [1005]int
    flag:=true

    for i := 0;i<len(trips);i++{
        for j := trips[i][1] ;j < trips[i][2];j++{
            people[j]+=trips[i][0]
            if(people[j]>capacity){
                flag=false
                break
            }
        }
    }
    return flag
}