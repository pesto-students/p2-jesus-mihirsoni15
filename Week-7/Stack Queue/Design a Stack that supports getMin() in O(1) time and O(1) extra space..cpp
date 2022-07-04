// void push(stack<int>& s, int a){
// 	// Your code goes here
// 	s.push(a);
// }

// bool isFull(stack<int>& s,int n){
// 	// Your code goes here
// 	if(s.size() == n){
// 	    return 1;
// 	}else{
// 	    return 0;
// 	}
// }

// bool isEmpty(stack<int>& s){
// 	// Your code goes here
// 	if(s.empty()){
// 	    return 1;
// 	}else{
// 	    return 0;
// 	}
// }

// int pop(stack<int>& s){
// 	// Your code goes here
// 	int ans = s.top();
// 	s.pop();
// 	return ans;
// }

// int getMin(stack<int>& s){
// 	// Your code goes here
// 	int ans = 1000000;
// 	stack<int> temp;
// 	while(!s.empty()){
// 	    if(s.top() <= ans){
// 	        ans = s.top();
// 	    }
// 	    temp.push(s.top());
// 	    s.pop();
// 	}
	
// 	while(!temp.empty()){
// 	    s.push(temp.top());
// 	    temp.pop();
// 	}
	
// 	return ans;
// }