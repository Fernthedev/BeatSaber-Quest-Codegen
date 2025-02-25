// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestAssembly
  class TestAssembly;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ActionsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ActionsHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ActionsHelper
    ActionsHelper() noexcept {}
    // static public NUnit.Framework.ITestAction[] GetActionsFromTestAssembly(NUnit.Framework.Internal.TestAssembly testAssembly)
    // Offset: 0x1777CC8
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromTestAssembly(NUnit::Framework::Internal::TestAssembly* testAssembly);
    // static public NUnit.Framework.ITestAction[] GetActionsFromTestMethodInfo(NUnit.Framework.Interfaces.IMethodInfo testAssembly)
    // Offset: 0x1777EBC
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromTestMethodInfo(NUnit::Framework::Interfaces::IMethodInfo* testAssembly);
    // static public NUnit.Framework.ITestAction[] GetActionsFromAttributeProvider(System.Reflection.ICustomAttributeProvider attributeProvider)
    // Offset: 0x1777CE0
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromAttributeProvider(System::Reflection::ICustomAttributeProvider* attributeProvider);
    // static public NUnit.Framework.ITestAction[] GetActionsFromTypesAttributes(System.Type type)
    // Offset: 0x1777F70
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromTypesAttributes(System::Type* type);
    // static private System.Type[] GetDeclaredInterfaces(System.Type type)
    // Offset: 0x1778108
    static ::Array<System::Type*>* GetDeclaredInterfaces(System::Type* type);
    // static private System.Int32 SortByTargetDescending(NUnit.Framework.ITestAction x, NUnit.Framework.ITestAction y)
    // Offset: 0x1778380
    static int SortByTargetDescending(NUnit::Framework::ITestAction* x, NUnit::Framework::ITestAction* y);
  }; // NUnit.Framework.Internal.ActionsHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ActionsHelper*, "NUnit.Framework.Internal", "ActionsHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::ActionsHelper::GetActionsFromTestAssembly
// Il2CppName: GetActionsFromTestAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::ITestAction*>* (*)(NUnit::Framework::Internal::TestAssembly*)>(&NUnit::Framework::Internal::ActionsHelper::GetActionsFromTestAssembly)> {
  static const MethodInfo* get() {
    static auto* testAssembly = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestAssembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ActionsHelper*), "GetActionsFromTestAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testAssembly});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ActionsHelper::GetActionsFromTestMethodInfo
// Il2CppName: GetActionsFromTestMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::ITestAction*>* (*)(NUnit::Framework::Interfaces::IMethodInfo*)>(&NUnit::Framework::Internal::ActionsHelper::GetActionsFromTestMethodInfo)> {
  static const MethodInfo* get() {
    static auto* testAssembly = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IMethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ActionsHelper*), "GetActionsFromTestMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testAssembly});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ActionsHelper::GetActionsFromAttributeProvider
// Il2CppName: GetActionsFromAttributeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::ITestAction*>* (*)(System::Reflection::ICustomAttributeProvider*)>(&NUnit::Framework::Internal::ActionsHelper::GetActionsFromAttributeProvider)> {
  static const MethodInfo* get() {
    static auto* attributeProvider = &::il2cpp_utils::GetClassFromName("System.Reflection", "ICustomAttributeProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ActionsHelper*), "GetActionsFromAttributeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeProvider});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ActionsHelper::GetActionsFromTypesAttributes
// Il2CppName: GetActionsFromTypesAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::ITestAction*>* (*)(System::Type*)>(&NUnit::Framework::Internal::ActionsHelper::GetActionsFromTypesAttributes)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ActionsHelper*), "GetActionsFromTypesAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ActionsHelper::GetDeclaredInterfaces
// Il2CppName: GetDeclaredInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Type*>* (*)(System::Type*)>(&NUnit::Framework::Internal::ActionsHelper::GetDeclaredInterfaces)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ActionsHelper*), "GetDeclaredInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ActionsHelper::SortByTargetDescending
// Il2CppName: SortByTargetDescending
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(NUnit::Framework::ITestAction*, NUnit::Framework::ITestAction*)>(&NUnit::Framework::Internal::ActionsHelper::SortByTargetDescending)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("NUnit.Framework", "ITestAction")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("NUnit.Framework", "ITestAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ActionsHelper*), "SortByTargetDescending", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
