# AlgorithmSolving

[LeetCode](https://leetcode.com/)에 있는 알고리즘 문제를 풀고 깃헙에 이력을 남기는 프로젝트 입니다.

### 1. Two Sum

[문제 설명](https://leetcode.com/problems/two-sum/description/)

##### 이두희

![KakaoTalk_Photo_2018-09-18-06-25-40](leetCode/1.%20Two%20Sum/resource/KakaoTalk_Photo_2018-09-18-06-25-40.jpeg)

##### 곽도영

![KakaoTalk_Photo_2018-09-18-06-25-57](leetCode/1.%20Two%20Sum/resource/KakaoTalk_Photo_2018-09-18-06-25-57.jpeg)

### 2. Add Two Numbers

[문제 설명](https://leetcode.com/problems/add-two-numbers/description/)


##### 이두희

![KakaoTalk_Photo_2018-09-18-06-25-26](leetCode/2.%20Add%20Two%20Numbers/resource/KakaoTalk_Photo_2018-09-18-06-25-26.png)

##### 곽도영

![KakaoTalk_Photo_2018-09-18-06-25-05](leetCode/2.%20Add%20Two%20Numbers/resource/KakaoTalk_Photo_2018-09-18-06-25-05.png)

### 3. Coin Change 2

[문제 설명](https://leetcode.com/problems/coin-change-2/description/)

##### 이두희

DFS와 Memoization을 활용해 풀었음.
먼저 동전을 소팅해서 큰순에서 작은순으로 정렬하고, 큰 동전부터 amount를 뺄셈 해 가면서 DFS 기법을 적용했다.
Memoization은 <이전에 뺀 동전, 현재 amount> 로 저장해 불러들었다.

![coint_change2_duhee](leetCode/3.%20Coin%20Change%202/resource/duhee.png)

### 4. Summary Ranges

[문제 설명](https://leetcode.com/problems/summary-ranges/)

##### 이두희

단순한 문제라서 딱히 방법론이 없음.

C++ : INT_MAX 를 + 연산으로 string에 넣으니 알수없는 런타임 에러가 발생함, string.append() 를 이용하는게 안전해 보인다.

![summaryRangesDuhee](leetCode/4.%20Summary%20Ranges/resource/duhee.png)

### 5. Construct-binary-tree-from-inorder-and-postorder-traversal

[문제 설명](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)

##### 이두희

postorder가 서브트리의 루트노드가 맨 나중에 나온다는 점을 이용해서 inorder에서 좌우 서브트리를 찾을 수 있음을 이용해서 재귀로 해결.

![ConstructTree Duhee](leetCode/5.%20Construct%20Binary%20Tree%20from%20order/resource/duhee.png)

### 6. Jump Game

[문제 설명](https://leetcode.com/problems/jump-game/)

##### 이두희

0 이전의 값들이 멀어질수록 1, 2, 3, 4, ... 이하인 경우이면 false

![JumpGame Duhee](leetCode/6.%20Jump%20Game/resource/duhee.png)

### 7. 01 Matrix

[문제 설명](https://leetcode.com/problems/01-matrix/)

##### 이두희

0부터 BFS 방식을 이용해 사방으로 값을 늘려감. 

![01MatrixDuhee](leetCode/7.%2001%20Matrix/resource/duhee.png)

### 8. Next Permutation

##### 이두희

[문제 설명](https://leetcode.com/problems/next-permutation/)

gcc에서 구현한 next permutation 알고리즘 설계 방법을 참고해서 만듦. 도중에 double free or double free or corruption (out) 에러가 발생했는데 이는 배열 사이즈가 1인 경우에 일어나는 오류였음. 예외 조건 판단 코드를 추가후 해결.

![NextPermutationDuhee](leetCode/8.%20Next%20Permutation/resource/duhee.png)
