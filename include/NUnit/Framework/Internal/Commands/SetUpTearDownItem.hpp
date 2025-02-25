// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.SetUpTearDownItem
  // [TokenAttribute] Offset: FFFFFFFF
  class SetUpTearDownItem : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _setUpMethods
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _tearDownMethods
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Boolean _setUpWasRun
    // Size: 0x1
    // Offset: 0x20
    bool setUpWasRun;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SetUpTearDownItem
    SetUpTearDownItem(System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods_ = {}, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods_ = {}, bool setUpWasRun_ = {}) noexcept : setUpMethods{setUpMethods_}, tearDownMethods{tearDownMethods_}, setUpWasRun{setUpWasRun_} {}
    // Get instance field reference: private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _setUpMethods
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>*& dyn__setUpMethods();
    // Get instance field reference: private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _tearDownMethods
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>*& dyn__tearDownMethods();
    // Get instance field reference: private System.Boolean _setUpWasRun
    bool& dyn__setUpWasRun();
    // public System.Boolean get_HasMethods()
    // Offset: 0x177EB00
    bool get_HasMethods();
    // public System.Void .ctor(System.Collections.Generic.IList`1<System.Reflection.MethodInfo> setUpMethods, System.Collections.Generic.IList`1<System.Reflection.MethodInfo> tearDownMethods)
    // Offset: 0x177EAC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetUpTearDownItem* New_ctor(System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::SetUpTearDownItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetUpTearDownItem*, creationType>(setUpMethods, tearDownMethods)));
    }
    // public System.Void RunSetUp(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x177DE60
    void RunSetUp(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public System.Void RunTearDown(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x177E7A4
    void RunTearDown(NUnit::Framework::Internal::ITestExecutionContext* context);
    // private System.Void RunSetUpOrTearDownMethod(NUnit.Framework.Internal.ITestExecutionContext context, System.Reflection.MethodInfo method)
    // Offset: 0x177EC3C
    void RunSetUpOrTearDownMethod(NUnit::Framework::Internal::ITestExecutionContext* context, System::Reflection::MethodInfo* method);
    // private System.Object RunNonAsyncMethod(System.Reflection.MethodInfo method, NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x177EC4C
    ::Il2CppObject* RunNonAsyncMethod(System::Reflection::MethodInfo* method, NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.SetUpTearDownItem
  #pragma pack(pop)
  static check_size<sizeof(SetUpTearDownItem), 32 + sizeof(bool)> __NUnit_Framework_Internal_Commands_SetUpTearDownItemSizeCheck;
  static_assert(sizeof(SetUpTearDownItem) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::SetUpTearDownItem*, "NUnit.Framework.Internal.Commands", "SetUpTearDownItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SetUpTearDownItem::get_HasMethods
// Il2CppName: get_HasMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Commands::SetUpTearDownItem::*)()>(&NUnit::Framework::Internal::Commands::SetUpTearDownItem::get_HasMethods)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SetUpTearDownItem*), "get_HasMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SetUpTearDownItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunSetUp
// Il2CppName: RunSetUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Commands::SetUpTearDownItem::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunSetUp)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SetUpTearDownItem*), "RunSetUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunTearDown
// Il2CppName: RunTearDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Commands::SetUpTearDownItem::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunTearDown)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SetUpTearDownItem*), "RunTearDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunSetUpOrTearDownMethod
// Il2CppName: RunSetUpOrTearDownMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Commands::SetUpTearDownItem::*)(NUnit::Framework::Internal::ITestExecutionContext*, System::Reflection::MethodInfo*)>(&NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunSetUpOrTearDownMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SetUpTearDownItem*), "RunSetUpOrTearDownMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, method});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunNonAsyncMethod
// Il2CppName: RunNonAsyncMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::Commands::SetUpTearDownItem::*)(System::Reflection::MethodInfo*, NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::SetUpTearDownItem::RunNonAsyncMethod)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::SetUpTearDownItem*), "RunNonAsyncMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, context});
  }
};
