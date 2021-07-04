// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.AssertionConditionType
#include "JetBrains/Annotations/AssertionConditionType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AssertionConditionAttribute
  // [AttributeUsageAttribute] Offset: DCAE80
  class AssertionConditionAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCB3F8
    // private JetBrains.Annotations.AssertionConditionType <ConditionType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    JetBrains::Annotations::AssertionConditionType ConditionType;
    // Field size check
    static_assert(sizeof(JetBrains::Annotations::AssertionConditionType) == 0x4);
    // Creating value type constructor for type: AssertionConditionAttribute
    AssertionConditionAttribute(JetBrains::Annotations::AssertionConditionType ConditionType_ = {}) noexcept : ConditionType{ConditionType_} {}
    // Creating conversion operator: operator JetBrains::Annotations::AssertionConditionType
    constexpr operator JetBrains::Annotations::AssertionConditionType() const noexcept {
      return ConditionType;
    }
    // public System.Void .ctor(JetBrains.Annotations.AssertionConditionType conditionType)
    // Offset: 0x23DB214
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssertionConditionAttribute* New_ctor(JetBrains::Annotations::AssertionConditionType conditionType) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AssertionConditionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssertionConditionAttribute*, creationType>(conditionType)));
    }
    // public JetBrains.Annotations.AssertionConditionType get_ConditionType()
    // Offset: 0x23DB240
    JetBrains::Annotations::AssertionConditionType get_ConditionType();
    // private System.Void set_ConditionType(JetBrains.Annotations.AssertionConditionType value)
    // Offset: 0x23DB248
    void set_ConditionType(JetBrains::Annotations::AssertionConditionType value);
  }; // JetBrains.Annotations.AssertionConditionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssertionConditionAttribute), 16 + sizeof(JetBrains::Annotations::AssertionConditionType)> __JetBrains_Annotations_AssertionConditionAttributeSizeCheck;
  static_assert(sizeof(AssertionConditionAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AssertionConditionAttribute*, "JetBrains.Annotations", "AssertionConditionAttribute");
// Writing includes for template specializations
// Writing MetadataGetter for method: JetBrains::Annotations::AssertionConditionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::AssertionConditionAttribute::get_ConditionType
// Il2CppName: get_ConditionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<JetBrains::Annotations::AssertionConditionType (JetBrains::Annotations::AssertionConditionAttribute::*)()>(&JetBrains::Annotations::AssertionConditionAttribute::get_ConditionType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AssertionConditionAttribute*), "get_ConditionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AssertionConditionAttribute::set_ConditionType
// Il2CppName: set_ConditionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AssertionConditionAttribute::*)(JetBrains::Annotations::AssertionConditionType)>(&JetBrains::Annotations::AssertionConditionAttribute::set_ConditionType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AssertionConditionAttribute*), "set_ConditionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<JetBrains::Annotations::AssertionConditionType>()});
  }
};
