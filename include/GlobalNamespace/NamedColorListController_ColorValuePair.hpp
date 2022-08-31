// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NamedColorListController
#include "GlobalNamespace/NamedColorListController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NamedColorListController::ColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedColorListController::ColorValuePair*, "", "NamedColorListController/ColorValuePair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: NamedColorListController/ColorValuePair
  // [TokenAttribute] Offset: FFFFFFFF
  class NamedColorListController::ColorValuePair : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x20
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Int32 value
    [[deprecated("Use field access instead!")]] int& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x14E70F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedColorListController::ColorValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NamedColorListController::ColorValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedColorListController::ColorValuePair*, creationType>()));
    }
  }; // NamedColorListController/ColorValuePair
  #pragma pack(pop)
  static check_size<sizeof(NamedColorListController::ColorValuePair), 32 + sizeof(int)> __GlobalNamespace_NamedColorListController_ColorValuePairSizeCheck;
  static_assert(sizeof(NamedColorListController::ColorValuePair) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedColorListController::ColorValuePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
