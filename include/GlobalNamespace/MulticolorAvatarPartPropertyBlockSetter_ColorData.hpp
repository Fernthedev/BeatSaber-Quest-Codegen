// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MulticolorAvatarPartPropertyBlockSetter
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MulticolorAvatarPartPropertyBlockSetter/ColorData
  class MulticolorAvatarPartPropertyBlockSetter::ColorData : public ::Il2CppObject {
    public:
    // private UnityEngine.Color _defaultColor
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color defaultColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _darkerColorMultiplier
    // Size: 0x4
    // Offset: 0x20
    float darkerColorMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _whiteBoost
    // Size: 0x4
    // Offset: 0x24
    float whiteBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ColorData
    ColorData(UnityEngine::Color defaultColor_ = {}, float darkerColorMultiplier_ = {}, float whiteBoost_ = {}) noexcept : defaultColor{defaultColor_}, darkerColorMultiplier{darkerColorMultiplier_}, whiteBoost{whiteBoost_} {}
    // public UnityEngine.Color get_defaultColor()
    // Offset: 0x1145400
    UnityEngine::Color get_defaultColor();
    // public System.Single get_darkerColorMultiplier()
    // Offset: 0x114540C
    float get_darkerColorMultiplier();
    // public System.Single get_whiteBoost()
    // Offset: 0x1145414
    float get_whiteBoost();
    // public System.Void .ctor()
    // Offset: 0x114541C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticolorAvatarPartPropertyBlockSetter::ColorData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticolorAvatarPartPropertyBlockSetter::ColorData*, creationType>()));
    }
  }; // MulticolorAvatarPartPropertyBlockSetter/ColorData
  #pragma pack(pop)
  static check_size<sizeof(MulticolorAvatarPartPropertyBlockSetter::ColorData), 36 + sizeof(float)> __GlobalNamespace_MulticolorAvatarPartPropertyBlockSetter_ColorDataSizeCheck;
  static_assert(sizeof(MulticolorAvatarPartPropertyBlockSetter::ColorData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*, "", "MulticolorAvatarPartPropertyBlockSetter/ColorData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::get_defaultColor
// Il2CppName: get_defaultColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::get_defaultColor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*), "get_defaultColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::get_darkerColorMultiplier
// Il2CppName: get_darkerColorMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::get_darkerColorMultiplier)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*), "get_darkerColorMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::get_whiteBoost
// Il2CppName: get_whiteBoost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::get_whiteBoost)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*), "get_whiteBoost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
