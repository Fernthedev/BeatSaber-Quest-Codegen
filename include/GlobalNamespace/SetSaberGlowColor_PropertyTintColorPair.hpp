// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SetSaberGlowColor
#include "GlobalNamespace/SetSaberGlowColor.hpp"
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
  // Autogenerated type: SetSaberGlowColor/PropertyTintColorPair
  class SetSaberGlowColor::PropertyTintColorPair : public ::Il2CppObject {
    public:
    // public UnityEngine.Color tintColor
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color tintColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.String property
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* property;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PropertyTintColorPair
    PropertyTintColorPair(UnityEngine::Color tintColor_ = {}, ::Il2CppString* property_ = {}) noexcept : tintColor{tintColor_}, property{property_} {}
    // public System.Void .ctor()
    // Offset: 0x10DC630
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberGlowColor::PropertyTintColorPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetSaberGlowColor::PropertyTintColorPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberGlowColor::PropertyTintColorPair*, creationType>()));
    }
  }; // SetSaberGlowColor/PropertyTintColorPair
  #pragma pack(pop)
  static check_size<sizeof(SetSaberGlowColor::PropertyTintColorPair), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_SetSaberGlowColor_PropertyTintColorPairSizeCheck;
  static_assert(sizeof(SetSaberGlowColor::PropertyTintColorPair) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberGlowColor::PropertyTintColorPair*, "", "SetSaberGlowColor/PropertyTintColorPair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetSaberGlowColor::PropertyTintColorPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
