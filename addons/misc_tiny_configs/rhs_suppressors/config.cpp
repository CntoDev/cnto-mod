/*
 * rhs supressors - loudness tweaks to suppressors
 */

class CfgPatches {
    class RHS_Suppressors {
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Weapons_F_Acc",
            "A3_Weapons_F_Mod",
            "ace_ballistics",  /* muzzle_snds_* overrides */
            "rhsusf_c_weapons"  /* rhsusf_silencer_base */
        };
    };
};


class CfgWeapons {
    class muzzle_snds_H;
    class InventoryMuzzleItem_Base_F;

    /* RHS US suppressors in general; equivalent to 6.5mm from silent_ops */
    class rhsusf_silencer_base : muzzle_snds_H {
        class ItemInfo : InventoryMuzzleItem_Base_F {
            class AmmoCoef {
                /* ~10m */
                audibleFire = 0.005;
                visibleFire = 0.005;
            };
        };
    };
};