//Segment tree for range based min querry
// Contributed By Shubham Raj


int query(int *tree,int ss,int se,int qs,int qe,int index){
    //Compelete Overlap
    if(ss>=qs && se<=qe){
        return tree[index];
    }
    // No Overlap
    if(qe<ss || qs>se){
        return INT_MAX;
    }
    //Partial Overlap
    int mid = (ss+se)/2;
    int leftans = query(tree,ss,mid,qs,qe,2*index);
    int rightans = query(tree,mid+1,se,qs,qe,2*index+1);
    int ans = min(leftans,rightans);
    return ans;


}


void buildtree(int *a,int *tree,int s,int e,int indx){
    if(s==e){
        tree[indx] = a[s];
        return;
    }
    int mid = (s+e)/2;
    buildtree(a,tree,s,mid,2*indx);
    buildtree(a,tree,mid+1,e,2*indx+1);
    tree[indx] = min(tree[2*indx],tree[2*indx+1]);
    return;
}
