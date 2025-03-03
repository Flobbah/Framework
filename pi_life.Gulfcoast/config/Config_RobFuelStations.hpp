/*
    Author: Deathman
	Edit: Flobbah
    File: Config_RobFuelStations.hpp

    Description: Hier kannst du alles nötige Einstellen
*/
#define false 0
#define true 1
class TankeRob_Master {
    DE100_Notifiactionssytsem = false; //Only switch to True if you have the DE100_Notifiactionssytsem

    Max_Money_Rob = 20000; //How much the player should get
    Max_Money_Rob_Random = 10000; //How much the player should get in addition (RANDOM!!)

    FailText_1 = "STR_FailText_1"; //Text if you play as a Cop or Medic
    FailText_2 = "STR_FailText_2"; //Text when the server has just restarted
    FailText_3 = "STR_FailText_3"; //Text when the player should come back for the raid
    FailText_4 = "STR_FailText_4"; //Text if you are not allowed to rob the straight
    FailText_5 = "STR_FailText_5"; //Text when you are still in the vehicle
    FailText_6 = "STR_FailText_6"; //Text if you don't have a weapon with you
    FailText_7 = "STR_FailText_7"; //Text when not in the Gold Depot
    FailText_8 = "STR_FailText_8"; //Cashier triggers alarm
    FailText_9 = "STR_FailText_9"; //Text if you don't have a weapon with you

    Max_Distance = 5; //How high the distance to the victim should be
    Max_Distance_Text = "STR_Max_Distance_Text"; //Text for the maximum distance

    Max_Distance_Shop = 10.5; //How high the distance should be when the raid is in full swing
    Max_Distance_Shop_Text = "STR_Max_Distance_Shop_Text"; //Text if you move too far away

    Max_Police = 0; //How many police officers must be on duty
    Message_To_Police = "STR_Message_To_Police"; //Text to the police
    PoliceText_Fail = "STR_PoliceText_Fail"; //Text if there are not enough police forces

    ProgressBarText = "STR_ProgressBarText"; //What should be in the ProgressBar when the robbery starts (ATTENTION DO NOT REMOVE THIS (1%1)
    Stay_DistanceText = "STR_Stay_DistanceText";  //What should be in the ProgressBar when the robbery is in progress (ATTENTION DO NOT REMOVE THIS (%1%2)

    CreatMarkerName = "Marker200"; //Marker name that is created
    MarkerColor = "ColorRed"; //What color it should be
    MarkerText = "STR_MarkerText"; //Wie der Marker Text sein soll
    MarkerType = "mil_warning"; //How the marker text should be

    Rob_Finish = "STR_Rob_Finish"; //Text if the robbery was successful

    ATMuse = 120; //How many seconds he should wait until he is allowed to use an ATM
    RoberDelay = 900; //As the interval of seconds between the raids is 15 min = 900 sec.
};