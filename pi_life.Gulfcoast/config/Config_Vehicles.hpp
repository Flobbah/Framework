class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "Alessio206", "" },
			{ "Alessio190", "" },
			{ "AlessioVIR", "" },
			{ "AlessioTouareg", "" },
			{ "AlessioMGA", "" },
			{ "AlessioQuadrifoglio", "" },
			{ "AlessioR8", "" },
			{ "AlessioRS4", "" },
			{ "AlessioRS5", "" },
			{ "AlessioBM4", "" },
			{ "AlessioM5", "" },
			{ "AlessioM8", "" },
			{ "Alessio458", "" },
			{ "AlessioGTB", "" },
			{ "AlessioSuperfast", "" },
			{ "AlessioLaFerrari", "" },
			{ "AlessioMustang", "" },
			{ "AlessioAgera", "" },
			{ "AlessioAventador", "" },
			{ "AlessioGallardo", "" },
			{ "AlessioC63", "" },
			{ "AlessioC63N", "" },
			{ "AlessioIXMR", "" },
			{ "AlessioGTR", "" },
			{ "AlessioHuayra", "" },
			{ "AlessioCayman", "" },
			{ "Alessio918", "" },
			{ "AlessioPanamera", "" },
			{ "AlessioWRX", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "B_Truck_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "license_civ_pilot";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "C_Plane_Civil_01_F", "" } //Apex DLC
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class reb_car {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "I_Truck_02_medical_F", "" },
            { "O_Truck_03_medical_F", "" },
            { "B_Truck_01_medical_F", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
			{ "Alessio206COP", "" },
			{ "AlessioVIRCOP", "" },
			{ "AlessioRS4COP", "" },
			{ "AlessioM4COP", "" },
			{ "AlessioMustangCOP", "" },
			{ "AlessioC63COP", "" },
			{ "AlessioIXMRCOP", "" },
			{ "AlessioGTRCOP", "" },
			{ "AlessioWRXCOP", "" },
			{ "AlessioTouaregCOP", "" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_SDV_01_F", "" }
        };
    };
};

