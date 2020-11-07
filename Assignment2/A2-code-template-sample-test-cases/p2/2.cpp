#include <iostream>
#include <limits>

using namespace std;

const int X = 0;
const int Y = 1;

const int MAXGEOM = 20;

struct AABB {
  double min[2];  // min[0] = xmin, min[1] = ymin
  double max[2];  // max[0] = xmax, max[1] = ymax

  // functions

  // Read a point set from user input and calculates AABB
void ReadPointSet() {
    int n;
    double x, y;

    cin >> n;
    min[X] = min[Y] = numeric_limits<double>::max();
    max[X] = max[Y] = numeric_limits<double>::lowest();
    for (int i = 0; i < n; ++i) {
      cin >> x >> y;
      if (x < min[X]) min[X] = x;
      if (x > max[X]) max[X] = x;
      if (y < min[Y]) min[Y] = y;
      if (y > max[Y]) max[Y] = y;
    }
}

  // Read a rectangle from user input and calculates AABB
  void ReadRectangle() {
    // --- YOUR CODE HERE (Task 1) ---
      double x,y,width,height;
      cin >> x >> y>> width >> height;

      min[X] = min[Y] = numeric_limits<double>::max();
      max[X] = max[Y] = numeric_limits<double>::lowest();
      if (x-width/2 < min[X]) min[X] = x-width/2;
      if (x+width/2 > max[X]) max[X] = x+width/2;
      if (y-height/2 < min[Y]) min[Y] = y-height/2;
      if (y+height/2 > max[Y]) max[Y] = y+height/2;

  }

  // Read a circle from user input and calculates AABB
  void ReadCircle() {
    // --- YOUR CODE HERE (Task 1) ---
    double x,y,radius;
    cin>> x >> y >> radius;
    min[X] = min[Y] = numeric_limits<double>::max();
    max[X] = max[Y] = numeric_limits<double>::lowest();
    if (x-radius < min[X]) min[X] = x-radius;
    if (x+radius > max[X]) max[X] = x+radius;
    if (y-radius < min[Y]) min[Y] = y-radius;
    if (y+radius > max[Y]) max[Y] = y+radius;
  }

};

// return true if two AABBs overlaps
//        false otherwise
bool IsOverlap(AABB p, AABB q) {
  // --- YOUR CODE HERE (Task 3) ---
  if((p.min[0]<=q.min[0]&&q.min[0]<=p.max[0])||(p.min[0]<=q.max[0])&&(q.max[0]<=p.max[0])){ // Conditions of overlap

	  if((p.min[1]<=q.min[1])&&(q.min[1]<=p.max[1])||(p.min[1]<=q.max[1])&&(q.max[1]<=p.max[1])){
		  return true;
	  }
  }
  if((q.min[0]<=p.min[0]&&p.min[0]<=q.max[0])||(q.min[0]<=p.max[0])&&(p.max[0]<=q.max[0])){
	  
	  if((q.min[1]<=p.min[1])&&(p.min[1]<=q.max[1])||(q.min[1]<=p.max[1])&&(p.max[1]<=q.max[1])){
		  return true;
	  }
  }
  return false;
}


int main()
{
  char type;

  int overlap[MAXGEOM] = {0};//array stores whether AABB is isolated.


  AABB boxes[MAXGEOM];

  AABB res; // input AAAB and result AABB
  // initialize bounds of result AABB
  res.min[X] = res.min[Y] = numeric_limits<double>::max();
  res.max[X] = res.max[Y] = numeric_limits<double>::lowest();

  // read geometry type and dispatch to the corresponding
  // AABB read geomety functions to read from user input handle
  // and compute AABB
  // store all AABBs in the array "boxes"
  int numBoxes = 0;

  cin >> type;
  while (type != '#') {
    switch (type) {
      case 'R':
        boxes[numBoxes++].ReadRectangle();
        break;
      case 'C':
        boxes[numBoxes++].ReadCircle();
        break;
      case 'P':
        boxes[numBoxes++].ReadPointSet();
        break;
      default:
        break;
    }
    cin >> type;
  }

  // display AABBs for input geometries by going through the array "boxes"
  for (int i = 0; i < numBoxes; i++) {
    // --- YOUR CODE HERE (Task 2) ---
    cout<<"AABB 0"<<i<<": "<<boxes[i].min[0]<<" "<<boxes[i].max[0]<<" "<<boxes[i].min[1]<<" "<<boxes[i].max[1]<<endl;
  }

  cout << "Isolated AABBs:\n";

  // for each AABB, if it does not overlap with any other AABBs, display its ID
  // --- YOUR CODE HERE (Task 4) ---
  for(int i = 0; i<numBoxes;i++){
		  for(int j = i + 1; j < numBoxes;j++){
			  if(IsOverlap(boxes[i],boxes[j])){
				  overlap[i] = 1; //if overlap, then set overlap[i] to 1
				  overlap[j] = 1;
			  }
		  }
  }
  for(int i = 0; i<numBoxes;i++){
	  if(overlap[i] == 0){
		  cout << "0" << i << endl;
	  }
  }
  return 0;
}

