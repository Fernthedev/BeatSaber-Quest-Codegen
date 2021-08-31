// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspMvcAreaAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DEB618
  class AspMvcAreaAttribute : public System::Attribute {
    public:
    // private System.String <AnonymousProperty>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* AnonymousProperty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AspMvcAreaAttribute
    AspMvcAreaAttribute(::Il2CppString* AnonymousProperty_ = {}) noexcept : AnonymousProperty{AnonymousProperty_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return AnonymousProperty;
    }
    // Get instance field: private System.String <AnonymousProperty>k__BackingField
    ::Il2CppString* _get_$AnonymousProperty$k__BackingField();
    // Set instance field: private System.String <AnonymousProperty>k__BackingField
    void _set_$AnonymousProperty$k__BackingField(::Il2CppString* value);
    // public System.String get_AnonymousProperty()
    // Offset: 0x2408048
    ::Il2CppString* get_AnonymousProperty();
    // private System.Void set_AnonymousProperty(System.String value)
    // Offset: 0x2408050
    void set_AnonymousProperty(::Il2CppString* value);
    // public System.Void .ctor(System.String anonymousProperty)
    // Offset: 0x240801C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcAreaAttribute* New_ctor(::Il2CppString* anonymousProperty) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcAreaAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcAreaAttribute*, creationType>(anonymousProperty)));
    }
    // public System.Void .ctor()
    // Offset: 0x2408014
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcAreaAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcAreaAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcAreaAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.AspMvcAreaAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcAreaAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_AspMvcAreaAttributeSizeCheck;
  static_assert(sizeof(AspMvcAreaAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcAreaAttribute*, "JetBrains.Annotations", "AspMvcAreaAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaAttribute::get_AnonymousProperty
// Il2CppName: get_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::AspMvcAreaAttribute::*)()>(&JetBrains::Annotations::AspMvcAreaAttribute::get_AnonymousProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcAreaAttribute*), "get_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaAttribute::set_AnonymousProperty
// Il2CppName: set_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspMvcAreaAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::AspMvcAreaAttribute::set_AnonymousProperty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcAreaAttribute*), "set_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