//Farben
class Colors {
	textures[] = {
		{ "Black", "civ", {
			"#(argb,8,8,3)color(0,0,0,1.0,CO)"
		} },
		{ "White", "civ", {
			"#(argb,8,8,3)color(1,1,1,1.0,CO)"
		} },
		{ "Grey", "civ", {
			"#(argb,8,8,3)color(0.521569,0.521569,0.521569,1.0,CO)"
		} },
		{ "Grey blue", "civ", {
			"#(argb,8,8,3)color(0.537255,0.647059,0.811765,1.0,CO)"
		} },
		{ "Darkblue Grey", "civ", {
			"#(argb,8,8,3)color(0.278431,0.427451,0.713725,1.0,CO)"
		} },
		{ "Lightblue", "civ", {
			"#(argb,8,8,3)color(0.192157,0.556863,0.968627,1.0,CO)"
		} },
		{ "blue", "civ", {
			"#(argb,8,8,3)color(0.0352941,0.415686,0.882353,1.0,CO)"
		} },
		{ "Darkblue", "civ", {
			"#(argb,8,8,3)color(0.0235294,0.12549,0.592157,1.0,CO)"
		} },
		{ "Turquoiseblue", "civ", {
			"#(argb,8,8,3)color(0,0.717647,0.717647,1.0,CO)"
		} },
		{ "Lightred", "civ", {
			"#(argb,8,8,3)color(0.992157,0.258824,0.258824,1.0,CO)"
		} },
		{ "Red", "civ", {
			"#(argb,8,8,3)color(0.843137,0,0,1.0,CO)"
		} },
		{ "Darkred", "civ", {
			"#(argb,8,8,3)color(0.466667,0,0,1.0,CO)"
		} },
		{ "Bordeauxred", "civ", {
			"#(argb,8,8,3)color(0.517647,0.0156863,0.027451,1.0,CO)"
		} },
		{ "Lightgreen", "civ", {
			"#(argb,8,8,3)color(0.270588,0.862745,0.345098,1.0,CO)"
		} },
		{ "Green", "civ", {
			"#(argb,8,8,3)color(0.105882,0.545098,0.156863,1.0,CO)"
		} },
		{ "Darkgreen", "civ", {
			"#(argb,8,8,3)color(0.0509804,0.266667,0.0784314,1.0,CO)"
		} },
		{ "Green Limette", "civ", {
			"#(argb,8,8,3)color(0.65098,0.996078,0.00392157,1.0,CO)"
		} },
		{ "Khaki", "civ", {
			"#(argb,8,8,3)color(0.392157,0.447059,0.180392,1.0,CO)"
		} },
		{ "Yellow", "civ", {
			"#(argb,8,8,3)color(0.917647,0.886275,0.356863,1.0,CO)"
		} },
		{ "Orange", "civ", {
			"#(argb,8,8,3)color(0.921569,0.435294,0.137255,1.0,CO)"
		} },
		{ "Ton", "civ", {
			"#(argb,8,8,3)color(0.788235,0.427451,0.380392,1.0,CO)"
		} },
		{ "Brown", "civ", {
			"#(argb,8,8,3)color(0.713725,0.517647,0.305882,1.0,CO)"
		} },
		{ "Darkbrown", "civ", {
			"#(argb,8,8,3)color(0.407843,0.290196,0.168627,1.0,CO)"
		} },
		{ "Pink", "civ", {
			"#(argb,8,8,3)color(0.972549,0.470588,0.756863,1.0,CO)"
		} },
		{ "Darkpink", "civ", {
			"#(argb,8,8,3)color(0.713725,0.32549,0.843137,1.0,CO)"
		} },
		{ "Lavendel", "civ", {
			"#(argb,8,8,3)color(0.717647,0.662745,0.960784,1.0,CO)"
		} },
		{ "Violett", "civ", {
			"#(argb,8,8,3)color(0.392157,0.0431373,0.67451,1.0,CO)"
		} },
		{ "AliceBlue", "civ", {
			"#(rgb,8,8,3)color(0.94,0.97,1.0,1.0,CO)"
		} },
		{ "BlueViolet", "civ", {
			"#(rgb,8,8,3)color(0.54,0.17,0.89,1.0,CO)"
		} },
		{ "CadetBlue", "civ", {
			"#(rgb,8,8,3)color(0.37,0.62,0.63,1.0,CO)"
		} },
		{ "CornflowerBlue", "civ", {
			"#(rgb,8,8,3)color(0.39,0.58,0.93,1.0,CO)"
		} },
		{ "DarkBlue", "civ", {
			"#(rgb,8,8,3)color(0.0,0.0,0.55,1.0,CO)"
		} },
		{ "DarkCyan", "civ", {
			"#(rgb,8,8,3)color(0.0,0.55,0.55,1.0,CO)"
		} },
		{ "DarkSlateBlue", "civ", {
			"#(rgb,8,8,3)color(0.28,0.24,0.55,1.0,CO)"
		} },
		{ "DarkTurquoise", "civ", {
			"#(rgb,8,8,3)color(0.0,0.81,0.82,1.0,CO)"
		} },
		{ "DeepSkyBlue", "civ", {
			"#(rgb,8,8,3)color(0.0,0.75,1.0,1.0,CO)"
		} },
		{ "DodgerBlue", "civ", {
			"#(rgb,8,8,3)color(0.12,0.56,1.0,1.0,CO)"
		} },
		{ "LightBlue", "civ", {
			"#(rgb,8,8,3)color(0.68,0.85,0.90,1.0,CO)"
		} },
		{ "LightCyan", "civ", {
			"#(rgb,8,8,3)color(0.88,1.0,1.0,1,CO)"
		} },
		{ "LightSkyBlue", "civ", {
			"#(rgb,8,8,3)color(0.53,0.81,0.98,1,CO)"
		} },
		{ "LightSlateBlue", "civ", {
			"#(rgb,8,8,3)color(0.52,0.44,1.0,1,CO)"
		} },
		{ "LightSteelBlue", "civ", {
			"#(rgb,8,8,3)color(0.69,0.77,0.87,1,CO)"
		} },
		{ "MediumAquamarine", "civ", {
			"#(rgb,8,8,3)color(0.40,0.80,0.67,1,CO)"
		} },
		{ "MediumBlue", "civ", {
			"#(rgb,8,8,3)color(0.0,0.0,0.80,1,CO)"
		} },
		{ "MediumSlateBlue", "civ", {
			"#(rgb,8,8,3)color(0.48,0.41,0.93,1,CO)"
		} },
		{ "MediumTurquoise", "civ", {
			"#(rgb,8,8,3)color(0.28,0.82,0.80,1,CO)"
		} },
		{ "MidnightBlue", "civ", {
			"#(rgb,8,8,3)color(0.10,0.10,0.44,1,CO)"
		} },
		{ "NavyBlue", "civ", {
			"#(rgb,8,8,3)color(0.0,0.0,0.50,1,CO)"
		} },
		{ "PaleTurquoise", "civ", {
			"#(rgb,8,8,3)color(0.69,0.93,0.93,1,CO)"
		} },
		{ "PowderBlue", "civ", {
			"#(rgb,8,8,3)color(0.69,0.88,0.90,1,CO)"
		} },
		{ "RoyalBlue", "civ", {
			"#(rgb,8,8,3)color(0.25,0.41,0.88,1,CO)"
		} },
		{ "SkyBlue", "civ", {
			"#(rgb,8,8,3)color(0.53,0.81,0.92,1,CO)"
		} },
		{ "SlateBlue", "civ", {
			"#(rgb,8,8,3)color(0.42,0.35,0.80,1,CO)"
		} },
		{ "SteelBlue", "civ", {
			"#(rgb,8,8,3)color(0.27,0.51,0.71,1,CO)"
		} },
		{ "Aquamarine", "civ", {
			"#(rgb,8,8,3)color(0.50,1.0,0.83,1,CO)"
		} },
		{ "Azure", "civ", {
			"#(rgb,8,8,3)color(0.94,1.0,1.0,1,CO)"
		} },
		{ "Blue", "civ", {
			"#(rgb,8,8,3)color(0.0,0.0,1.0,1,CO)"
		} },
		{ "Cyan", "civ", {
			"#(rgb,8,8,3)color(0.0,1.0,1.0,1,CO)"
		} },
		{ "Navy", "civ", {
			"#(rgb,8,8,3)color(0.0,0.0,0.50,1,CO)"
		} },
		{ "Turquoise", "civ", {
			"#(rgb,8,8,3)color(0.25,0.88,0.82,1,CO)"
		} },
		{ "RosyBrown", "civ", {
			"#(rgb,8,8,3)color(0.74,0.56,0.56,1,CO)"
		} },
		{ "SaddleBrown", "civ", {
			"#(rgb,8,8,3)color(0.55,0.27,0.07,1,CO)"
		} },
		{ "SandyBrown", "civ", {
			"#(rgb,8,8,3)color(0.96,0.64,0.38,1,CO)"
		} },
		{ "Beige", "civ", {
			"#(rgb,8,8,3)color(0.96,0.96,0.86,1,CO)"
		} },
		{ "Brown", "civ", {
			"#(rgb,8,8,3)color(0.65,0.16,0.16,1,CO)"
		} },
		{ "Burlywood", "civ", {
			"#(rgb,8,8,3)color(0.87,0.72,0.53,1,CO)"
		} },
		{ "Chocolate", "civ", {
			"#(rgb,8,8,3)color(0.55,0.27,0.07,1,CO)"
		} },
		{ "Peru", "civ", {
			"#(rgb,8,8,3)color(0.80,0.52,0.25,1,CO)"
		} },
		{ "Tan", "civ", {
			"#(rgb,8,8,3)color(0.82,0.71,0.55,1,CO)"
		} },
		{ "DarkSlateGray", "civ", {
			"#(rgb,8,8,3)color(0.18,0.31,0.31,1,CO)"
		} },
		{ "DimGray", "civ", {
			"#(rgb,8,8,3)color(0.41,0.41,0.41,1,CO)"
		} },
		{ "LightGray", "civ", {
			"#(rgb,8,8,3)color(0.83,0.83,0.83,1,CO)"
		} },
		{ "LightSlateGray", "civ", {
			"#(rgb,8,8,3)color(0.47,0.53,0.60,1,CO)"
		} },
		{ "Gray", "civ", {
			"#(rgb,8,8,3)color(0.75,0.75,0.75,1,CO)"
		} },
		{ "DarkGreen", "civ", {
			"#(rgb,8,8,3)color(0.0,0.39,0.0,1,CO)"
		} },
		{ "DarkKhaki", "civ", {
			"#(rgb,8,8,3)color(0.74,0.72,0.42,1,CO)"
		} },
		{ "DarkOliveGreen", "civ", {
			"#(rgb,8,8,3)color(0.33,0.42,0.18,1,CO)"
		} },
		{ "DarkSeaGreen", "civ", {
			"#(rgb,8,8,3)color(0.56,0.74,0.56,1,CO)"
		} },
		{ "ForestGreen", "civ", {
			"#(rgb,8,8,3)color(0.13,0.55,0.13,1,CO)"
		} },
		{ "GreenYellow", "civ", {
			"#(rgb,8,8,3)color(0.68,1.0,0.18,1,CO)"
		} },
		{ "LawnGreen", "civ", {
			"#(rgb,8,8,3)color(0.49,0.99,0.0,1,CO)"
		} },
		{ "LightGreen", "civ", {
			"#(rgb,8,8,3)color(0.56,0.93,0.56,1,CO)"
		} },
		{ "LightSeaGreen", "civ", {
			"#(rgb,8,8,3)color(0.13,0.70,0.67,1,CO)"
		} },
		{ "LimeGreen", "civ", {
			"#(rgb,8,8,3)color(0.20,0.80,0.20,1,CO)"
		} },
		{ "MediumSeaGreen", "civ", {
			"#(rgb,8,8,3)color(0.24,0.70,0.44,1,CO)"
		} },
		{ "MediumSpringGreen", "civ", {
			"#(rgb,8,8,3)color(0.0,0.98,0.60,1,CO)"
		} },
		{ "MintCream", "civ", {
			"#(rgb,8,8,3)color(0.96,1.0,0.98,1,CO)"
		} },
		{ "OliveDrab", "civ", {
			"#(rgb,8,8,3)color(0.42,0.56,0.14,1,CO)"
		} },
		{ "PaleGreen", "civ", {
			"#(rgb,8,8,3)color(0.60,0.98,0.60,1,CO)"
		} },
		{ "SeaGreen", "civ", {
			"#(rgb,8,8,3)color(0.18,0.55,0.34,1,CO)"
		} },
		{ "SpringGreen", "civ", {
			"#(rgb,8,8,3)color(0.0,1.0,0.50,1,CO)"
		} },
		{ "YellowGreen", "civ", {
			"#(rgb,8,8,3)color(0.60,0.80,0.20,1,CO)"
		} },
		{ "Chartreuse", "civ", {
			"#(rgb,8,8,3)color(0.50,1.0,0.0,1,CO)"
		} },
		{ "Green", "civ", {
			"#(rgb,8,8,3)color(0.0,1.0,0.0,1,CO)"
		} },
		{ "Khaki", "civ", {
			"#(rgb,8,8,3)color(0.55,0.53,0.31,1,CO)"
		} },
		{ "DarkOrange", "civ", {
			"#(rgb,8,8,3)color(1.0,0.55,0.0,1,CO)"
		} },
		{ "DarkSalmon", "civ", {
			"#(rgb,8,8,3)color(0.91,0.59,0.48,1,CO)"
		} },
		{ "LightCoral", "civ", {
			"#(rgb,8,8,3)color(0.94,0.50,0.50,1,CO)"
		} },
		{ "LightSalmon", "civ", {
			"#(rgb,8,8,3)color(1.0,0.63,0.48,1,CO)"
		} },
		{ "PeachPuff", "civ", {
			"#(rgb,8,8,3)color(1.0,0.85,0.73,1,CO)"
		} },
		{ "Bisque", "civ", {
			"#(rgb,8,8,3)color(1.0,0.89,0.77,1,CO)"
		} },
		{ "Coral", "civ", {
			"#(rgb,8,8,3)color(1.0,0.50,0.31,1,CO)"
		} },
		{ "Honeydew", "civ", {
			"#(rgb,8,8,3)color(0.94,1.0,0.94,1,CO)"
		} },
		{ "Orange", "civ", {
			"#(rgb,8,8,3)color(1.0,0.65,0.0,1,CO)"
		} },
		{ "Salmon", "civ", {
			"#(rgb,8,8,3)color(0.98,0.50,0.45,1,CO)"
		} },
		{ "Sienna", "civ", {
			"#(rgb,8,8,3)color(0.63,0.32,0.18,1,CO)"
		} },
		{ "DarkRed", "civ", {
			"#(rgb,8,8,3)color(0.55,0.0,0.0,1,CO)"
		} },
		{ "DeepPink", "civ", {
			"#(rgb,8,8,3)color(0.80,0.06,0.46,1,CO)"
		} },
		{ "HotPink", "civ", {
			"#(rgb,8,8,3)color(1.0,0.41,0.71,1,CO)"
		} },
		{ "IndianRed", "civ", {
			"#(rgb,8,8,3)color(0.80,0.36,0.36,1,CO)"
		} },
		{ "LightPink", "civ", {
			"#(rgb,8,8,3)color(1.0,0.71,0.76,1,CO)"
		} },
		{ "MediumVioletRed", "civ", {
			"#(rgb,8,8,3)color(0.78,0.08,0.52,1,CO)"
		} },
		{ "MistyRose", "civ", {
			"#(rgb,8,8,3)color(1.0,0.89,0.88,1,CO)"
		} },
		{ "OrangeRed", "civ", {
			"#(rgb,8,8,3)color(1.0,0.27,0.0,1,CO)"
		} },
		{ "PaleVioletRed", "civ", {
			"#(rgb,8,8,3)color(0.86,0.44,0.58,1,CO)"
		} },
		{ "VioletRed", "civ", {
			"#(rgb,8,8,3)color(0.82,0.13,0.56,1,CO)"
		} },
		{ "Firebrick", "civ", {
			"#(rgb,8,8,3)color(0.70,0.13,0.13,1,CO)"
		} },
		{ "Pink", "civ", {
			"#(rgb,8,8,3)color(1.0,0.75,0.80,1,CO)"
		} },
		{ "Red", "civ", {
			"#(rgb,8,8,3)color(1.0,0.0,0.0,1,CO)"
		} },
		{ "Tomato", "civ", {
			"#(rgb,8,8,3)color(1.0,0.39,0.28,1,CO)"
		} },
		{ "DarkMagenta", "civ", {
			"#(rgb,8,8,3)color(0.55,0.0,0.55,1,CO)"
		} },
		{ "DarkOrchid", "civ", {
			"#(rgb,8,8,3)color(0.60,0.20,0.80,1,CO)"
		} },
		{ "DarkViolet", "civ", {
			"#(rgb,8,8,3)color(0.58,0.0,0.83,1,CO)"
		} },
		{ "LavenderBlush", "civ", {
			"#(rgb,8,8,3)color(1.0,0.94,0.96,1,CO)"
		} },
		{ "MediumOrchid", "civ", {
			"#(rgb,8,8,3)color(0.73,0.33,0.83,1,CO)"
		} },
		{ "MediumPurple", "civ", {
			"#(rgb,8,8,3)color(0.58,0.44,0.86,1,CO)"
		} },
		{ "Lavender", "civ", {
			"#(rgb,8,8,3)color(0.90,0.90,0.98,1,CO)"
		} },
		{ "Magenta", "civ", {
			"#(rgb,8,8,3)color(1.0,0.0,1.0,1,CO)"
		} },
		{ "Maroon", "civ", {
			"#(rgb,8,8,3)color(0.69,0.19,0.38,1,CO)"
		} },
		{ "Orchid", "civ", {
			"#(rgb,8,8,3)color(0.85,0.44,0.84,1,CO)"
		} },
		{ "Plum", "civ", {
			"#(rgb,8,8,3)color(0.87,0.63,0.87,1,CO)"
		} },
		{ "Purple", "civ", {
			"#(rgb,8,8,3)color(0.63,0.13,0.94,1,CO)"
		} },
		{ "Thistle", "civ", {
			"#(rgb,8,8,3)color(0.85,0.75,0.85,1,CO)"
		} },
		{ "Violet", "civ", {
			"#(rgb,8,8,3)color(0.93,0.51,0.93,1,CO)"
		} },
		{ "AntiqueWhite", "civ", {
			"#(rgb,8,8,3)color(0.98,0.92,0.84,1,CO)"
		} },
		{ "Linen", "civ", {
			"#(rgb,8,8,3)color(0.98,0.94,0.90,1,CO)"
		} },
		{ "Snow", "civ", {
			"#(rgb,8,8,3)color(1.0,0.98,0.98,1,CO)"
		} },
		{ "White", "civ", {
			"#(rgb,8,8,3)color(1.0,1.0,1.0,1,CO)"
		} },
		{ "BlanchedAlmond", "civ", {
			"#(rgb,8,8,3)color(1.0,0.92,0.80,1,CO)"
		} },
		{ "DarkGoldenrod", "civ", {
			"#(rgb,8,8,3)color(0.72,0.53,0.04,1,CO)"
		} },
		{ "LemonChiffon", "civ", {
			"#(rgb,8,8,3)color(1.0,0.98,0.80,1,CO)"
		} },
		{ "LightGoldenrod", "civ", {
			"#(rgb,8,8,3)color(0.93,0.87,0.51,1,CO)"
		} },
		{ "LightGoldenrodYellow", "civ", {
			"#(rgb,8,8,3)color(0.98,0.98,0.82,1,CO)"
		} },
		{ "LightYellow", "civ", {
			"#(rgb,8,8,3)color(1.0,1.0,0.88,1,CO)"
		} },
		{ "PaleGoldenrod", "civ", {
			"#(rgb,8,8,3)color(0.93,0.91,0.67,1,CO)"
		} },
		{ "PapayaWhip", "civ", {
			"#(rgb,8,8,3)color(0.99,0.94,0.84,1,CO)"
		} },
		{ "Cornsilk", "civ", {
			"#(rgb,8,8,3)color(0.99,0.97,0.86,1,CO)"
		} },
		{ "Gold", "civ", {
			"#(rgb,8,8,3)color(1.0,0.84,0.0,1,CO)"
		} },
		{ "Goldenrod", "civ", {
			"#(rgb,8,8,3)color(0.85,0.65,0.13,1,CO)"
		} },
		{ "Moccasin", "civ", {
			"#(rgb,8,8,3)color(1.0,0.89,0.71,1,CO)"
		} },
		{ "Moccasin", "civ", {
			"#(rgb,8,8,3)color(1.0,1.0,0.0,1,CO)"
		} }
	};
};
//FarbenCOP
class Colorscop {
	textures[] = {
		{ "Black", "cop", {
			"#(argb,8,8,3)color(0,0,0,1.0,CO)"
		} },
		{ "White", "cop", {
			"#(argb,8,8,3)color(1,1,1,1.0,CO)"
		} },
		{ "Grey", "cop", {
			"#(argb,8,8,3)color(0.521569,0.521569,0.521569,1.0,CO)"
		} },
		{ "Grey Blue", "cop", {
			"#(argb,8,8,3)color(0.537255,0.647059,0.811765,1.0,CO)"
		} },
		{ "Darkblue Grey", "cop", {
			"#(argb,8,8,3)color(0.278431,0.427451,0.713725,1.0,CO)"
		} },
		{ "Lightblue", "cop", {
			"#(argb,8,8,3)color(0.192157,0.556863,0.968627,1.0,CO)"
		} },
		{ "Blue", "cop", {
			"#(argb,8,8,3)color(0.0352941,0.415686,0.882353,1.0,CO)"
		} },
		{ "Darkblue", "cop", {
			"#(argb,8,8,3)color(0.0235294,0.12549,0.592157,1.0,CO)"
		} },
		{ "Turquoiseblue", "cop", {
			"#(argb,8,8,3)color(0,0.717647,0.717647,1.0,CO)"
		} },
		{ "Lightred", "cop", {
			"#(argb,8,8,3)color(0.992157,0.258824,0.258824,1.0,CO)"
		} },
		{ "Red", "cop", {
			"#(argb,8,8,3)color(0.843137,0,0,1.0,CO)"
		} },
		{ "Darkred", "cop", {
			"#(argb,8,8,3)color(0.466667,0,0,1.0,CO)"
		} },
		{ "Bordeauxred", "cop", {
			"#(argb,8,8,3)color(0.517647,0.0156863,0.027451,1.0,CO)"
		} },
		{ "Lightgreen", "cop", {
			"#(argb,8,8,3)color(0.270588,0.862745,0.345098,1.0,CO)"
		} },
		{ "Green", "cop", {
			"#(argb,8,8,3)color(0.105882,0.545098,0.156863,1.0,CO)"
		} },
		{ "Darkgreen", "cop", {
			"#(argb,8,8,3)color(0.0509804,0.266667,0.0784314,1.0,CO)"
		} },
		{ "greene Limette", "cop", {
			"#(argb,8,8,3)color(0.65098,0.996078,0.00392157,1.0,CO)"
		} },
		{ "Khaki", "cop", {
			"#(argb,8,8,3)color(0.392157,0.447059,0.180392,1.0,CO)"
		} },
		{ "Yellow", "cop", {
			"#(argb,8,8,3)color(0.917647,0.886275,0.356863,1.0,CO)"
		} },
		{ "Orange", "cop", {
			"#(argb,8,8,3)color(0.921569,0.435294,0.137255,1.0,CO)"
		} },
		{ "Ton", "cop", {
			"#(argb,8,8,3)color(0.788235,0.427451,0.380392,1.0,CO)"
		} },
		{ "Brown", "cop", {
			"#(argb,8,8,3)color(0.713725,0.517647,0.305882,1.0,CO)"
		} },
		{ "Darkbrown", "cop", {
			"#(argb,8,8,3)color(0.407843,0.290196,0.168627,1.0,CO)"
		} },
		{ "Pink", "cop", {
			"#(argb,8,8,3)color(0.972549,0.470588,0.756863,1.0,CO)"
		} },
		{ "Darkpink", "cop", {
			"#(argb,8,8,3)color(0.713725,0.32549,0.843137,1.0,CO)"
		} },
		{ "Lavendel", "cop", {
			"#(argb,8,8,3)color(0.717647,0.662745,0.960784,1.0,CO)"
		} },
		{ "Violett", "cop", {
			"#(argb,8,8,3)color(0.392157,0.0431373,0.67451,1.0,CO)"
		} },
		{ "AliceBlue", "cop", {
			"#(rgb,8,8,3)color(0.94,0.97,1.0,1.0,CO)"
		} },
		{ "BlueViolet", "cop", {
			"#(rgb,8,8,3)color(0.54,0.17,0.89,1.0,CO)"
		} },
		{ "CadetBlue", "cop", {
			"#(rgb,8,8,3)color(0.37,0.62,0.63,1.0,CO)"
		} },
		{ "CornflowerBlue", "cop", {
			"#(rgb,8,8,3)color(0.39,0.58,0.93,1.0,CO)"
		} },
		{ "DarkBlue", "cop", {
			"#(rgb,8,8,3)color(0.0,0.0,0.55,1.0,CO)"
		} },
		{ "DarkCyan", "cop", {
			"#(rgb,8,8,3)color(0.0,0.55,0.55,1.0,CO)"
		} },
		{ "DarkSlateBlue", "cop", {
			"#(rgb,8,8,3)color(0.28,0.24,0.55,1.0,CO)"
		} },
		{ "DarkTurquoise", "cop", {
			"#(rgb,8,8,3)color(0.0,0.81,0.82,1.0,CO)"
		} },
		{ "DeepSkyBlue", "cop", {
			"#(rgb,8,8,3)color(0.0,0.75,1.0,1.0,CO)"
		} },
		{ "DodgerBlue", "cop", {
			"#(rgb,8,8,3)color(0.12,0.56,1.0,1.0,CO)"
		} },
		{ "LightBlue", "cop", {
			"#(rgb,8,8,3)color(0.68,0.85,0.90,1.0,CO)"
		} },
		{ "LightCyan", "cop", {
			"#(rgb,8,8,3)color(0.88,1.0,1.0,1,CO)"
		} },
		{ "LightSkyBlue", "cop", {
			"#(rgb,8,8,3)color(0.53,0.81,0.98,1,CO)"
		} },
		{ "LightSlateBlue", "cop", {
			"#(rgb,8,8,3)color(0.52,0.44,1.0,1,CO)"
		} },
		{ "LightSteelBlue", "cop", {
			"#(rgb,8,8,3)color(0.69,0.77,0.87,1,CO)"
		} },
		{ "MediumAquamarine", "cop", {
			"#(rgb,8,8,3)color(0.40,0.80,0.67,1,CO)"
		} },
		{ "MediumBlue", "cop", {
			"#(rgb,8,8,3)color(0.0,0.0,0.80,1,CO)"
		} },
		{ "MediumSlateBlue", "cop", {
			"#(rgb,8,8,3)color(0.48,0.41,0.93,1,CO)"
		} },
		{ "MediumTurquoise", "cop", {
			"#(rgb,8,8,3)color(0.28,0.82,0.80,1,CO)"
		} },
		{ "MidnightBlue", "cop", {
			"#(rgb,8,8,3)color(0.10,0.10,0.44,1,CO)"
		} },
		{ "NavyBlue", "cop", {
			"#(rgb,8,8,3)color(0.0,0.0,0.50,1,CO)"
		} },
		{ "PaleTurquoise", "cop", {
			"#(rgb,8,8,3)color(0.69,0.93,0.93,1,CO)"
		} },
		{ "PowderBlue", "cop", {
			"#(rgb,8,8,3)color(0.69,0.88,0.90,1,CO)"
		} },
		{ "RoyalBlue", "cop", {
			"#(rgb,8,8,3)color(0.25,0.41,0.88,1,CO)"
		} },
		{ "SkyBlue", "cop", {
			"#(rgb,8,8,3)color(0.53,0.81,0.92,1,CO)"
		} },
		{ "SlateBlue", "cop", {
			"#(rgb,8,8,3)color(0.42,0.35,0.80,1,CO)"
		} },
		{ "SteelBlue", "cop", {
			"#(rgb,8,8,3)color(0.27,0.51,0.71,1,CO)"
		} },
		{ "Aquamarine", "cop", {
			"#(rgb,8,8,3)color(0.50,1.0,0.83,1,CO)"
		} },
		{ "Azure", "cop", {
			"#(rgb,8,8,3)color(0.94,1.0,1.0,1,CO)"
		} },
		{ "Blue", "cop", {
			"#(rgb,8,8,3)color(0.0,0.0,1.0,1,CO)"
		} },
		{ "Cyan", "cop", {
			"#(rgb,8,8,3)color(0.0,1.0,1.0,1,CO)"
		} },
		{ "Navy", "cop", {
			"#(rgb,8,8,3)color(0.0,0.0,0.50,1,CO)"
		} },
		{ "Turquoise", "cop", {
			"#(rgb,8,8,3)color(0.25,0.88,0.82,1,CO)"
		} },
		{ "RosyBrown", "cop", {
			"#(rgb,8,8,3)color(0.74,0.56,0.56,1,CO)"
		} },
		{ "SaddleBrown", "cop", {
			"#(rgb,8,8,3)color(0.55,0.27,0.07,1,CO)"
		} },
		{ "SandyBrown", "cop", {
			"#(rgb,8,8,3)color(0.96,0.64,0.38,1,CO)"
		} },
		{ "Beige", "cop", {
			"#(rgb,8,8,3)color(0.96,0.96,0.86,1,CO)"
		} },
		{ "Brown", "cop", {
			"#(rgb,8,8,3)color(0.65,0.16,0.16,1,CO)"
		} },
		{ "Burlywood", "cop", {
			"#(rgb,8,8,3)color(0.87,0.72,0.53,1,CO)"
		} },
		{ "Chocolate", "cop", {
			"#(rgb,8,8,3)color(0.55,0.27,0.07,1,CO)"
		} },
		{ "Peru", "cop", {
			"#(rgb,8,8,3)color(0.80,0.52,0.25,1,CO)"
		} },
		{ "Tan", "cop", {
			"#(rgb,8,8,3)color(0.82,0.71,0.55,1,CO)"
		} },
		{ "DarkSlateGray", "cop", {
			"#(rgb,8,8,3)color(0.18,0.31,0.31,1,CO)"
		} },
		{ "DimGray", "cop", {
			"#(rgb,8,8,3)color(0.41,0.41,0.41,1,CO)"
		} },
		{ "LightGray", "cop", {
			"#(rgb,8,8,3)color(0.83,0.83,0.83,1,CO)"
		} },
		{ "LightSlateGray", "cop", {
			"#(rgb,8,8,3)color(0.47,0.53,0.60,1,CO)"
		} },
		{ "Gray", "cop", {
			"#(rgb,8,8,3)color(0.75,0.75,0.75,1,CO)"
		} },
		{ "DarkGreen", "cop", {
			"#(rgb,8,8,3)color(0.0,0.39,0.0,1,CO)"
		} },
		{ "DarkKhaki", "cop", {
			"#(rgb,8,8,3)color(0.74,0.72,0.42,1,CO)"
		} },
		{ "DarkOliveGreen", "cop", {
			"#(rgb,8,8,3)color(0.33,0.42,0.18,1,CO)"
		} },
		{ "DarkSeaGreen", "cop", {
			"#(rgb,8,8,3)color(0.56,0.74,0.56,1,CO)"
		} },
		{ "ForestGreen", "cop", {
			"#(rgb,8,8,3)color(0.13,0.55,0.13,1,CO)"
		} },
		{ "GreenYellow", "cop", {
			"#(rgb,8,8,3)color(0.68,1.0,0.18,1,CO)"
		} },
		{ "LawnGreen", "cop", {
			"#(rgb,8,8,3)color(0.49,0.99,0.0,1,CO)"
		} },
		{ "LightGreen", "cop", {
			"#(rgb,8,8,3)color(0.56,0.93,0.56,1,CO)"
		} },
		{ "LightSeaGreen", "cop", {
			"#(rgb,8,8,3)color(0.13,0.70,0.67,1,CO)"
		} },
		{ "LimeGreen", "cop", {
			"#(rgb,8,8,3)color(0.20,0.80,0.20,1,CO)"
		} },
		{ "MediumSeaGreen", "cop", {
			"#(rgb,8,8,3)color(0.24,0.70,0.44,1,CO)"
		} },
		{ "MediumSpringGreen", "cop", {
			"#(rgb,8,8,3)color(0.0,0.98,0.60,1,CO)"
		} },
		{ "MintCream", "cop", {
			"#(rgb,8,8,3)color(0.96,1.0,0.98,1,CO)"
		} },
		{ "OliveDrab", "cop", {
			"#(rgb,8,8,3)color(0.42,0.56,0.14,1,CO)"
		} },
		{ "PaleGreen", "cop", {
			"#(rgb,8,8,3)color(0.60,0.98,0.60,1,CO)"
		} },
		{ "SeaGreen", "cop", {
			"#(rgb,8,8,3)color(0.18,0.55,0.34,1,CO)"
		} },
		{ "SpringGreen", "cop", {
			"#(rgb,8,8,3)color(0.0,1.0,0.50,1,CO)"
		} },
		{ "YellowGreen", "cop", {
			"#(rgb,8,8,3)color(0.60,0.80,0.20,1,CO)"
		} },
		{ "Chartreuse", "cop", {
			"#(rgb,8,8,3)color(0.50,1.0,0.0,1,CO)"
		} },
		{ "Green", "cop", {
			"#(rgb,8,8,3)color(0.0,1.0,0.0,1,CO)"
		} },
		{ "Khaki", "cop", {
			"#(rgb,8,8,3)color(0.55,0.53,0.31,1,CO)"
		} },
		{ "DarkOrange", "cop", {
			"#(rgb,8,8,3)color(1.0,0.55,0.0,1,CO)"
		} },
		{ "DarkSalmon", "cop", {
			"#(rgb,8,8,3)color(0.91,0.59,0.48,1,CO)"
		} },
		{ "LightCoral", "cop", {
			"#(rgb,8,8,3)color(0.94,0.50,0.50,1,CO)"
		} },
		{ "LightSalmon", "cop", {
			"#(rgb,8,8,3)color(1.0,0.63,0.48,1,CO)"
		} },
		{ "PeachPuff", "cop", {
			"#(rgb,8,8,3)color(1.0,0.85,0.73,1,CO)"
		} },
		{ "Bisque", "cop", {
			"#(rgb,8,8,3)color(1.0,0.89,0.77,1,CO)"
		} },
		{ "Coral", "cop", {
			"#(rgb,8,8,3)color(1.0,0.50,0.31,1,CO)"
		} },
		{ "Honeydew", "cop", {
			"#(rgb,8,8,3)color(0.94,1.0,0.94,1,CO)"
		} },
		{ "Orange", "cop", {
			"#(rgb,8,8,3)color(1.0,0.65,0.0,1,CO)"
		} },
		{ "Salmon", "cop", {
			"#(rgb,8,8,3)color(0.98,0.50,0.45,1,CO)"
		} },
		{ "Sienna", "cop", {
			"#(rgb,8,8,3)color(0.63,0.32,0.18,1,CO)"
		} },
		{ "DarkRed", "cop", {
			"#(rgb,8,8,3)color(0.55,0.0,0.0,1,CO)"
		} },
		{ "DeepPink", "cop", {
			"#(rgb,8,8,3)color(0.80,0.06,0.46,1,CO)"
		} },
		{ "HotPink", "cop", {
			"#(rgb,8,8,3)color(1.0,0.41,0.71,1,CO)"
		} },
		{ "IndianRed", "cop", {
			"#(rgb,8,8,3)color(0.80,0.36,0.36,1,CO)"
		} },
		{ "LightPink", "cop", {
			"#(rgb,8,8,3)color(1.0,0.71,0.76,1,CO)"
		} },
		{ "MediumVioletRed", "cop", {
			"#(rgb,8,8,3)color(0.78,0.08,0.52,1,CO)"
		} },
		{ "MistyRose", "cop", {
			"#(rgb,8,8,3)color(1.0,0.89,0.88,1,CO)"
		} },
		{ "OrangeRed", "cop", {
			"#(rgb,8,8,3)color(1.0,0.27,0.0,1,CO)"
		} },
		{ "PaleVioletRed", "cop", {
			"#(rgb,8,8,3)color(0.86,0.44,0.58,1,CO)"
		} },
		{ "VioletRed", "cop", {
			"#(rgb,8,8,3)color(0.82,0.13,0.56,1,CO)"
		} },
		{ "Firebrick", "cop", {
			"#(rgb,8,8,3)color(0.70,0.13,0.13,1,CO)"
		} },
		{ "Pink", "cop", {
			"#(rgb,8,8,3)color(1.0,0.75,0.80,1,CO)"
		} },
		{ "Red", "cop", {
			"#(rgb,8,8,3)color(1.0,0.0,0.0,1,CO)"
		} },
		{ "Tomato", "cop", {
			"#(rgb,8,8,3)color(1.0,0.39,0.28,1,CO)"
		} },
		{ "DarkMagenta", "cop", {
			"#(rgb,8,8,3)color(0.55,0.0,0.55,1,CO)"
		} },
		{ "DarkOrchid", "cop", {
			"#(rgb,8,8,3)color(0.60,0.20,0.80,1,CO)"
		} },
		{ "DarkViolet", "cop", {
			"#(rgb,8,8,3)color(0.58,0.0,0.83,1,CO)"
		} },
		{ "LavenderBlush", "cop", {
			"#(rgb,8,8,3)color(1.0,0.94,0.96,1,CO)"
		} },
		{ "MediumOrchid", "cop", {
			"#(rgb,8,8,3)color(0.73,0.33,0.83,1,CO)"
		} },
		{ "MediumPurple", "cop", {
			"#(rgb,8,8,3)color(0.58,0.44,0.86,1,CO)"
		} },
		{ "Lavender", "cop", {
			"#(rgb,8,8,3)color(0.90,0.90,0.98,1,CO)"
		} },
		{ "Magenta", "cop", {
			"#(rgb,8,8,3)color(1.0,0.0,1.0,1,CO)"
		} },
		{ "Maroon", "cop", {
			"#(rgb,8,8,3)color(0.69,0.19,0.38,1,CO)"
		} },
		{ "Orchid", "cop", {
			"#(rgb,8,8,3)color(0.85,0.44,0.84,1,CO)"
		} },
		{ "Plum", "cop", {
			"#(rgb,8,8,3)color(0.87,0.63,0.87,1,CO)"
		} },
		{ "Purple", "cop", {
			"#(rgb,8,8,3)color(0.63,0.13,0.94,1,CO)"
		} },
		{ "Thistle", "cop", {
			"#(rgb,8,8,3)color(0.85,0.75,0.85,1,CO)"
		} },
		{ "Violet", "cop", {
			"#(rgb,8,8,3)color(0.93,0.51,0.93,1,CO)"
		} },
		{ "AntiqueWhite", "cop", {
			"#(rgb,8,8,3)color(0.98,0.92,0.84,1,CO)"
		} },
		{ "Linen", "cop", {
			"#(rgb,8,8,3)color(0.98,0.94,0.90,1,CO)"
		} },
		{ "Snow", "cop", {
			"#(rgb,8,8,3)color(1.0,0.98,0.98,1,CO)"
		} },
		{ "White", "cop", {
			"#(rgb,8,8,3)color(1.0,1.0,1.0,1,CO)"
		} },
		{ "BlanchedAlmond", "cop", {
			"#(rgb,8,8,3)color(1.0,0.92,0.80,1,CO)"
		} },
		{ "DarkGoldenrod", "cop", {
			"#(rgb,8,8,3)color(0.72,0.53,0.04,1,CO)"
		} },
		{ "LemonChiffon", "cop", {
			"#(rgb,8,8,3)color(1.0,0.98,0.80,1,CO)"
		} },
		{ "LightGoldenrod", "cop", {
			"#(rgb,8,8,3)color(0.93,0.87,0.51,1,CO)"
		} },
		{ "LightGoldenrodYellow", "cop", {
			"#(rgb,8,8,3)color(0.98,0.98,0.82,1,CO)"
		} },
		{ "LightYellow", "cop", {
			"#(rgb,8,8,3)color(1.0,1.0,0.88,1,CO)"
		} },
		{ "PaleGoldenrod", "cop", {
			"#(rgb,8,8,3)color(0.93,0.91,0.67,1,CO)"
		} },
		{ "PapayaWhip", "cop", {
			"#(rgb,8,8,3)color(0.99,0.94,0.84,1,CO)"
		} },
		{ "Cornsilk", "cop", {
			"#(rgb,8,8,3)color(0.99,0.97,0.86,1,CO)"
		} },
		{ "Gold", "cop", {
			"#(rgb,8,8,3)color(1.0,0.84,0.0,1,CO)"
		} },
		{ "Goldenrod", "cop", {
			"#(rgb,8,8,3)color(0.85,0.65,0.13,1,CO)"
		} },
		{ "Moccasin", "cop", {
			"#(rgb,8,8,3)color(1.0,0.89,0.71,1,CO)"
		} },
		{ "Moccasin", "cop", {
			"#(rgb,8,8,3)color(1.0,1.0,0.0,1,CO)"
		} }
	};
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = 100;
        conditions = "";
        price = -1;

