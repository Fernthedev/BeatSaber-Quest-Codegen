// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/ColorScheme
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::ColorScheme : public ::Il2CppObject {
    public:
    // public System.String colorSchemeId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* colorSchemeId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public UnityEngine.Color saberAColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color saberAColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color saberBColor
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color saberBColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color environmentColor0
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Color environmentColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color environmentColor1
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Color environmentColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color obstaclesColor
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Color obstaclesColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: ColorScheme
    ColorScheme(::Il2CppString* colorSchemeId_ = {}, UnityEngine::Color saberAColor_ = {}, UnityEngine::Color saberBColor_ = {}, UnityEngine::Color environmentColor0_ = {}, UnityEngine::Color environmentColor1_ = {}, UnityEngine::Color obstaclesColor_ = {}) noexcept : colorSchemeId{colorSchemeId_}, saberAColor{saberAColor_}, saberBColor{saberBColor_}, environmentColor0{environmentColor0_}, environmentColor1{environmentColor1_}, obstaclesColor{obstaclesColor_} {}
    // Get instance field reference: public System.String colorSchemeId
    ::Il2CppString*& dyn_colorSchemeId();
    // Get instance field reference: public UnityEngine.Color saberAColor
    UnityEngine::Color& dyn_saberAColor();
    // Get instance field reference: public UnityEngine.Color saberBColor
    UnityEngine::Color& dyn_saberBColor();
    // Get instance field reference: public UnityEngine.Color environmentColor0
    UnityEngine::Color& dyn_environmentColor0();
    // Get instance field reference: public UnityEngine.Color environmentColor1
    UnityEngine::Color& dyn_environmentColor1();
    // Get instance field reference: public UnityEngine.Color obstaclesColor
    UnityEngine::Color& dyn_obstaclesColor();
    // public System.Void .ctor(System.String colorSchemeId, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, UnityEngine.Color obstaclesColor)
    // Offset: 0x11F6E14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::ColorScheme* New_ctor(::Il2CppString* colorSchemeId, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color obstaclesColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::ColorScheme*, creationType>(colorSchemeId, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor)));
    }
  }; // PlayerSaveData/ColorScheme
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::ColorScheme), 88 + sizeof(UnityEngine::Color)> __GlobalNamespace_PlayerSaveData_ColorSchemeSizeCheck;
  static_assert(sizeof(PlayerSaveData::ColorScheme) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::ColorScheme*, "", "PlayerSaveData/ColorScheme");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::ColorScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
