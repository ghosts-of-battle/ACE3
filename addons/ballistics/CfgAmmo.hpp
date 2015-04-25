
class CfgAmmo {
    class BulletCore;

    class BulletBase: BulletCore {
        timeToLive=6;
    };

    class B_20mm : BulletBase {
        timeToLive=30;
    };
    class B_25mm : BulletBase {
        timeToLive=30;
    };
    class B_35mm_AA : BulletBase {
        timeToLive=30;
    };
    class B_30mm_AP : BulletBase {
        timeToLive=30;
    };
    
    class B_556x45_Ball : BulletBase {
        airFriction=-0.001265;
        hit=8;
        typicalSpeed=750;
        tracerStartTime = 0.073;        //M856 tracer burns out to 800m
        tracerEndTime = 1.579;          //Time in seconds calculated with ballistics calculator
        ACE_caliber=0.224;
        ACE_bulletLength=0.906;
        ACE_bulletMass=62;
        ACE_ammoTempMuzzleVelocityShifts[]={-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[]={0.151};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[]={8.3, 9.4, 10.6, 11.8, 13.0, 14.2, 15.4, 16.5, 17.7, 18.9, 20.0, 24.0};
    };
    class ACE_556x45_Ball_Mk262 : B_556x45_Ball {
        airFriction=-0.001125;
        caliber=0.8;
        deflecting=18;
        hit=11;
        typicalSpeed=836;
        ACE_caliber=0.224;
        ACE_bulletLength=0.906;
        ACE_bulletMass=77;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.361};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={624, 816, 832, 838};
        ACE_barrelLengths[]={7.5, 14.5, 18, 20};
    };
    class ACE_556x45_Ball_Mk318 : B_556x45_Ball {
        airFriction=-0.001120;
        caliber=0.8;
        deflecting=18;
        hit=9;
        typicalSpeed=886;
        ACE_caliber=0.224;
        ACE_bulletLength=0.906;
        ACE_bulletMass=62;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.307};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={780, 886, 950};
        ACE_barrelLengths[]={10, 15.5, 20};
    };
    class ACE_556x45_Ball_M995_AP : B_556x45_Ball {
        airFriction=-0.001120;
        caliber=1.6;
        deflecting=18;
        hit=6;
        typicalSpeed=886;
        ACE_caliber=0.224;
        ACE_bulletLength=0.906;
        ACE_bulletMass=46;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.151};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={950, 1030, 1040};
        ACE_barrelLengths[]={10, 15.5, 20};
    };
    class B_556x45_Ball_Tracer_Red;
    class ACE_B_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red {
        nvgOnly = 1;
    };
    class ACE_545x39_Ball_7N6M : B_556x45_Ball {
        airFriction=-0.001162;
        caliber=0.6;
        deflecting=18;
        hit=7;
        typicalSpeed=880;
        ACE_caliber=0.220;
        ACE_bulletLength=0.85;
        ACE_bulletMass=52.9;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.168};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={780, 880, 920};
        ACE_barrelLengths[]={10, 16.3, 20};
    };
    class B_556x45_Ball_Tracer_Green;
    class ACE_545x39_Ball_7T3M : B_556x45_Ball_Tracer_Green {
        airFriction=-0.001162;
        caliber=0.6;
        deflecting=18;
        hit=7;
        typicalSpeed=883;
        tracerStartTime = 0.073;            //7T3M tracer burns out to 850m
        tracerEndTime = 1.736;              //Time in seconds calculated with ballistics calculator
        ACE_caliber=0.220;
        ACE_bulletLength=0.85;
        ACE_bulletMass=49.8;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.168};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={785, 883, 925};
        ACE_barrelLengths[]={10, 16.3, 20};
    };
    class B_65x39_Caseless : BulletBase {
        airFriction=-0.000785;
        typicalSpeed=800;
        ACE_caliber=0.264;
        ACE_bulletLength=1.295;
        ACE_bulletMass=123;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.263};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={730, 760, 788, 800, 810, 830};
        ACE_barrelLengths[]={10, 16, 20, 24, 26, 30};
    };
    class B_65x39_Case_yellow;
    class ACE_65x39_Caseless_Tracer_Dim : B_65x39_Case_yellow {
        nvgOnly = 1;
    };
    class B_65x39_Caseless_green;
    class ACE_65x39_Caseless_green_Tracer_Dim : B_65x39_Caseless_green {
        nvgOnly = 1;
    };
    class ACE_65x47_Ball_Scenar: B_65x39_Caseless {
        airFriction=-0.00078;
        typicalSpeed=820 ;
        caliber=0.9;
        ACE_caliber=0.264;
        ACE_bulletLength=1.364;
        ACE_bulletMass=139;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.290};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={730, 760, 790, 820, 830};
        ACE_barrelLengths[]={10, 16, 20, 24, 26};
    };
    class ACE_65_Creedmor_Ball: B_65x39_Caseless {
        airFriction=-0.000651;
        typicalSpeed=860 ;
        caliber=1.1;
        ACE_caliber=0.264;
        ACE_bulletLength=1.426;
        ACE_bulletMass=140;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.317};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={750, 820, 840, 852, 860};
        ACE_barrelLengths[]={10, 16, 20, 24, 26};
    };
    class B_762x51_Ball : BulletBase {
        airFriction=-0.001035;
        typicalSpeed=833;
        hit=9;
        tracerStartTime = 0.073;            //Based on the British L5A1 which burns out to 1000m 
        tracerEndTime = 2.058;              //Time in seconds calculated with ballistics calculator
        ACE_caliber=0.308;
        ACE_bulletLength=1.14;
        ACE_bulletMass=146;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.2};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={700, 800, 820, 833, 845};
        ACE_barrelLengths[]={10, 16, 20, 24, 26};
    };
    class B_762x51_Tracer_Yellow;
    class ACE_B_762x51_Tracer_Dim: B_762x51_Tracer_Yellow {
        nvgOnly = 1;
    };
    class ACE_762x51_Ball_M118LR : B_762x51_Ball {
        airFriction=-0.0008525;
        caliber=1.8;
        hit=16;
        typicalSpeed=790;
        ACE_caliber=0.308;
        ACE_bulletLength=1.24;
        ACE_bulletMass=175;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.243};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={750, 780, 790, 794};
        ACE_barrelLengths[]={16, 20, 24, 26};
    };
    class ACE_762x51_Ball_Mk316_Mod_0 : B_762x51_Ball {
        airFriction=-0.0008525;
        caliber=1.8;
        hit=16;
        typicalSpeed=790;
        ACE_caliber=0.308;
        ACE_bulletLength=1.24;
        ACE_bulletMass=175;
        ACE_ammoTempMuzzleVelocityShifts[]={-5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2};
        ACE_ballisticCoefficients[]={0.243};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={775, 790, 805, 810};
        ACE_barrelLengths[]={16, 20, 24, 26};
    };
    class ACE_762x51_Ball_Mk319_Mod_0 : B_762x51_Ball {
        airFriction=-0.00103;
        caliber=1.5;
        hit=14;
        typicalSpeed=900;
        ACE_caliber=0.308;
        ACE_bulletLength=1.24;
        ACE_bulletMass=130;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.377};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={838, 892, 910};
        ACE_barrelLengths[]={13, 16, 20};
    };
    class ACE_762x51_Ball_M993_AP : B_762x51_Ball {
        airFriction=-0.00103;
        caliber=2.2;
        hit=11;
        typicalSpeed=930;
        ACE_caliber=0.308;
        ACE_bulletLength=1.24;
        ACE_bulletMass=127;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.377};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={875, 910, 930};
        ACE_barrelLengths[]={13, 16, 20};
    };
    class ACE_762x51_Ball_Subsonic : B_762x51_Ball {
        airFriction=-0.000535;
        caliber=1;
        hit=6;
        typicalSpeed=320;
        ACE_caliber=0.308;
        ACE_bulletLength=1.340;
        ACE_bulletMass=200;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.235};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={305, 325, 335, 340};
        ACE_barrelLengths[]={16, 20, 24, 26};
    };
    class ACE_30_06_M1_Ball : B_762x51_Ball {
        airFriction=-0.0009;
        typicalSpeed=800;
        caliber=2.0;
        hit=10;
        ACE_caliber=0.308;
        ACE_bulletLength=1.21;
        ACE_bulletMass=174;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.494};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 785, 800, 830, 840};
        ACE_barrelLengths[]={10, 16, 20, 24, 26};
    };
    class ACE_7_Remington_Magnum_Ball : B_762x51_Ball {
        airFriction=-0.0008;
        typicalSpeed=820;
        caliber=2.1;
        hit=8;
        ACE_caliber=0.284;
        ACE_bulletLength=1.529;
        ACE_bulletMass=180;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.345};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={720, 780, 812, 822, 830};
        ACE_barrelLengths[]={10, 16, 20, 24, 26};
    };
    class ACE_243_Winchester_Ball : B_762x51_Ball {
        airFriction=-0.00095;
        typicalSpeed=915;
        caliber=2.3;
        hit=6;
        ACE_caliber=0.243;
        ACE_bulletLength=1.282;
        ACE_bulletMass=180;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.278};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={830, 875, 900, 915, 920};
        ACE_barrelLengths[]={10, 16, 20, 24, 26};
    };
    class ACE_762x67_Ball_Mk248_Mod_0 : B_762x51_Ball {
        airFriction=-0.000830;
        caliber=1.8;
        hit=17;
        typicalSpeed=900;
        ACE_caliber=0.308;
        ACE_bulletLength=1.353;
        ACE_bulletMass=190;
        ACE_ammoTempMuzzleVelocityShifts[]={-5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2};
        ACE_ballisticCoefficients[]={0.268};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={865, 900, 924};
        ACE_barrelLengths[]={20, 24, 26};
    };
    class ACE_762x67_Ball_Mk248_Mod_1 : B_762x51_Ball {
        airFriction=-0.000815;
        caliber=1.9;
        hit=18;
        typicalSpeed=867;
        ACE_caliber=0.308;
        ACE_bulletLength=1.489;
        ACE_bulletMass=220;
        ACE_ammoTempMuzzleVelocityShifts[]={-5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2};
        ACE_ballisticCoefficients[]={0.310};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={847, 867, 877};
        ACE_barrelLengths[]={20, 24, 26};
    };
    class ACE_762x67_Ball_Berger_Hybrid_OTM : B_762x51_Ball {
        airFriction=-0.00076;
        caliber=2.0;
        hit=19;
        typicalSpeed=853;
        ACE_caliber=0.308;
        ACE_bulletLength=1.602;
        ACE_bulletMass=230;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.368};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={800, 853, 884};
        ACE_barrelLengths[]={20, 24, 26};
    };
    class B_762x54_Ball: B_762x51_Ball {
        airFriction=-0.001023;
        typicalSpeed=820;
        ACE_caliber=0.312;
        ACE_bulletLength=1.14;
        ACE_bulletMass=152;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.4};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 800, 820, 833};
        ACE_barrelLengths[]={16, 20, 24, 26};
    };
    class ACE_762x54_Ball_7N14 : B_762x51_Ball {
        airFriction=-0.001023;
        caliber=1.5;
        hit=15;
        typicalSpeed=820;
        ACE_caliber=0.312;
        ACE_bulletLength=1.14;
        ACE_bulletMass=152;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.4};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 800, 820, 833};
        ACE_barrelLengths[]={16, 20, 24, 26};
    };
    class B_762x54_Tracer_Green;
    class ACE_762x54_Ball_7T2 : B_762x54_Tracer_Green {
        airFriction=-0.001023;
        caliber=1.5;
        hit=15;
        typicalSpeed=800;
        tracerStartTime = 0.073;            //Based on the 7T2 which burns three seconds
        tracerEndTime = 3;
        ACE_caliber=0.312;
        ACE_bulletLength=1.14;
        ACE_bulletMass=149;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.395};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={680, 750, 798, 800};
        ACE_barrelLengths[]={16, 20, 24, 26};
    };
    class ACE_762x35_Ball : B_762x51_Ball {
        airFriction=-0.000821;
        caliber=1.5;
        hit=11;
        typicalSpeed=790;
        ACE_caliber=0.308;
        ACE_bulletLength=1.153;
        ACE_bulletMass=125;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.349, 0.338, 0.330, 0.310};
        ACE_velocityBoundaries[]={792, 610, 488};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={620, 655, 675};
        ACE_barrelLengths[]={9, 16, 20};
    };
    class ACE_762x39_Ball : B_762x51_Ball {
        airFriction=-0.0015168;
        hit=12;
        caliber=1.5;
        typicalSpeed=716;
        ACE_caliber=0.308;
        ACE_bulletLength=1.14;
        ACE_bulletMass=123;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.275};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={650, 716, 750};
        ACE_barrelLengths[]={10, 16.3, 20};
    };
    class ACE_762x39_Ball_57N231P : B_762x54_Tracer_Green {
        airFriction=-0.0015168;
        hit=12;
        caliber=1.5;
        typicalSpeed=716;
        tracerStartTime = 0.073;            //57N231P tracer burns out to 800m
        tracerEndTime = 2.082;              //Time in seconds calculated with ballistics calculator
        ACE_caliber=0.308;
        ACE_bulletLength=1.14;
        ACE_bulletMass=117;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.275};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={650, 716, 750};
        ACE_barrelLengths[]={10, 16.3, 20};
    };
    class B_9x21_Ball : BulletBase {
        airFriction=-0.00125;
        typicalSpeed=390;
        hit=6;
        ACE_caliber=0.356;
        ACE_bulletLength=0.610;
        ACE_bulletMass=115;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.17};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={440, 460, 480};
        ACE_barrelLengths[]={4, 5, 9};
    };
    class ACE_9x18_Ball_57N181S : B_9x21_Ball {
        hit=5;
        airFriction=-0.001234;
        typicalSpeed=298;
        ACE_caliber=0.365;
        ACE_bulletLength=0.610;
        ACE_bulletMass=92.6;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.125};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={298, 330, 350};
        ACE_barrelLengths[]={3.8, 5, 9};
    };
    class ACE_9x19_Ball : B_9x21_Ball {
        airFriction=-0.001234;
        typicalSpeed=370;
        hit=6;
        ACE_caliber=0.355;
        ACE_bulletLength=0.610;
        ACE_bulletMass=124;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 400};
        ACE_barrelLengths[]={4, 5, 9};
    };
    class ACE_10x25_Ball : B_9x21_Ball {
        airFriction=-0.00168;
        typicalSpeed=425;
        hit=7;
        ACE_caliber=0.5;
        ACE_bulletLength=0.764;
        ACE_bulletMass=165;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.189};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={360, 400, 430};
        ACE_barrelLengths[]={4, 4.61, 9};
    };
    class ACE_765x17_Ball: B_9x21_Ball {
        airFriction=-0.001213;
        typicalSpeed=282;
        hit=7;
        ACE_caliber=0.3125;
        ACE_bulletLength=0.610;
        ACE_bulletMass=65;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.118};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={282, 300, 320};
        ACE_barrelLengths[]={4, 5, 9};
    };
    class ACE_303_Ball : ACE_762x51_Ball_M118LR {
        airFriction=-0.00083;
        typicalSpeed=761;
        caliber=2.0;
        ACE_caliber=0.311;
        ACE_bulletLength=1.227;
        ACE_bulletMass=174;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.499, 0.493, 0.48};
        ACE_velocityBoundaries[]={671, 549};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={748, 761, 765};
        ACE_barrelLengths[]={20, 24, 26};
    };
    class B_93x64_Ball : BulletBase {
        airFriction=-0.00106;
        typicalSpeed=880;
        ACE_caliber=0.366;
        ACE_bulletLength=1.350;
        ACE_bulletMass=230;
        ACE_transonicStabilityCoef=1;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.368};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={850, 870, 880};
        ACE_barrelLengths[]={20, 24.41, 26};
    };
    class B_408_Ball : BulletBase {
        timeToLive=10;
        airFriction=-0.000395;
        typicalSpeed=910;
        ACE_caliber=0.408;
        ACE_bulletLength=2.126;
        ACE_bulletMass=410;
        ACE_transonicStabilityCoef=1;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.97};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={910};
        ACE_barrelLengths[]={29};
    };
    class ACE_106x83mm_Ball : B_408_Ball {
        timeToLive=10;
        ACE_caliber=0.416;
        ACE_bulletLength=2.089;
        ACE_bulletMass=398;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.72};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={960};
        ACE_barrelLengths[]={29};
    };
    class B_338_Ball : BulletBase {
        timeToLive=10;
        airFriction=-0.000606;
        typicalSpeed=915;
        ACE_caliber=0.338;
        ACE_bulletLength=1.558;
        ACE_bulletMass=250;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.322};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={880, 915, 925};
        ACE_barrelLengths[]={20, 26, 28};
    };
    class B_338_NM_Ball : BulletBase {
        airFriction=-0.000537;
        typicalSpeed=820;
        ACE_caliber=0.338;
        ACE_bulletLength=1.70;
        ACE_bulletMass=300;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.381};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={790, 807, 820};
        ACE_barrelLengths[]={20, 24, 26};
    };
    class ACE_338_Ball : B_338_Ball {
        timeToLive=10;
        airFriction=-0.000535;
        typicalSpeed=826;
        ACE_caliber=0.338;
        ACE_bulletLength=1.70;
        ACE_bulletMass=300;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.381};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={800, 820, 826, 830};
        ACE_barrelLengths[]={20, 24, 26.5, 28};
    };
    class ACE_338_Ball_API526 : B_338_Ball {
        timeToLive=10;
        airFriction=-0.000673;
        caliber=2.8;
        typicalSpeed=826;
        ACE_caliber=0.338;
        ACE_bulletLength=1.535;
        ACE_bulletMass=253;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.290};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={880, 915, 925};
        ACE_barrelLengths[]={20, 26, 28};
    };
    class B_127x54_Ball : BulletBase {
        airFriction=-0.00014;
        typicalSpeed=300;
        ACE_caliber=0.510;
        ACE_bulletLength=2.540;
        ACE_bulletMass=750;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={1.050};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={300};
        ACE_barrelLengths[]={17.2};
    };
    class B_127x99_Ball : BulletBase {
        timeToLive=10;
        airFriction=-0.0006;
        typicalSpeed=900;
        ACE_caliber=0.510;
        ACE_bulletLength=2.310;
        ACE_bulletMass=647;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.670};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={900};
        ACE_barrelLengths[]={29};
    };
    class ACE_127x99_API : BulletBase {
        timeToLive=10;
        airFriction=-0.0006;
        typicalSpeed=900;
        hit=25;
        caliber=4.0;
        ACE_caliber=0.510;
        ACE_bulletLength=2.310;
        ACE_bulletMass=648;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.670};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={900};
        ACE_barrelLengths[]={29};
    };
    class ACE_127x99_Ball_AMAX : B_127x99_Ball {
        timeToLive=10;
        airFriction=-0.000374;
        typicalSpeed=860;
        caliber=3.0;
        ACE_caliber=0.510;
        ACE_bulletLength=2.540;
        ACE_bulletMass=750;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={1.050};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={860};
        ACE_barrelLengths[]={29};
    };
    class B_127x108_Ball : BulletBase {
        timeToLive=10;
        airFriction=-0.00064;
        typicalSpeed=820;
        ACE_caliber=0.511;
        ACE_bulletLength=2.520;
        ACE_bulletMass=745;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.63};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={820};
        ACE_barrelLengths[]={28.7};
    };
    class B_45ACP_Ball : BulletBase {
        airFriction=-0.0007182;
        typicalSpeed=250;
        ACE_caliber=0.452;
        ACE_bulletLength=0.68;
        ACE_bulletMass=230;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.195};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={230, 250, 285};
        ACE_barrelLengths[]={4, 5, 9};
    };
};
