// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MinAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DAEFE8
  class MinAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Single min
    // Size: 0x4
    // Offset: 0x10
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MinAttribute
    MinAttribute(float min_ = {}) noexcept : min{min_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return min;
    }
    // Get instance field reference: public readonly System.Single min
    float& dyn_min();
    // public System.Void .ctor(System.Single min)
    // Offset: 0x1D06564
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MinAttribute* New_ctor(float min) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::MinAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MinAttribute*, creationType>(min)));
    }
  }; // UnityEngine.MinAttribute
  #pragma pack(pop)
  static check_size<sizeof(MinAttribute), 16 + sizeof(float)> __UnityEngine_MinAttributeSizeCheck;
  static_assert(sizeof(MinAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MinAttribute*, "UnityEngine", "MinAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MinAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
