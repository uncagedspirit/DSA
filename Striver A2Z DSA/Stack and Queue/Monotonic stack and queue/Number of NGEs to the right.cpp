/*
Problem statement :
You are given an array 'arr' of length N.
GIven Q queries, for each query, an index is given (0-based indexing) 
Answer to each query is the number of the strictly greater elements to the right of the given index element.
You must return an answer array of length M where answer[i] is the answer to the i th query.

Sample Input 1:
1 3 6 5 8 9 13 4
0 1 5

Sample output 1:
7 6 1
*/

/*
Approach 1: brute force approach

In the first apporach, we will simply iterate the array of queries and for each query index, 
we will be iterating the array of given numbers and compare all the numbers on the right to the number at the query index.
If the number to the right is greater, then we will increase the count and for each queury, 
we will find out the number of greater elements on the right.
*/

//code for brute force approach :

vector<int> countGreater(vector<int>&arr, vector<int>&query) {
	int n = arr.size(), q = query.size();

	vector<int> answer(q, 0);

	for (int i = 0; i < q; i++) {
		int queryIndex = query[i];
    
		for (int j = queryIndex + 1; j < n; j++) {
			if (arr[j] > arr[queryIndex]) {
				answer[i]++;
			}
		}
	}
	return answer;
}

//time complexity : O(N*Q)
//space complexity : O(1)

/*
approach 2:


*/
