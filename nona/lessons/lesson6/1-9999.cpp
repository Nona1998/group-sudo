#include <iostream>
#include <string>
using namespace std;
int main () {
	int x,a,b,c,d;
	cout<<"Enter number from 1 to 9999: ";
	cin>>x;
    if (x >= 1 && x <= 9999) {
		if (x>=1 && x<=9) {
   	    	d = x;         
   		}
   		if (x >= 10 && x <= 99) {
   	    	d = x%10;
	    	c = x/10;
   		}
   		if (x >= 100 && x <= 999) {
            d = x%10;
            c = x/10%10;
            b = x/100;
   		}
   		if (x >= 1000 && x <= 9999) {
			d = x%10;
			c = x/10%10;
			b = x/100%10;
			a = x/1000;
   		}
		switch (a) {
			case 1: cout<<"hazar ";
				break;
			case 2: cout<<"erku hazar ";
		       	break;
	   		case 3: cout<<"ereq hazar ";
		    	break;  
	   		case 4: cout<<"chors hazar ";
		   		break;
			case 5: cout<<"hing hazar ";
		    	break;
			case 6: cout<<"vec hazar ";
		    	break;
			case 7: cout<<"yot hazar ";
		    	break;
			case 8: cout<<"ut hazar ";
		    	break;
			case 9: cout<<"iny hazar ";
		    	break;
		}	
		switch (b) {
	   		case 1: cout<<"haryur ";
		      break;
		   	case 2: cout<<"erku haryur ";
		      break;
			case 3: cout<<"ereq haryur ";
		      break;  
		    case 4: cout<<"chors haryur ";
		      break;
		    case 5: cout<<"hing haryur ";
		      break;
		    case 6: cout<<"vec haryur ";
		      break;
		    case 7: cout<<"yot haryur ";
		      break;
		   	case 8: cout<<"ut haryur ";
		      break;
		   	case 9: cout<<"iny  haryur ";
		      break;
		}	
		switch (c) {
	  		case 1: cout<<"tasn";
		      	break;
		   	case 2: cout<<"qsan";
		      	break;
			case 3: cout<<"eresun";
		      	break;  
		    case 4: cout<<"qarasun";
		      	break;
		    case 5: cout<<"hisun";
		      	break;
		    case 6: cout<<"vatsun";
		      	break;
		    case 7: cout<<"yotanasun";
		      	break;
		   	case 8: cout<<"utsun";
		      	break;
		   	case 9: cout<<"innsun";
		      	break;
		}	
		switch (d) {
	   		case 1: cout<<"mek";
		      	break;
		   	case 2: cout<<"erku";
		      	break;
			case 3: cout<<"ereq";
		      	break;  
		    case 4: cout<<"chors";
		      	break;
		    case 5: cout<<"hing";
		        break;
		    case 6: cout<<"vec";
		        break;
		    case 7: cout<<"yot";
		        break;
		   	case 8: cout<<"ut";
		        break;
		   	case 9: cout<<"iny";
				break;
		}
    } else {
       cout <<"Error: " << x << " is not from 1-9999.";
    }
    
	cout<<endl;
	return 0;
}
