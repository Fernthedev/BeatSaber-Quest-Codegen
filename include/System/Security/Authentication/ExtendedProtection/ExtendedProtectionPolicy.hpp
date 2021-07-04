// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Security.Authentication.ExtendedProtection.PolicyEnforcement
#include "System/Security/Authentication/ExtendedProtection/PolicyEnforcement.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Authentication.ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
  // [MonoTODOAttribute] Offset: D87C08
  // [TypeConverterAttribute] Offset: D87C08
  class ExtendedProtectionPolicy : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: ExtendedProtectionPolicy
    ExtendedProtectionPolicy() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Void .ctor(System.Security.Authentication.ExtendedProtection.PolicyEnforcement policyEnforcement)
    // Offset: 0x15CDE18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtendedProtectionPolicy* New_ctor(System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtendedProtectionPolicy*, creationType>(policyEnforcement)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x15CDE20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtendedProtectionPolicy* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtendedProtectionPolicy*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x15CDE98
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x15CDE90
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicy");
// Writing includes for template specializations
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Writing MetadataGetter for method: System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::*)()>(&System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
