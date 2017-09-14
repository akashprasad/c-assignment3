# c-assignment3
// question 63
This version of Firefox is no longer supported. Please upgrade to asupported browser. Dismiss
1 of 413
 
Fwd: comp ass
Inbox
	x
Prem Nigam Kar <premnigam.kar@niser.ac.in>
	
Attachments8:59 PM (2 hours ago)
	
to me
---------- Forwarded message ----------
From: "Prem Nigam Kar" <premnigam.kar@niser.ac.in>
Date: 14 Sep 2017 16:23
Subject: comp ass
To: "Prem Nigam Kar" <premnigam.kar@niser.ac.in>
Cc:
71 Attachments
	
Click here to Reply or Forward
Using 0.27 GB
Manage
Program Policies
Powered by
Google
Last account activity: 3 minutes ago
Details
	
	
	Prem Nigam Kar
premnigam.kar@niser.ac.in
Show details

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,c=0,d,i=0;
	cout<<" Enter the octal number ";
	cin>>d;
	a=d;
	while(a>0)
	{b=a%10;
	a=a/10;
	c=c+pow(8,i)*b;
	i++;
	}
int dec,bin=0;
i=1;
    dec=c;
    while(dec!=0)
    {
    	a=dec%2;
    	dec=dec/2;
    	bin=bin+a*i;
    	i=i*10;
    }
    cout<<"\n The binary equivalent is "<<bin;
    
	return 0;
}
