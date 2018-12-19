#include<iostream>
#include<string.h>
using namespace std;
double calories;
double calorie1;
int select;
int select1;
int select3;
double Protein,Carbohydrates,fiber,TotalFat,SaturatedFat,Cholesterol,Sodium,fat,Sugars,PolyunsaturatedFat;
double MonounsaturatedFat,Potassium,DietaryFiber,Trans;
int choice1;
int choice;
class male ;                                              
class female;
class calculator
{
	protected:
		int age,input;
		float height,weight,BMR;
		string name;
		char gender[10];
		public:
		calculator()
        {
        	
        }
		
		void getUserData()
		{
			cout<<"enter your name:"<<endl;
			getline( cin, name);
			cout<<"enter you age:"<<endl;
			cin>>age;
			cout<<"height"<<endl;
			cin>>height;
			cout<<"weight"<<endl;
			cin>>weight;
			cout<<"choose your gender:"<<endl;
			cout<<"1.male"<<endl;
			cout<<"2.female"<<endl;
			cin>>input;
			switch(input)
			{
				case 1:
					strcpy(gender,"male");
					cout<<"select the type of activity you perform:"<<endl;
		cout<<"1.Basal Metabolic Rate"<<endl;
		
		cout<<"2.Sedentary-little or no exercise"<<endl;
		cout<<"3.Lightly Active-exercise/sports 1-3 times/week"<<endl;
		cout<<"4.Moderately Active-exercise/sports 3-5 times/week"<<endl;
		cout<<"5.Very Active-hard exercise/sports 6-8times/week"<<endl;
		cout<<"6.Extra Active-very hard exercise/sports or physical job"<<endl;
		cin>>choice1;
		switch(choice1)
		{
			case 1:
			{
				
		        cout<<"BMR = "<<66 + (6.23 * weight) + (12.7 *height) - (6.8 *age);
	         	break;
			}
			case 2:
			{
				BMR= 666 + (6.23 * weight) + (12.7 *height) - (6.8 *age);
			calorie1=BMR*1.2;
				cout<<"calorie calculation:"<<calorie1<<endl;
				cout<<"you need  "<<calorie1<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<calorie1<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<calorie1<<"calories   you will gain your weight"<<endl;
				break;		
			}    
			case 3:
			{
				BMR= 666 + (6.23 * weight) + (12.7 *height) - (6.8 *age);
				cout<<"calorie calculation:"<<BMR*1.375<<endl;
				cout<<"you need  "<<BMR*1.375<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.375<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.375<<"calories   you will gain your weight"<<endl;
				break;
			}
			case 4:
			{
				BMR= 666 + (6.23 * weight) + (12.7 *height) - (6.8 *age);
				cout<<"calorie calculation:"<<BMR*1.55<<endl;
				cout<<"you need  "<<BMR*1.55<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.55<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.55<<"calories   you will gain your weight"<<endl;
				break;
			}
			case 5:
			{
				BMR= 666 + (6.23 * weight) + (12.7 *height) - (6.8 *age);
				cout<<"calorie calculation:"<<BMR*1.725<<endl;
				cout<<"you need  "<<BMR*1.725<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.725<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.725<<"calories   you will gain your weight"<<endl;
				break;
			}
			case 6:
			{
					BMR= 666 + (6.23 * weight) + (12.7 *height) - (6.8 *age);
				cout<<"calorie calculation:"<<BMR*1.9<<endl;
				cout<<"you need  "<<BMR*1.9<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.9<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.9<<"calories   you will gain your weight"<<endl;
				break;
			}
		}
					
					
					
					break;
				case 2:
				    strcpy(gender,"female");
				   // female f1();
				//	f1.advice2();
				cout<<"select the type of activity you perform:"<<endl;
		cout<<"1.Basal Metabolic Rate"<<endl;
		
		cout<<"2.Sedentary-little or no exercise"<<endl;
		cout<<"3.Lightly Active-exercise/sports 1-3 times/week"<<endl;
		cout<<"4.Moderately Active-exercise/sports 3-5 times/week"<<endl;
		cout<<"5.Very Active-hard exercise/sports 6-8times/week"<<endl;
		cout<<"6.Extra Active-very hard exercise/sports or physical job"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				
		        cout<<"BMR = "<< 655 + (4.35 * weight) + (4.7 * height ) - (4.7 * age );
	         	break;
			}
			case 2:
			{
				BMR= 655 + (4.35 * weight ) + (4.7 * height ) - (4.7 * age);
				cout<<"calorie calculation:"<<BMR*1.2<<endl;
				cout<<"you need  "<<BMR*1.2<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.2<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.2<<"calories   you will gain your weight"<<endl;
				break;		
			}    
			case 3:
			{
				BMR=655 + (4.35 * weight ) + (4.7 * height) - (4.7 * age);
				cout<<"calorie calculation:"<<BMR*1.375<<endl;
				cout<<"you need  "<<BMR*1.375<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.375<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.375<<"calories   you will gain your weight"<<endl;
				break;
			}
			case 4:
			{
				BMR= 655 + (4.35 * weight ) + (4.7 * height) - (4.7 * age );
				cout<<"calorie calculation:"<<BMR*1.55<<endl;
				cout<<"you need  "<<BMR*1.55<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.55<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.55<<"calories   you will gain your weight"<<endl;
				break;
			}
			case 5:
			{
				BMR= 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
				cout<<"calorie calculation:"<<BMR*1.725<<endl;
				cout<<"you need  "<<BMR*1.725<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.725<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.725<<"calories   you will gain your weight"<<endl;
				break;
			}
			case 6:
			{
					BMR= 655 + (4.35 * weight ) + (4.7 * height ) - (4.7 * age );
				cout<<"calorie calculation:"<<BMR*1.9<<endl;
				cout<<"you need  "<<BMR*1.9<<"calories   daily to maintain your current weight"<<endl;
		        cout<<"if u take less calories than "<<BMR*1.9<<"calories   you will loss your weight"<<endl;
				cout<<"and if you take more calories than"<<BMR*1.9<<"calories   you will gain your weight"<<endl;
				break;
			}																									            
		}
				    break;
				
			}
			
			
		}
			void showUserData(){
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Gender:"<<gender<<endl;  
	        cout<<"Height:"<<height<<endl;
	        cout<<"weight:"<<weight<<endl; 
	       // cout<<"Your BMR is "<<std::setprecision(4)<<BMI<<" kg/m^2"<<endl;
		}
};
class meal : public calculator
{
public:
void breakfast()
{
	

cout<<"enter what u hv taken in ur breakfast  today:"<<endl;
cout<<"1.parantha(2 pieces)"<<endl;
cout<<"2.spinach and cheese omlet"<<endl;
cout<<"3.summer berry muffins"<<endl;
cout<<"4.berry flexseed smoothie"<<endl;
cout<<"5.cinnamon risin bread"<<endl;
cout<<"6.shake"<<endl;
cin>>choice;
switch(choice)
{
	case 2:
		{
			calories=calories+235 ;
			Protein= Protein+20;//g
			Carbohydrates=Carbohydrates+4 ;//g
			fiber=fiber+ 1 ;//g fiber
			TotalFat=TotalFat+15;//g
			SaturatedFat=SaturatedFat+6 ;//g 
			Cholesterol=Cholesterol+ 228 ;//mg
			Sodium=Sodium+471 ;//mg*/
			break;
		}
	case 4:
	    {
		    calories=calories+200 ;
	     Protein=Protein+5 ;//g
			Carbohydrates=Carbohydrates+36 ;//g 
			fiber=fiber+7 ;//g
			TotalFat=TotalFat+5 ;//g
		    SaturatedFat =SaturatedFat+0 ;//g 
			Cholesterol=Cholesterol+1 ;//mg
			Sodium=Sodium+33 ;//mg */
		    break;
		 }
	case 5:
	    {
	    	calories=calories+198 ;
			 fat =fat+3;//g
			SaturatedFat=SaturatedFat+ 1;//g
			Cholesterol =	Cholesterol+19;//mg
			Sodium =Sodium+234;//mg
		    Carbohydrates= Carbohydrates+38;//g
			fiber=fiber+ 6;//g
		    Sugars= Sugars+8;//g
			Protein =Protein+7;//g
					// Good source of iron, magnesium, niacin, phosphorus, riboflavin, thiamine.";
     	     break;
		 }
	case 3:
	    {
	       calories=calories+98 ; 
	    
		fat= fat+2;//g 
		SaturatedFat=SaturatedFat+ 0;//g
		Cholesterol =Cholesterol+24;//mg 
		Sodium =Sodium+162;//mg
		Carbohydrates= Carbohydrates+18;//g
		fiber=fiber+ 1;//g
		Sugars=Sugars+ 8;//g 
		Protein =	Protein+3;//g
		// Excellent source of phosphorus. Good source of calcium.";
	    break;
	    }
	case 1:
	    {
	    	//BMR=
				break;
					 }	
		 	 		
}}
void lunch()
{

cout<<"enter what u hv taken in your lunch"<<endl;
cout<<"1.normal thali"<<endl;
cout<<"2.chicken biryani"<<endl;
cout<<"3.rice bowl"<<endl;
cout<<"4.dosa"<<endl;
cout<<"5.chinese"<<endl;
cin>>select;
switch(select)
{
	case 1:
		{
		    calories=calories+658.4;
		//	Calories =658.4;
          TotalFat=  TotalFat+22.4 ;//g
          SaturatedFat=SaturatedFat+ 7.2 ;//g
          PolyunsaturatedFat=PolyunsaturatedFat+ 8.5 ;//g
          MonounsaturatedFat=MonounsaturatedFat+ 4.9 ;//g
            Cholesterol=Cholesterol+ 15.5 ;//mg
          Sodium = Sodium+1,314.6 ;//mg
          Potassium =Potassium+1,806.1 ;//mg
            Carbohydrates = Carbohydrates+102.3 ;//g
           DietaryFiber =DietaryFiber+20.1 ;//g
           Sugars=Sugars+ 12.9 ;//g
           Protein= Protein+20.0;//g*/
			break;
		}
	case 2:
		{
			calories=calories+274;
			//Calories=	274;
			Sodium=Sodium+	465 ;//mg 
            TotalFat= TotalFat+9 ;//g
	        Potassium=Potassium+0 ;//mg
            SaturatedFat=SaturatedFat+1 ;//g
	        Carbohydrates=Carbohydrates+24 ;//g
            PolyunsaturatedFat=PolyunsaturatedFat+0 ;//g
	        DietaryFiber=DietaryFiber+2 ;//g
            MonounsaturatedFat=MonounsaturatedFat+0;//g
          	Sugars=Sugars+4;//g
            Protein=Protein+10;//g
            Cholesterol=Cholesterol+13;//mg	 
			break;
		}
	case 3:
		{
			calories=calories+620;
			//Calories=620;
			Sodium=Sodium+2,150 ;//mg
            TotalFat=TotalFat+28 ;//g
             Potassium=Potassium+0 ;//g
            SaturatedFat=SaturatedFat+0 ;//g
        
          PolyunsaturatedFat	=PolyunsaturatedFat+0 ;//g
          DietaryFiber=DietaryFiber+6 ;//g
           MonounsaturatedFat=MonounsaturatedFat+0 ;//g
           Sugars=	Sugars+7 ;//g
          Trans= Trans+0 ;//g
         Protein=Protein+26 ;//g
         Cholesterol=Cholesterol+60 ;//mg	*/ 
			break;
		}
	case 4:
		{
			calories=calories+185;
		//	Calories=185;
			Sodium=		Sodium+285 ;//mg
			
TotalFat=TotalFat+10 ;//g
Potassium=Potassium+0;//mg
SaturatedFat=SaturatedFat+0 ;//g
Carbohydrates=Carbohydrates+0 ;//g
PolyunsaturatedFat=PolyunsaturatedFat+0;//g
DietaryFiber=DietaryFiber+0 ;//g
MonounsaturatedFat=MonounsaturatedFat+0;//g
Sugars=Sugars+0 ;//g
Trans=Trans+0 ;//g
Protein=Protein+2 ;//g
Cholesterol=Cholesterol+10 ;//mg 	
			break;
		}
	case 5:
		{
			calories=calories+214;
		//	Calories=214;
			Sodium=Sodium+528 ;//mg
TotalFat=TotalFat+7 ;//g
Potassium=Potassium+54 ;//mg
SaturatedFat=SaturatedFat+1 ;//g
Carbohydrates=Carbohydrates+33 ;//g
PolyunsaturatedFat=PolyunsaturatedFat+2;//g
DietaryFiber=DietaryFiber+2 ;//g
MonounsaturatedFat=MonounsaturatedFat+4 ;//g
Sugars=Sugars+3 ;//g
Trans=Trans+0 ;//g
Protein=Protein+4 ;//g
Cholesterol=Cholesterol+0 ;//g	 
			break;
		}			
}}
void snacks()
{

cout<<"enter what u have taken in your snacks"<<endl;
cout<<"1.tea"<<endl;
cout<<"2.patato chips(15crisps)"<<endl;
cout<<"3.pani puri(54gram)"<<endl;
cout<<"4.samosa"<<endl;
cout<<"5.chole kulche"<<endl;
cin>>select1;
switch(select1)
{
	case 1:
		{
			calories=calories+40;
			//Calories=40;
			Sodium=	Sodium+30 ;//mg
TotalFat=TotalFat+3 ;//g
Potassium=Potassium+4 ;//mg
SaturatedFat=SaturatedFat+2 ;//g
Carbohydrates= Carbohydrates+1 ;//g
PolyunsaturatedFat=PolyunsaturatedFat+0 ;//g
DietaryFiber=DietaryFiber+0 ;//g
MonounsaturatedFat= MonounsaturatedFat+1 ;//g
Sugars=Sugars+1 ;//g
Trans=Trans+0 ;//g
Protein=Protein+1 ;//g
Cholesterol=Cholesterol+15;//g	*/ 
			break;
		}
	case 2:
		{
			calories=calories+247;
		//	Calories=267;
			Sodium=	Sodium+239;//mg
TotalFat=TotalFat+24 ;//g
Potassium=Potassium+1 ;//mg
SaturatedFat=SaturatedFat+6 ;//g
Carbohydrates=Carbohydrates+1 ;//g
PolyunsaturatedFat=PolyunsaturatedFat+10 ;//g
DietaryFiber=DietaryFiber+9 ;//g
MonounsaturatedFat=MonounsaturatedFat+4 ;//g
Sugars=Sugars+1 ;//g
Protein=Protein+14 ;//g
Cholesterol=Cholesterol+247 ;//mg*/	 	
			break;
		}
	case 3:
		{
			calories=calories+270;
			//Calories=270;
			Sodium=Sodium+410 ;//mg
TotalFat=TotalFat+12 ;//g
Potassium=Potassium+0 ;//mg
SaturatedFat=SaturatedFat+0 ;//g
Carbohydrates=Carbohydrates+33 ;//g
PolyunsaturatedFat=PolyunsaturatedFat+0 ;//g
DietaryFiber=DietaryFiber+4 ;//g
MonounsaturatedFat=MonounsaturatedFat+0 ;//g
Sugars=Sugars+0 ;//g
Protein=Protein+6 ;//g
Cholesterol=Cholesterol+0 ;//mg	 */	
			break;
		}
	case 4:
		{
			calories=calories+14.86;
		//	Calories=1,486mg;
			Sodium+=1,981 ;//mg
TotalFat+=74 ;//g
Potassium+=943 ;//mg
SaturatedFat+=29 ;//g
Carbohydrates+=156 ;//g
PolyunsaturatedFat+=7 ;//g
DietaryFiber+=27 ;//g
MonounsaturatedFat+=25 ;//g	
Sugars+=8 ;//g
Protein+=53 ;//g
Cholesterol+=120 ;//mg*/	 
			break;
		}
	case 5:
		{
			calories=calories+342;
		//	Calories=342
			Sodium+=1,020 ;//mg
TotalFat+=7 ;//g
Potassium+=431 ;//mg
SaturatedFat+=1 ;//g
Carbohydrates+=57 ;//g
PolyunsaturatedFat+=2 ;//g
DietaryFiber+=5 ;//g
MonounsaturatedFat+=4 ;//g
Sugars+=6 ;//g
Protein+=14 ;//g
Cholesterol+=2 ;//mg*/	 
			break;
		}
}}
void dinner()
{

cout<<"what u have taken in your dinner:"<<endl;
cout<<"1.thali"<<endl;
cout<<"2.rajma chawal"<<endl;
cout<<"3.panner and laccha parantha"<<endl;
cout<<"4.prawn"<<endl;
cout<<"5.rice bowl"<<endl;
cin>>select3;
switch(select3)
{
	case 1:
		{
		calories=calories+658.4;
		//Calories =658.4;
     TotalFat+= 22.4 ;//g
        SaturatedFat+= 7.2 ;//g
        PolyunsaturatedFat+= 8.5 ;//g
        MonounsaturatedFat+= 4.9 ;//g
        Cholesterol+= 15.5 ;//mg
        Sodium +=1,314.6 ;//mg
        Potassium +=1,806.1 ;//mg
        Carbohydrates +=102.3 ;//g
        DietaryFiber +=20.1 ;//g;
        Sugars+= 12.9 ;//g
        Protein+=20.0;//g*/
		break;
		}
	case 2:
		{
		calories=calories+217;
	  //  Calories=217;
		Sodium=266;//mg
		
TotalFat+=8 ;//g
Potassium+=446 ;//mg
SaturatedFat+=4 ;//g
Carbohydrates+=34 ;//g
PolyunsaturatedFat+=1 ;//g
DietaryFiber+=5 ;//g
MonounsaturatedFat+=2 ;//g	
Sugars+=0 ;//g
Trans+=0 ;//g
Protein+=5 ;//g
Cholesterol+=18 ;//mg*/	 
			break;
		}
	case 3:
		{
			calories=calories+80;
		//	Calories=80;
			Sodium=+190 ;//mg
          TotalFat=+5 ;//g
Potassium+=0 ;//mg
SaturatedFat+=3 ;//g
Carbohydrates+=1 ;//g
PolyunsaturatedFat+=0; //g
DietaryFiber+=0;//g
MonounsaturatedFat+=0 ;//g
Sugars+=1 ;//g
Trans+=0 ;//g
Protein+=7 ;//g
Cholesterol+=15; //mg*/	 
			break;
		}
	case 4:
		{
			calories=calories+375;
		//	Calories=375;
			Sodium=Sodium+889;// mg
TotalFat=TotalFat+17 ;//g
Potassium=Potassium+0 ;// mg
SaturatedFat=SaturatedFat+0 ;//g
Carbohydrates=Carbohydrates+16 ;//g
PolyunsaturatedFat=PolyunsaturatedFat+0 ;//g
DietaryFiber=DietaryFiber+0 ;//g
MonounsaturatedFat=MonounsaturatedFat+0 ;//g
Sugars=Sugars+0 ;//g
Trans=Trans+0 ;//g
Protein=Protein+41 ;//g
Cholesterol=Cholesterol+299;//mg*/	 
			break;
		}
	case 5:
		{
			calories=calories+620;
			//Calories=620;
			Sodium=Sodium+2,150 ;//mg
            TotalFat= TotalFat+28 ;//g
             Potassium=Potassium+0 ;//mg
            SaturatedFat=SaturatedFat+0 ;//g
           Carbohydrates=Carbohydrates+67 ;//g
          PolyunsaturatedFat	= PolyunsaturatedFat+0 ;//g
          DietaryFiber=DietaryFiber+6 ;//g
           MonounsaturatedFat= MonounsaturatedFat+0 ;//g
           Sugars=	Sugars+7 ;//g
          Trans= Trans+0 ;//g
         Protein= Protein+26 ;//g
         Cholesterol=Cholesterol+60 ;//mg	 */
			break;
		}	
}}};	
	
