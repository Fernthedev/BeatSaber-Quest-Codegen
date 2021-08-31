// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Compatibility.LongLivedMarshalByRefObject
#include "NUnit/Compatibility/LongLivedMarshalByRefObject.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestListener
  class ITestListener;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x81
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestExecutionContext
  // [TokenAttribute] Offset: FFFFFFFF
  class TestExecutionContext : public NUnit::Compatibility::LongLivedMarshalByRefObject/*, public NUnit::Framework::Internal::ITestExecutionContext*/ {
    public:
    // Nested type: NUnit::Framework::Internal::TestExecutionContext::$$c
    class $$c;
    // private NUnit.Framework.Internal.TestExecutionContext _priorContext
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestExecutionContext* priorContext;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestExecutionContext*) == 0x8);
    // private NUnit.Framework.Interfaces.ITestListener _listener
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::Interfaces::ITestListener* listener;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITestListener*) == 0x8);
    // private System.Int32 _assertCount
    // Size: 0x4
    // Offset: 0x28
    int assertCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: assertCount and: currentCulture
    char __padding2[0x4] = {};
    // private System.Globalization.CultureInfo _currentCulture
    // Size: 0x8
    // Offset: 0x30
    System::Globalization::CultureInfo* currentCulture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // private System.Globalization.CultureInfo _currentUICulture
    // Size: 0x8
    // Offset: 0x38
    System::Globalization::CultureInfo* currentUICulture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // private NUnit.Framework.Internal.TestResult _currentResult
    // Size: 0x8
    // Offset: 0x40
    NUnit::Framework::Internal::TestResult* currentResult;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestResult*) == 0x8);
    // private System.Security.Principal.IPrincipal _currentPrincipal
    // Size: 0x8
    // Offset: 0x48
    System::Security::Principal::IPrincipal* currentPrincipal;
    // Field size check
    static_assert(sizeof(System::Security::Principal::IPrincipal*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE22A2C
    // private NUnit.Framework.Internal.Test <CurrentTest>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    NUnit::Framework::Internal::Test* CurrentTest;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Test*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE22A68
    // private System.IO.TextWriter <OutWriter>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    System::IO::TextWriter* OutWriter;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE22AA4
    // private System.Object <TestObject>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppObject* TestObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE22AE0
    // private System.Int32 <TestCaseTimeout>k__BackingField
    // Size: 0x4
    // Offset: 0x68
    int TestCaseTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: TestCaseTimeout and: UpstreamActions
    char __padding10[0x4] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xE22B1C
    // private System.Collections.Generic.List`1<NUnit.Framework.ITestAction> <UpstreamActions>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* UpstreamActions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE22B58
    // private NUnit.Framework.Constraints.ValueFormatter <CurrentValueFormatter>k__BackingField
    // Size: 0x8
    // Offset: 0x78
    NUnit::Framework::Constraints::ValueFormatter* CurrentValueFormatter;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ValueFormatter*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE22B94
    // private System.Boolean <IsSingleThreaded>k__BackingField
    // Size: 0x1
    // Offset: 0x80
    bool IsSingleThreaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TestExecutionContext
    TestExecutionContext(NUnit::Framework::Internal::TestExecutionContext* priorContext_ = {}, NUnit::Framework::Interfaces::ITestListener* listener_ = {}, int assertCount_ = {}, System::Globalization::CultureInfo* currentCulture_ = {}, System::Globalization::CultureInfo* currentUICulture_ = {}, NUnit::Framework::Internal::TestResult* currentResult_ = {}, System::Security::Principal::IPrincipal* currentPrincipal_ = {}, NUnit::Framework::Internal::Test* CurrentTest_ = {}, System::IO::TextWriter* OutWriter_ = {}, ::Il2CppObject* TestObject_ = {}, int TestCaseTimeout_ = {}, System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* UpstreamActions_ = {}, NUnit::Framework::Constraints::ValueFormatter* CurrentValueFormatter_ = {}, bool IsSingleThreaded_ = {}) noexcept : priorContext{priorContext_}, listener{listener_}, assertCount{assertCount_}, currentCulture{currentCulture_}, currentUICulture{currentUICulture_}, currentResult{currentResult_}, currentPrincipal{currentPrincipal_}, CurrentTest{CurrentTest_}, OutWriter{OutWriter_}, TestObject{TestObject_}, TestCaseTimeout{TestCaseTimeout_}, UpstreamActions{UpstreamActions_}, CurrentValueFormatter{CurrentValueFormatter_}, IsSingleThreaded{IsSingleThreaded_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Internal::ITestExecutionContext
    operator NUnit::Framework::Internal::ITestExecutionContext() noexcept {
      return *reinterpret_cast<NUnit::Framework::Internal::ITestExecutionContext*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private readonly System.String CONTEXT_KEY
    static ::Il2CppString* _get_CONTEXT_KEY();
    // Set static field: static private readonly System.String CONTEXT_KEY
    static void _set_CONTEXT_KEY(::Il2CppString* value);
    // Get instance field reference: private NUnit.Framework.Internal.TestExecutionContext _priorContext
    NUnit::Framework::Internal::TestExecutionContext*& dyn__priorContext();
    // Get instance field reference: private NUnit.Framework.Interfaces.ITestListener _listener
    NUnit::Framework::Interfaces::ITestListener*& dyn__listener();
    // Get instance field reference: private System.Int32 _assertCount
    int& dyn__assertCount();
    // Get instance field reference: private System.Globalization.CultureInfo _currentCulture
    System::Globalization::CultureInfo*& dyn__currentCulture();
    // Get instance field reference: private System.Globalization.CultureInfo _currentUICulture
    System::Globalization::CultureInfo*& dyn__currentUICulture();
    // Get instance field reference: private NUnit.Framework.Internal.TestResult _currentResult
    NUnit::Framework::Internal::TestResult*& dyn__currentResult();
    // Get instance field reference: private System.Security.Principal.IPrincipal _currentPrincipal
    System::Security::Principal::IPrincipal*& dyn__currentPrincipal();
    // Get instance field reference: private NUnit.Framework.Internal.Test <CurrentTest>k__BackingField
    NUnit::Framework::Internal::Test*& dyn_$CurrentTest$k__BackingField();
    // Get instance field reference: private System.IO.TextWriter <OutWriter>k__BackingField
    System::IO::TextWriter*& dyn_$OutWriter$k__BackingField();
    // Get instance field reference: private System.Object <TestObject>k__BackingField
    ::Il2CppObject*& dyn_$TestObject$k__BackingField();
    // Get instance field reference: private System.Int32 <TestCaseTimeout>k__BackingField
    int& dyn_$TestCaseTimeout$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<NUnit.Framework.ITestAction> <UpstreamActions>k__BackingField
    System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>*& dyn_$UpstreamActions$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Constraints.ValueFormatter <CurrentValueFormatter>k__BackingField
    NUnit::Framework::Constraints::ValueFormatter*& dyn_$CurrentValueFormatter$k__BackingField();
    // Get instance field reference: private System.Boolean <IsSingleThreaded>k__BackingField
    bool& dyn_$IsSingleThreaded$k__BackingField();
    // static public NUnit.Framework.Internal.ITestExecutionContext get_CurrentContext()
    // Offset: 0x229C900
    static NUnit::Framework::Internal::ITestExecutionContext* get_CurrentContext();
    // public NUnit.Framework.Internal.Test get_CurrentTest()
    // Offset: 0x229CA54
    NUnit::Framework::Internal::Test* get_CurrentTest();
    // public NUnit.Framework.Internal.TestResult get_CurrentResult()
    // Offset: 0x229CA5C
    NUnit::Framework::Internal::TestResult* get_CurrentResult();
    // public System.Void set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    // Offset: 0x229CA64
    void set_CurrentResult(NUnit::Framework::Internal::TestResult* value);
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0x229CA78
    System::IO::TextWriter* get_OutWriter();
    // private System.Void set_OutWriter(System.IO.TextWriter value)
    // Offset: 0x229CA80
    void set_OutWriter(System::IO::TextWriter* value);
    // public System.Object get_TestObject()
    // Offset: 0x229CA88
    ::Il2CppObject* get_TestObject();
    // public System.Void set_TestObject(System.Object value)
    // Offset: 0x229CA90
    void set_TestObject(::Il2CppObject* value);
    // NUnit.Framework.Interfaces.ITestListener get_Listener()
    // Offset: 0x229CA98
    NUnit::Framework::Interfaces::ITestListener* get_Listener();
    // public System.Int32 get_TestCaseTimeout()
    // Offset: 0x229CAA0
    int get_TestCaseTimeout();
    // public System.Void set_TestCaseTimeout(System.Int32 value)
    // Offset: 0x229CAA8
    void set_TestCaseTimeout(int value);
    // private System.Void set_UpstreamActions(System.Collections.Generic.List`1<NUnit.Framework.ITestAction> value)
    // Offset: 0x229CAB0
    void set_UpstreamActions(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* value);
    // public NUnit.Framework.Constraints.ValueFormatter get_CurrentValueFormatter()
    // Offset: 0x229CAB8
    NUnit::Framework::Constraints::ValueFormatter* get_CurrentValueFormatter();
    // private System.Void set_CurrentValueFormatter(NUnit.Framework.Constraints.ValueFormatter value)
    // Offset: 0x229CAC0
    void set_CurrentValueFormatter(NUnit::Framework::Constraints::ValueFormatter* value);
    // public System.Void set_IsSingleThreaded(System.Boolean value)
    // Offset: 0x229CAC8
    void set_IsSingleThreaded(bool value);
    // static private System.Void .cctor()
    // Offset: 0x229CAE8
    static void _cctor();
    // static public NUnit.Framework.Internal.TestExecutionContext GetTestExecutionContext()
    // Offset: 0x229C9AC
    static NUnit::Framework::Internal::TestExecutionContext* GetTestExecutionContext();
    // public System.Void IncrementAssertCount()
    // Offset: 0x229CAD4
    void IncrementAssertCount();
    // public System.Void .ctor()
    // Offset: 0x229C744
    // Implemented from: NUnit.Compatibility.LongLivedMarshalByRefObject
    // Base method: System.Void LongLivedMarshalByRefObject::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestExecutionContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestExecutionContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestExecutionContext*, creationType>()));
    }
    // public override System.Object InitializeLifetimeService()
    // Offset: 0x229CAE0
    // Implemented from: NUnit.Compatibility.LongLivedMarshalByRefObject
    // Base method: System.Object LongLivedMarshalByRefObject::InitializeLifetimeService()
    ::Il2CppObject* InitializeLifetimeService();
  }; // NUnit.Framework.Internal.TestExecutionContext
  #pragma pack(pop)
  static check_size<sizeof(TestExecutionContext), 128 + sizeof(bool)> __NUnit_Framework_Internal_TestExecutionContextSizeCheck;
  static_assert(sizeof(TestExecutionContext) == 0x81);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestExecutionContext*, "NUnit.Framework.Internal", "TestExecutionContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_CurrentContext
// Il2CppName: get_CurrentContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::ITestExecutionContext* (*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_CurrentContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_CurrentContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_CurrentTest
// Il2CppName: get_CurrentTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Test* (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_CurrentTest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_CurrentTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_CurrentResult
// Il2CppName: get_CurrentResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_CurrentResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_CurrentResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::set_CurrentResult
// Il2CppName: set_CurrentResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)(NUnit::Framework::Internal::TestResult*)>(&NUnit::Framework::Internal::TestExecutionContext::set_CurrentResult)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "set_CurrentResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_OutWriter
// Il2CppName: get_OutWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::TextWriter* (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_OutWriter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_OutWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::set_OutWriter
// Il2CppName: set_OutWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)(System::IO::TextWriter*)>(&NUnit::Framework::Internal::TestExecutionContext::set_OutWriter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "set_OutWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_TestObject
// Il2CppName: get_TestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_TestObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_TestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::set_TestObject
// Il2CppName: set_TestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)(::Il2CppObject*)>(&NUnit::Framework::Internal::TestExecutionContext::set_TestObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "set_TestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_Listener
// Il2CppName: get_Listener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITestListener* (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_Listener)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_Listener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_TestCaseTimeout
// Il2CppName: get_TestCaseTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_TestCaseTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_TestCaseTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::set_TestCaseTimeout
// Il2CppName: set_TestCaseTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)(int)>(&NUnit::Framework::Internal::TestExecutionContext::set_TestCaseTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "set_TestCaseTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::set_UpstreamActions
// Il2CppName: set_UpstreamActions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>*)>(&NUnit::Framework::Internal::TestExecutionContext::set_UpstreamActions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework", "ITestAction")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "set_UpstreamActions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::get_CurrentValueFormatter
// Il2CppName: get_CurrentValueFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ValueFormatter* (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::get_CurrentValueFormatter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "get_CurrentValueFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::set_CurrentValueFormatter
// Il2CppName: set_CurrentValueFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)(NUnit::Framework::Constraints::ValueFormatter*)>(&NUnit::Framework::Internal::TestExecutionContext::set_CurrentValueFormatter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "ValueFormatter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "set_CurrentValueFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::set_IsSingleThreaded
// Il2CppName: set_IsSingleThreaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)(bool)>(&NUnit::Framework::Internal::TestExecutionContext::set_IsSingleThreaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "set_IsSingleThreaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::TestExecutionContext::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::GetTestExecutionContext
// Il2CppName: GetTestExecutionContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestExecutionContext* (*)()>(&NUnit::Framework::Internal::TestExecutionContext::GetTestExecutionContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "GetTestExecutionContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::IncrementAssertCount
// Il2CppName: IncrementAssertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::IncrementAssertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "IncrementAssertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestExecutionContext::InitializeLifetimeService
// Il2CppName: InitializeLifetimeService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::TestExecutionContext::*)()>(&NUnit::Framework::Internal::TestExecutionContext::InitializeLifetimeService)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestExecutionContext*), "InitializeLifetimeService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
