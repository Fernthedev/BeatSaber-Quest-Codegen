// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerSpecificSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerSpecificSettings : public ::Il2CppObject {
    public:
    // public System.Boolean staticLights
    // Size: 0x1
    // Offset: 0x10
    bool staticLights;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean leftHanded
    // Size: 0x1
    // Offset: 0x11
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean swapColors
    // Size: 0x1
    // Offset: 0x12
    bool swapColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: swapColors and: playerHeight
    char __padding2[0x1] = {};
    // public System.Single playerHeight
    // Size: 0x4
    // Offset: 0x14
    float playerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean disableSFX
    // Size: 0x1
    // Offset: 0x18
    bool disableSFX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean reduceDebris
    // Size: 0x1
    // Offset: 0x19
    bool reduceDebris;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean advancedHud
    // Size: 0x1
    // Offset: 0x1A
    bool advancedHud;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noTextsAndHuds
    // Size: 0x1
    // Offset: 0x1B
    bool noTextsAndHuds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerSpecificSettings
    PlayerSpecificSettings(bool staticLights_ = {}, bool leftHanded_ = {}, bool swapColors_ = {}, float playerHeight_ = {}, bool disableSFX_ = {}, bool reduceDebris_ = {}, bool advancedHud_ = {}, bool noTextsAndHuds_ = {}) noexcept : staticLights{staticLights_}, leftHanded{leftHanded_}, swapColors{swapColors_}, playerHeight{playerHeight_}, disableSFX{disableSFX_}, reduceDebris{reduceDebris_}, advancedHud{advancedHud_}, noTextsAndHuds{noTextsAndHuds_} {}
    // Get instance field: public System.Boolean staticLights
    bool _get_staticLights();
    // Set instance field: public System.Boolean staticLights
    void _set_staticLights(bool value);
    // Get instance field: public System.Boolean leftHanded
    bool _get_leftHanded();
    // Set instance field: public System.Boolean leftHanded
    void _set_leftHanded(bool value);
    // Get instance field: public System.Boolean swapColors
    bool _get_swapColors();
    // Set instance field: public System.Boolean swapColors
    void _set_swapColors(bool value);
    // Get instance field: public System.Single playerHeight
    float _get_playerHeight();
    // Set instance field: public System.Single playerHeight
    void _set_playerHeight(float value);
    // Get instance field: public System.Boolean disableSFX
    bool _get_disableSFX();
    // Set instance field: public System.Boolean disableSFX
    void _set_disableSFX(bool value);
    // Get instance field: public System.Boolean reduceDebris
    bool _get_reduceDebris();
    // Set instance field: public System.Boolean reduceDebris
    void _set_reduceDebris(bool value);
    // Get instance field: public System.Boolean advancedHud
    bool _get_advancedHud();
    // Set instance field: public System.Boolean advancedHud
    void _set_advancedHud(bool value);
    // Get instance field: public System.Boolean noTextsAndHuds
    bool _get_noTextsAndHuds();
    // Set instance field: public System.Boolean noTextsAndHuds
    void _set_noTextsAndHuds(bool value);
    // public System.Void .ctor()
    // Offset: 0x113B638
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerSpecificSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerSpecificSettings*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerSpecificSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerSpecificSettings), 27 + sizeof(bool)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerSpecificSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerSpecificSettings) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*, "", "PlayerSaveDataV1_0_1/PlayerSpecificSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
