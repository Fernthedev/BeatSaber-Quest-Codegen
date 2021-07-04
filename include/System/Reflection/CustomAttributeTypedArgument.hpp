// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.CustomAttributeTypedArgument
  // [ComVisibleAttribute] Offset: D7C288
  struct CustomAttributeTypedArgument/*, public System::ValueType*/ {
    public:
    // private System.Type argumentType
    // Size: 0x8
    // Offset: 0x0
    System::Type* argumentType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Object value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: CustomAttributeTypedArgument
    constexpr CustomAttributeTypedArgument(System::Type* argumentType_ = {}, ::Il2CppObject* value_ = {}) noexcept : argumentType{argumentType_}, value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Type argumentType, System.Object value)
    // Offset: 0xF0977C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  CustomAttributeTypedArgument(System::Type* argumentType, ::Il2CppObject* value)
    // public override System.String ToString()
    // Offset: 0xF09784
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF0978C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF09794
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.CustomAttributeTypedArgument
  #pragma pack(pop)
  static check_size<sizeof(CustomAttributeTypedArgument), 8 + sizeof(::Il2CppObject*)> __System_Reflection_CustomAttributeTypedArgumentSizeCheck;
  static_assert(sizeof(CustomAttributeTypedArgument) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeTypedArgument, "System.Reflection", "CustomAttributeTypedArgument");
// Writing includes for template specializations
#include "System/Type.hpp"
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::CustomAttributeTypedArgument
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::CustomAttributeTypedArgument::*)()>(&System::Reflection::CustomAttributeTypedArgument::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeTypedArgument), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::CustomAttributeTypedArgument::*)(::Il2CppObject*)>(&System::Reflection::CustomAttributeTypedArgument::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeTypedArgument), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::CustomAttributeTypedArgument::*)()>(&System::Reflection::CustomAttributeTypedArgument::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeTypedArgument), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
