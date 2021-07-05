// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ColorManager
  class ColorManager : public ::Il2CppObject {
    public:
    // [InjectAttribute] Offset: 0xE27ACC
    // private readonly ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // Creating value type constructor for type: ColorManager
    ColorManager(GlobalNamespace::ColorScheme* colorScheme_ = {}) noexcept : colorScheme{colorScheme_} {}
    // Creating conversion operator: operator GlobalNamespace::ColorScheme*
    constexpr operator GlobalNamespace::ColorScheme*() const noexcept {
      return colorScheme;
    }
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x1190DAC
    UnityEngine::Color get_obstaclesColor();
    // public UnityEngine.Color ColorForType(ColorType type)
    // Offset: 0x1190DCC
    UnityEngine::Color ColorForType(GlobalNamespace::ColorType type);
    // public UnityEngine.Color ColorForSaberType(SaberType type)
    // Offset: 0x1190E1C
    UnityEngine::Color ColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color EffectsColorForSaberType(SaberType type)
    // Offset: 0x1190E70
    UnityEngine::Color EffectsColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color GetObstacleEffectColor()
    // Offset: 0x1190F08
    UnityEngine::Color GetObstacleEffectColor();
    // public System.Void .ctor()
    // Offset: 0x1190F6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorManager*, creationType>()));
    }
  }; // ColorManager
  #pragma pack(pop)
  static check_size<sizeof(ColorManager), 16 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_ColorManagerSizeCheck;
  static_assert(sizeof(ColorManager) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorManager*, "", "ColorManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::get_obstaclesColor
// Il2CppName: get_obstaclesColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorManager::*)()>(&GlobalNamespace::ColorManager::get_obstaclesColor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "get_obstaclesColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::ColorForType
// Il2CppName: ColorForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorManager::*)(GlobalNamespace::ColorType)>(&GlobalNamespace::ColorManager::ColorForType)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "ColorForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::ColorForSaberType
// Il2CppName: ColorForSaberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorManager::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::ColorManager::ColorForSaberType)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "ColorForSaberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::EffectsColorForSaberType
// Il2CppName: EffectsColorForSaberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorManager::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::ColorManager::EffectsColorForSaberType)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "EffectsColorForSaberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::GetObstacleEffectColor
// Il2CppName: GetObstacleEffectColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorManager::*)()>(&GlobalNamespace::ColorManager::GetObstacleEffectColor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorManager*), "GetObstacleEffectColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
