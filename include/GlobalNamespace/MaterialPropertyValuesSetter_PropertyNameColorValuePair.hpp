// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MaterialPropertyValuesSetter
#include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
// Including type: MaterialPropertyValuesSetter/PropertyValuePairBase
#include "GlobalNamespace/MaterialPropertyValuesSetter_PropertyValuePairBase.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyValuesSetter/PropertyNameColorValuePair
  class MaterialPropertyValuesSetter::PropertyNameColorValuePair : public GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase {
    public:
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: PropertyNameColorValuePair
    PropertyNameColorValuePair(UnityEngine::Color color_ = {}) noexcept : color{color_} {}
    // Creating conversion operator: operator UnityEngine::Color
    constexpr operator UnityEngine::Color() const noexcept {
      return color;
    }
    // public System.Void .ctor()
    // Offset: 0x1D8F5B4
    // Implemented from: MaterialPropertyValuesSetter/PropertyValuePairBase
    // Base method: System.Void PropertyValuePairBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyValuesSetter::PropertyNameColorValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyValuesSetter::PropertyNameColorValuePair*, creationType>()));
    }
  }; // MaterialPropertyValuesSetter/PropertyNameColorValuePair
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyValuesSetter::PropertyNameColorValuePair), 28 + sizeof(UnityEngine::Color)> __GlobalNamespace_MaterialPropertyValuesSetter_PropertyNameColorValuePairSizeCheck;
  static_assert(sizeof(MaterialPropertyValuesSetter::PropertyNameColorValuePair) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameColorValuePair");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
