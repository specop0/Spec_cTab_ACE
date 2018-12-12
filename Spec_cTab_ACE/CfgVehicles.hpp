class CfgVehicles {
    class Man;
    
    class CAManBase : Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class Spec_cTab_android {
                    displayName = "$STR_cTab_Android";
                    condition = "Spec_cTab_ace_enabled && [player,['ACE_GD300_b']] call cTab_fnc_checkGear";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "Spec_cTab_ACE\resources\android.paa";
                    statement = "if ([player,vehicle player,'FBCB2'] call cTab_fnc_unitInEnabledVehicleSeat) then { call cTab_fnc_onIfTertiaryPressed; } else { call cTab_fnc_onIfSecondaryPressed; };";
                    class Spec_cTab_android_dock {
                        displayName = "$STR_cTab_Dock";
                        condition = "isNil 'cTabIfOpen'";
                        exceptions[] = {"isNotInside", "isNotSitting"};
                        statement = "call cTab_fnc_onIfMainPressed";
                    };
                    class Spec_cTab_android_close {
                        displayName = "$STR_cTab_Undock";
                        condition = "!(isNil 'cTabIfOpen')";
                        exceptions[] = {"isNotInside", "isNotSitting"};
                        statement = "call cTab_fnc_close";
                    };
                };
                class Spec_cTab_tablet {
                    displayName = "$STR_cTab_Tablet";
                    condition = "Spec_cTab_ace_enabled && ([player,['ACE_DK10_b']] call cTab_fnc_checkGear || [player,vehicle player,'FBCB2'] call cTab_fnc_unitInEnabledVehicleSeat)";
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "Spec_cTab_ACE\resources\tablet.paa";
                    statement = "if ([player,['ACE_DK10_b']] call cTab_fnc_checkGear) then { call cTab_fnc_onIfTertiaryPressed; } else { call cTab_fnc_onIfSecondaryPressed; };";
                };
            };
        };
    };
};