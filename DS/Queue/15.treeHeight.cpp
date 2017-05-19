/*

Create a queue.
Push root into the queue.
height = 0
Loop
	nodeCount = size of queue
        
        // If number of nodes at this level is 0, return height
	if nodeCount is 0
		return Height;
	else
		increase Height

        // Remove nodes of this level and add nodes of 
        // next level
	while (nodeCount > 0)
		pop node from front
		push its children to queue
		decrease nodeCount
       // At this point, queue has nodes of next level
       
 */
 
 int treeHeight(Node *root) {
 	if (root == NULL) return 0;
 	
 	queue<Node*> nodeQue;
 	nodeQue.push(root);
 	int height = 0;
 	while (!nodeQue.empty()) {
 		int cnt = nodeQue.size();
 		++height;
 		while (cnt--) {
 			root = nodeQue.front();
 			nodeQue.pop();
 			if (root->left  != NULL) nodeQue.push(root->left);
 			if (root->right != NULL) nodeQue.push(root->right);
		 }
	 }
	 return height;
 }