        textures[] = {};
    };

	//MEDIC


    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

	//COPS

	class Alessio206COP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioVIRCOP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioRS4COP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioM4COP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioMustangCOP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioC63COP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioIXMRCOP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioGTRCOP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioWRXCOP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	class AlessioTouaregCOP : Colorscop {
		vItemSpace = 100;
		conditions ="";
		price = 60000;

	};

	//Zivilisten

	class Alessio190 : Colors {
		vItemSpace = 50;
		conditions ="license_civ_driver";
		price = 15000;

	};

	class Alessio206 : Colors {
		vItemSpace = 15;
		conditions ="license_civ_driver";
		price = 5000;

	};

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2200;

        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 15000;

        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;

        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;

        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 20000;

        textures[] = {};
    };

    class MELB_MH6M {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 100000;

        textures[] = {};
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 7500;

        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;

        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 75000;

        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;

        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;

        textures[] = { };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;

        textures[] = {};
    };

	//rebel

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

	//cars

	class AlessioVIR : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 22590;

	};

	class AlessioTouareg : Colors {
		vItemSpace = 75;
		conditions ="license_civ_driver";
		price = 55000;

	};

	class AlessioMGA : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 59500;

	};

	class AlessioQuadrifoglio : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 71500;

	};

	class AlessioR8 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 117900;

	};

	class AlessioRS4 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 134900;

	};

	class AlessioRS5 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 62300;

	};

	class AlessioBM4 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 61850;

	};

	class AlessioM5 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 77588;

	};

	class AlessioM8 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 339500;

	};

	class Alessio458 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 444500;

	};

	class AlessioGTB : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 548900;

	};

	class AlessioSuperfast : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 552000;

	};

	class AlessioLaFerrari : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 1255000;

	};

	class AlessioMustang : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 58000;

	};

	class AlessioAgera : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 2247000;

	};

	class AlessioAventador : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 555000;

	};

	class AlessioGallardo : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 261000;

	};

	class AlessioC63 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 64800;

	};

	class AlessioC63N : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 187850;

	};

	class AlessioIXMR : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 87850;

	};

	class AlessioGTR : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 155550;

	};

	class AlessioHuayra : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 1800000;

	};

	class AlessioCayman : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 144700;

	};

	class Alessio918 : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 1206465;

	};

	class AlessioPanamera : Colors {
		vItemSpace = 10;
		conditions ="license_civ_driver";
		price = 190000;

	};

	class AlessioWRX : Colors {
		vItemSpace = 25;
		conditions ="license_civ_driver";
		price = 77000;

	};

	//truck

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)";
        price = 75000;

        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 75000;

        textures[] = {
            { "Sheriff", "cop", {
                "\pi_data\textures\hummingbird.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "\pi_data\skins\medic_hummingbird.paa"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 75000;

    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 115000;

        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 15000;

        textures[] = {};
    };
};