int main()
{
	meal m1;
	m1.getUserData();
	m1.breakfast();
	m1.lunch();
	m1.snacks();
	m1.dinner();
	cout<<"total calories"<<" "<<calories<<endl;
	cout<<"nutrition chart:"<<endl;
	cout<< "Protein"<<" "<<Protein<<endl;
	cout<<"Carbohydrates"<<" "<<Carbohydrates<<endl;
	cout<<"fiber"<<" "<<fiber<<endl;
	cout<<"TotalFat"<<" "<<TotalFat<<endl;
	cout<<"SaturatedFat"<<" "<<SaturatedFat<<endl;
	cout<<"Cholesterol"<<" "<<Cholesterol<<endl;
	cout<<"Sodium"<<" "<<Sodium<<endl;
	cout<<"fat"<<" "<<fat<<endl;
	cout<<"Sugars"<<" "<<Sugars<<endl;
	cout<<"PolyunsaturatedFat"<<" "<<PolyunsaturatedFat<<endl;
    cout<<"MonounsaturatedFat"<<" "<<MonounsaturatedFat<<endl;
	cout<<"Potassium"<<" "<<Potassium<<endl;
	cout<<"DietaryFiber"<<" "<<DietaryFiber<<endl,
	cout<<"Trans"<<" "<<Trans<<endl;
	if (calorie1==calories)
	{
		cout<<"you are maintaining ur current weight"<<endl;
	}
	else if(calorie1<calories)
	{
		cout<<"your weight will increase if u daily intake these type of food";
	}
	else
	{
		cout<<"you will loose your weight if u take this type of ffod daily";
	}

		}		
