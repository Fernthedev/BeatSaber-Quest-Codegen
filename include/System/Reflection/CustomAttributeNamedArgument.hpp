// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Reflection.CustomAttributeTypedArgument
#include "System/Reflection/CustomAttributeTypedArgument.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.CustomAttributeNamedArgument
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA1464
  struct CustomAttributeNamedArgument/*, public System::ValueType*/ {
    public:
    // private System.Reflection.CustomAttributeTypedArgument typedArgument
    // Size: 0x10
    // Offset: 0x0
    System::Reflection::CustomAttributeTypedArgument typedArgument;
    // Field size check
    static_assert(sizeof(System::Reflection::CustomAttributeTypedArgument) == 0x10);
    // private System.Reflection.MemberInfo memberInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MemberInfo* memberInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::MemberInfo*) == 0x8);
    // Creating value type constructor for type: CustomAttributeNamedArgument
    constexpr CustomAttributeNamedArgument(System::Reflection::CustomAttributeTypedArgument typedArgument_ = {}, System::Reflection::MemberInfo* memberInfo_ = {}) noexcept : typedArgument{typedArgument_}, memberInfo{memberInfo_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Reflection.CustomAttributeTypedArgument typedArgument
    System::Reflection::CustomAttributeTypedArgument& dyn_typedArgument();
    // Get instance field reference: private System.Reflection.MemberInfo memberInfo
    System::Reflection::MemberInfo*& dyn_memberInfo();
    // public System.Void .ctor(System.Reflection.MemberInfo memberInfo, System.Object value)
    // Offset: 0x1D17C78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    CustomAttributeNamedArgument(System::Reflection::MemberInfo* memberInfo, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeNamedArgument::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(memberInfo), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, memberInfo, value);
    }
    // public override System.String ToString()
    // Offset: 0x1D16FB0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D17794
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D17BA8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.CustomAttributeNamedArgument
  #pragma pack(pop)
  static check_size<sizeof(CustomAttributeNamedArgument), 16 + sizeof(System::Reflection::MemberInfo*)> __System_Reflection_CustomAttributeNamedArgumentSizeCheck;
  static_assert(sizeof(CustomAttributeNamedArgument) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeNamedArgument, "System.Reflection", "CustomAttributeNamedArgument");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::CustomAttributeNamedArgument::CustomAttributeNamedArgument
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeNamedArgument::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::CustomAttributeNamedArgument::*)()>(&System::Reflection::CustomAttributeNamedArgument::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeNamedArgument), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeNamedArgument::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::CustomAttributeNamedArgument::*)(::Il2CppObject*)>(&System::Reflection::CustomAttributeNamedArgument::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeNamedArgument), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeNamedArgument::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::CustomAttributeNamedArgument::*)()>(&System::Reflection::CustomAttributeNamedArgument::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeNamedArgument), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
