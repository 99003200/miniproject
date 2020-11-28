#include<stdio.h>
#include<string.h>
#include "patientanalysis.h"
int main()
{
	char a[10];
	int patient=0;
	printf("ENTER DISEASE NAME AMONG THESE \n fever \n malaria \n covid \n diarrhea \n dengue \n tuberculosis \n arthritis \n mouth ulcer \n polio \n ");
	printf("*******ENTER DISEASE NAME******* \n ");
	scanf("%s",a);
	patient=patientanalysis(a);
	if(patient==1){	
		printf("SYMPTOMS:: \n ");
		printf("sweating \n shivering \n headache \n muscle aches \n loss of appetite \n dehydration \n general weakness \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("paracetamol \n ketoprofen \n ibuprofen \n aspirin \n ");
		printf("INHOME REMEDIES ARE: \n ");
		printf("Take a bath in lukewarm water & place cold wash cloths on your forehead \n ");
	}
	if(patient==2){
		printf("SYMPTOMS:: \n ");
		printf("Fever \n Chills \n Headache \n Nausea and vomiting \n Muscle pain and fatigue \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("Combination of atovaquone and proguanil (Malarone) \n Quinine sulfate (Qualaquin) with doxycycline (Vibramycin, Monodox, others) \n Mefloquine \n Primaquine phosphate \n ");
		printf("INHOME REMEDIES ARE: \n ");
		printf("Cinnamon \n Turmeric \n Orange juice \n Ginger \n Apple cider vinegar \n");
	}
	if(patient==3){
		printf("SYMPTOMS:: \n ");
		printf("Fever or chills \n Cough \n Shortness of breath or difficulty breathing \n Fatigue \n Muscle or body aches \n Headache \n New loss of taste or smell \n Sore throat \n Congestion or runny nose \n Nausea or vomiting \n Diarrhea \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("Hydroxychloroquine \n Methylprednisolone and Dexamethasone \n ");
		printf("INHOME REMEDIES ARE: \n");
		printf("Maintain a daily routine, including showering and getting dressed \n Take breaks from COVID-19 news, including social media \n Eat healthy meals and stay hydrated \n ");
	}
	if(patient==4){
		printf("SYMPTOMS:: \n ");
		printf("Frequent loose, watery stools \n Abdominal cramps \n Abdominal pain \n Fever \n Bleeding \n Lightheadedness or dizziness from dehydration \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("Imodium (loperamide) and Pepto-Bismol or Kaopectate \n ");
		printf("INHOME REMEDIES ARE: \n ");
		printf("foods rich in pectin \n such as fruit foods high in potassium \n such as potatoes and sweet potatoes foods with electrolytes \n such as miso soup and sports drinks cooked \n soft vegetables adequate amounts of protein \n");
	}
	if(patient==5){
		printf("SYMPTOMS:: \n ");
		printf("Sudden high fever \n Severe headaches Pain behind the eyes \n Severe joint and muscle pain \n Fatigue NauseaVomiting \n Skin rash \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("Acetaminophen \n  aspirin \n ibuprofen \n ");
		printf("INHOME REMEDIES ARE: \n ");
		printf("Giloy \n Methi Leaves \n Papaya Leaves \n Turmeric \n ");
	}
	if(patient==6){
		printf("SYMPTOMS:: \n ");
		printf("Coughing that lasts three or more weeks \n Coughing up blood \n Chest pain \n pain with breathing or coughing \n Unintentional weight loss \n Fatigue \n Fever \n Night sweats \n Chills \n Loss of appetite \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n");
		printf("kanamycin \n levofloxacin \n cycloserine \n ethionamide \n pyrazinamide \n ethambutol \n ");
		printf("INHOME REMEDIES ARE: \n ");
		printf("pineapples \n garlic \n Milk \n mint leaves \n ");
	}
	if(patient==7){
		printf("SYMPTOMS:: \n ");
		printf("Pain \n Stiffness \n Swelling \n Redness \n Decreased range of motion \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("Advil \n Motrin IB \n ");
		printf("INHOME REMEDIES ARE: \n ");
		printf(" Aquatic exercises \n Weight loss \n Yoga \n Hot and cold therapy \n ");
	}
	if(patient==8){
		printf("SYMPTOMS:: \n ");
		printf("one or more painful sores on part of the skin lining the mouth \n swollen skin around the sores \n problems with chewing or tooth brushing because of the tenderness \n irritation of the sores by salty, spicy or sour food \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("using a rinse of saltwater and baking soda \n placing milk of magnesia on the mouth ulcer \n covering mouth ulcers with baking soda paste \n using over-the-counter benzocaine (topical anesthetic) products like Orajel or Anbesol \n applying ice to canker sores \n ");
		printf("INHOME REMEDIES ARE: \n");
		printf(" Honey \n Baking Soda Paste \n Coconut Oil \n Orange Juice \n Coconut Milk \n ");
	}
	if(patient==9){
		printf("SYMPTOMS:: \n ");
		printf("Fever \n Sore throat \n Headache \n Vomiting \n Fatigue \n Back pain or stiffness \n Neck pain or stiffness \n Pain or stiffness in the arms or legs \n ");
		printf("***MEDICINE SUGGESTED IF AGE IS GREATER THAN 10 AND BELOW 50*** \n ");
		printf("Ibuprofen \n Diclofenac \n Acetaminofen \n ");
		printf("INHOME REMEDIES ARE: \n ");
		printf("Professional Massage \n Hydrotherapy \n Healthy Diet \n ");
	}
	
	
	
	
	
	
	
	return 0;
}
