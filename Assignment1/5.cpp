#include<iostream>
#include <limits>
using namespace std;
void RectangleBB(double &xmin, double &xmax, double &ymin, double &ymax){
	//construct a temp var and compare with min and max
	//x y width height
	double x,y,width,height;
	cin>>x>>y>>width>>height;
	if ((x-width/2) <= xmin) xmin=x-width/2;
        if ((x+width/2) >= xmax) xmax=x+width/2;
	if ((y-height/2) <= ymin) ymin=y-height/2;
        if ((y+height/2) >= ymax) ymax=y+height/2;

}
void CircleBB(double &xmin, double &xmax, double &ymin, double &ymax){
        double x,y,radius;
        cin>>x>>y>>radius;
        if ((x-radius) <= xmin) xmin=x-radius;
        if ((x+radius) >= xmax) xmax=x+radius;
        if ((y-radius) <= ymin) ymin=y-radius;
        if ((y+radius) >= ymax) ymax=y+radius;

}
void PointSetBB(double &xmin, double &xmax, double &ymin, double &ymax){
	double i,n,x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>y;
	        if (x <= xmin) xmin=x;
		if (x >= xmax) xmax=x;
	        if (y <= ymin) ymin=y;
		if (y >= ymax) ymax=y;
	//	cout<<x<<y;
	}
}

int main(){
	double xmin,xmax,ymin,ymax;
	xmin=numeric_limits<double>::max();
	ymin=xmin;
	xmax=numeric_limits<double>::lowest();
	ymax=xmax;
	char input;
	cin>>input;
	while(input != '#'){
	//when P call Points
	if(input=='R') RectangleBB(xmin,xmax,ymin,ymax);
	//when R call Rectangle 
	else if(input=='C') CircleBB(xmin,xmax,ymin,ymax);
	//when C call Circle
        else if(input=='P') PointSetBB(xmin,xmax,ymin,ymax);
	cin>>input;
	}
	cout<<(xmin+xmax)/2<<" "<<(ymin+ymax)/2<<" "<<xmax-xmin<<" "<<ymax-ymin<<endl;
}
