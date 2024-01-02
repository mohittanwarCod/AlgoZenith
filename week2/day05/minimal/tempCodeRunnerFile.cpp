
        cin>>i>>j;
        arr[i]+=1;
        arr[j+1]-=1;

    }
    int pre[n];
 
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    while(Q--){
        int i,j;
        cin>>i>>j;
        int cnt=0;
        while(i<=j){
            if(pre[i]>=K) cnt++;
            i++;