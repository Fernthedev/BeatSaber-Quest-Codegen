// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.RuntimeParameterInfo
#include "System/Reflection/RuntimeParameterInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Skipping declaration: ParameterInfo because it is already included!
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MonoParameterInfo
  class MonoParameterInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MonoParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoParameterInfo*, "System.Reflection", "MonoParameterInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoParameterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComDefaultInterfaceAttribute] Offset: 10420F4
  // [ComVisibleAttribute] Offset: 10420F4
  // [ClassInterfaceAttribute] Offset: 10420F4
  class MonoParameterInfo : public ::System::Reflection::RuntimeParameterInfo {
    public:
    // System.Void .ctor(System.Reflection.ParameterInfo pinfo, System.Reflection.MemberInfo member)
    // Offset: 0x1D6CE34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoParameterInfo* New_ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoParameterInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoParameterInfo*, creationType>(pinfo, member)));
    }
    // public override System.Object get_DefaultValue()
    // Offset: 0x1D6CED4
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Object ParameterInfo::get_DefaultValue()
    ::Il2CppObject* get_DefaultValue();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1D6D118
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Object[] ParameterInfo::GetCustomAttributes(System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1D6D190
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Object[] ParameterInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1D6D210
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Boolean ParameterInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(::System::Type* attributeType, bool inherit);
  }; // System.Reflection.MonoParameterInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::get_DefaultValue
// Il2CppName: get_DefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoParameterInfo::*)()>(&System::Reflection::MonoParameterInfo::get_DefaultValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoParameterInfo*), "get_DefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoParameterInfo::*)(bool)>(&System::Reflection::MonoParameterInfo::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoParameterInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoParameterInfo::*)(::System::Type*, bool)>(&System::Reflection::MonoParameterInfo::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoParameterInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoParameterInfo::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoParameterInfo::*)(::System::Type*, bool)>(&System::Reflection::MonoParameterInfo::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoParameterInfo*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
