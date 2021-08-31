// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.ITestResult
#include "NUnit/Framework/Interfaces/ITestResult.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
  // Forward declaring type: FailureSite
  struct FailureSite;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestResult
  // [TokenAttribute] Offset: FFFFFFFF
  class TestResult : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITestResult*/ {
    public:
    // private System.Text.StringBuilder _output
    // Size: 0x8
    // Offset: 0x10
    System::Text::StringBuilder* output;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Double _duration
    // Size: 0x8
    // Offset: 0x18
    double duration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // protected System.Int32 InternalAssertCount
    // Size: 0x4
    // Offset: 0x20
    int InternalAssertCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: InternalAssertCount and: resultState
    char __padding2[0x4] = {};
    // private NUnit.Framework.Interfaces.ResultState _resultState
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::ResultState* resultState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ResultState*) == 0x8);
    // private System.String _message
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _stackTrace
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* stackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE2293C
    // private NUnit.Framework.Interfaces.ITest <Test>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    NUnit::Framework::Interfaces::ITest* Test;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE22978
    // private System.DateTime <StartTime>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    System::DateTime StartTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE229B4
    // private System.DateTime <EndTime>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    System::DateTime EndTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE229F0
    // private System.IO.TextWriter <OutWriter>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    System::IO::TextWriter* OutWriter;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // Creating value type constructor for type: TestResult
    TestResult(System::Text::StringBuilder* output_ = {}, double duration_ = {}, int InternalAssertCount_ = {}, NUnit::Framework::Interfaces::ResultState* resultState_ = {}, ::Il2CppString* message_ = {}, ::Il2CppString* stackTrace_ = {}, NUnit::Framework::Interfaces::ITest* Test_ = {}, System::DateTime StartTime_ = {}, System::DateTime EndTime_ = {}, System::IO::TextWriter* OutWriter_ = {}) noexcept : output{output_}, duration{duration_}, InternalAssertCount{InternalAssertCount_}, resultState{resultState_}, message{message_}, stackTrace{stackTrace_}, Test{Test_}, StartTime{StartTime_}, EndTime{EndTime_}, OutWriter{OutWriter_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestResult
    operator NUnit::Framework::Interfaces::ITestResult() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestResult*>(this);
    }
    // Get static field: static readonly System.String CHILD_ERRORS_MESSAGE
    static ::Il2CppString* _get_CHILD_ERRORS_MESSAGE();
    // Set static field: static readonly System.String CHILD_ERRORS_MESSAGE
    static void _set_CHILD_ERRORS_MESSAGE(::Il2CppString* value);
    // Get static field: static readonly System.String CHILD_IGNORE_MESSAGE
    static ::Il2CppString* _get_CHILD_IGNORE_MESSAGE();
    // Set static field: static readonly System.String CHILD_IGNORE_MESSAGE
    static void _set_CHILD_IGNORE_MESSAGE(::Il2CppString* value);
    // static field const value: static System.Double MIN_DURATION
    static constexpr const double MIN_DURATION = 1e-06;
    // Get static field: static System.Double MIN_DURATION
    static double _get_MIN_DURATION();
    // Set static field: static System.Double MIN_DURATION
    static void _set_MIN_DURATION(double value);
    // Get instance field: private System.Text.StringBuilder _output
    System::Text::StringBuilder* _get__output();
    // Set instance field: private System.Text.StringBuilder _output
    void _set__output(System::Text::StringBuilder* value);
    // Get instance field: private System.Double _duration
    double _get__duration();
    // Set instance field: private System.Double _duration
    void _set__duration(double value);
    // Get instance field: protected System.Int32 InternalAssertCount
    int _get_InternalAssertCount();
    // Set instance field: protected System.Int32 InternalAssertCount
    void _set_InternalAssertCount(int value);
    // Get instance field: private NUnit.Framework.Interfaces.ResultState _resultState
    NUnit::Framework::Interfaces::ResultState* _get__resultState();
    // Set instance field: private NUnit.Framework.Interfaces.ResultState _resultState
    void _set__resultState(NUnit::Framework::Interfaces::ResultState* value);
    // Get instance field: private System.String _message
    ::Il2CppString* _get__message();
    // Set instance field: private System.String _message
    void _set__message(::Il2CppString* value);
    // Get instance field: private System.String _stackTrace
    ::Il2CppString* _get__stackTrace();
    // Set instance field: private System.String _stackTrace
    void _set__stackTrace(::Il2CppString* value);
    // Get instance field: private NUnit.Framework.Interfaces.ITest <Test>k__BackingField
    NUnit::Framework::Interfaces::ITest* _get_$Test$k__BackingField();
    // Set instance field: private NUnit.Framework.Interfaces.ITest <Test>k__BackingField
    void _set_$Test$k__BackingField(NUnit::Framework::Interfaces::ITest* value);
    // Get instance field: private System.DateTime <StartTime>k__BackingField
    System::DateTime _get_$StartTime$k__BackingField();
    // Set instance field: private System.DateTime <StartTime>k__BackingField
    void _set_$StartTime$k__BackingField(System::DateTime value);
    // Get instance field: private System.DateTime <EndTime>k__BackingField
    System::DateTime _get_$EndTime$k__BackingField();
    // Set instance field: private System.DateTime <EndTime>k__BackingField
    void _set_$EndTime$k__BackingField(System::DateTime value);
    // Get instance field: private System.IO.TextWriter <OutWriter>k__BackingField
    System::IO::TextWriter* _get_$OutWriter$k__BackingField();
    // Set instance field: private System.IO.TextWriter <OutWriter>k__BackingField
    void _set_$OutWriter$k__BackingField(System::IO::TextWriter* value);
    // public NUnit.Framework.Interfaces.ITest get_Test()
    // Offset: 0x22A00D0
    NUnit::Framework::Interfaces::ITest* get_Test();
    // private System.Void set_Test(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0x22A00D8
    void set_Test(NUnit::Framework::Interfaces::ITest* value);
    // public NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x229C67C
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // private System.Void set_ResultState(NUnit.Framework.Interfaces.ResultState value)
    // Offset: 0x22A00C8
    void set_ResultState(NUnit::Framework::Interfaces::ResultState* value);
    // public System.String get_Name()
    // Offset: 0x22A00E0
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0x22A0194
    ::Il2CppString* get_FullName();
    // public System.Double get_Duration()
    // Offset: 0x22A0248
    double get_Duration();
    // public System.Void set_Duration(System.Double value)
    // Offset: 0x22A0250
    void set_Duration(double value);
    // public System.DateTime get_StartTime()
    // Offset: 0x22A0274
    System::DateTime get_StartTime();
    // public System.Void set_StartTime(System.DateTime value)
    // Offset: 0x22A027C
    void set_StartTime(System::DateTime value);
    // public System.DateTime get_EndTime()
    // Offset: 0x22A0284
    System::DateTime get_EndTime();
    // public System.Void set_EndTime(System.DateTime value)
    // Offset: 0x22A028C
    void set_EndTime(System::DateTime value);
    // public System.String get_Message()
    // Offset: 0x22A0294
    ::Il2CppString* get_Message();
    // private System.Void set_Message(System.String value)
    // Offset: 0x22A029C
    void set_Message(::Il2CppString* value);
    // public System.String get_StackTrace()
    // Offset: 0x22A02A4
    ::Il2CppString* get_StackTrace();
    // private System.Void set_StackTrace(System.String value)
    // Offset: 0x22A02AC
    void set_StackTrace(::Il2CppString* value);
    // public System.Int32 get_AssertCount()
    // Offset: 0x22A02B4
    int get_AssertCount();
    // public System.Int32 get_FailCount()
    // Offset: 0xFFFFFFFF
    int get_FailCount();
    // public System.Int32 get_PassCount()
    // Offset: 0xFFFFFFFF
    int get_PassCount();
    // public System.Int32 get_SkipCount()
    // Offset: 0xFFFFFFFF
    int get_SkipCount();
    // public System.Int32 get_InconclusiveCount()
    // Offset: 0xFFFFFFFF
    int get_InconclusiveCount();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    bool get_HasChildren();
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* get_Children();
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0x22A02BC
    System::IO::TextWriter* get_OutWriter();
    // private System.Void set_OutWriter(System.IO.TextWriter value)
    // Offset: 0x22A02C4
    void set_OutWriter(System::IO::TextWriter* value);
    // public System.String get_Output()
    // Offset: 0x22A02CC
    ::Il2CppString* get_Output();
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x229C558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestResult* New_ctor(NUnit::Framework::Interfaces::ITest* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestResult*, creationType>(test)));
    }
    // static private System.Void .cctor()
    // Offset: 0x22A14CC
    static void _cctor();
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x22A02EC
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x22A0378
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Void SetResult(NUnit.Framework.Interfaces.ResultState resultState)
    // Offset: 0x22A0D2C
    void SetResult(NUnit::Framework::Interfaces::ResultState* resultState);
    // public System.Void SetResult(NUnit.Framework.Interfaces.ResultState resultState, System.String message)
    // Offset: 0x22A0D44
    void SetResult(NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message);
    // public System.Void SetResult(NUnit.Framework.Interfaces.ResultState resultState, System.String message, System.String stackTrace)
    // Offset: 0x22A0D38
    void SetResult(NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message, ::Il2CppString* stackTrace);
    // public System.Void RecordException(System.Exception ex)
    // Offset: 0x22A0D50
    void RecordException(System::Exception* ex);
    // public System.Void RecordException(System.Exception ex, NUnit.Framework.Interfaces.FailureSite site)
    // Offset: 0x22A0F54
    void RecordException(System::Exception* ex, NUnit::Framework::Interfaces::FailureSite site);
    // public System.Void RecordTearDownException(System.Exception ex)
    // Offset: 0x22A1194
    void RecordTearDownException(System::Exception* ex);
    // private NUnit.Framework.Interfaces.TNode AddReasonElement(NUnit.Framework.Interfaces.TNode targetNode)
    // Offset: 0x22A0C28
    NUnit::Framework::Interfaces::TNode* AddReasonElement(NUnit::Framework::Interfaces::TNode* targetNode);
    // private NUnit.Framework.Interfaces.TNode AddFailureElement(NUnit.Framework.Interfaces.TNode targetNode)
    // Offset: 0x22A0B44
    NUnit::Framework::Interfaces::TNode* AddFailureElement(NUnit::Framework::Interfaces::TNode* targetNode);
    // private NUnit.Framework.Interfaces.TNode AddOutputElement(NUnit.Framework.Interfaces.TNode targetNode)
    // Offset: 0x22A0CAC
    NUnit::Framework::Interfaces::TNode* AddOutputElement(NUnit::Framework::Interfaces::TNode* targetNode);
  }; // NUnit.Framework.Internal.TestResult
  #pragma pack(pop)
  static check_size<sizeof(TestResult), 88 + sizeof(System::IO::TextWriter*)> __NUnit_Framework_Internal_TestResultSizeCheck;
  static_assert(sizeof(TestResult) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestResult*, "NUnit.Framework.Internal", "TestResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_Test
// Il2CppName: get_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_Test)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_Test
// Il2CppName: set_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::TestResult::set_Test)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ResultState* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_ResultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_ResultState
// Il2CppName: set_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::ResultState*)>(&NUnit::Framework::Internal::TestResult::set_ResultState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_Duration
// Il2CppName: set_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(double)>(&NUnit::Framework::Internal::TestResult::set_Duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_StartTime
// Il2CppName: get_StartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_StartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_StartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_StartTime
// Il2CppName: set_StartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(System::DateTime)>(&NUnit::Framework::Internal::TestResult::set_StartTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_StartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_EndTime
// Il2CppName: get_EndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_EndTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_EndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_EndTime
// Il2CppName: set_EndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(System::DateTime)>(&NUnit::Framework::Internal::TestResult::set_EndTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_EndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_Message
// Il2CppName: set_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(::Il2CppString*)>(&NUnit::Framework::Internal::TestResult::set_Message)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_StackTrace
// Il2CppName: set_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(::Il2CppString*)>(&NUnit::Framework::Internal::TestResult::set_StackTrace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_AssertCount
// Il2CppName: get_AssertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_AssertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_AssertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_FailCount
// Il2CppName: get_FailCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_FailCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_FailCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_PassCount
// Il2CppName: get_PassCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_PassCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_PassCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_SkipCount
// Il2CppName: get_SkipCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_SkipCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_SkipCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_InconclusiveCount
// Il2CppName: get_InconclusiveCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_InconclusiveCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_InconclusiveCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_HasChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_OutWriter
// Il2CppName: get_OutWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::TextWriter* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_OutWriter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_OutWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::set_OutWriter
// Il2CppName: set_OutWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(System::IO::TextWriter*)>(&NUnit::Framework::Internal::TestResult::set_OutWriter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "set_OutWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::get_Output
// Il2CppName: get_Output
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestResult::*)()>(&NUnit::Framework::Internal::TestResult::get_Output)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "get_Output", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::TestResult::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestResult::*)(bool)>(&NUnit::Framework::Internal::TestResult::ToXml)> {
  static const MethodInfo* get() {
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recursive});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::TestResult::AddToXml)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::SetResult
// Il2CppName: SetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::ResultState*)>(&NUnit::Framework::Internal::TestResult::SetResult)> {
  static const MethodInfo* get() {
    static auto* resultState = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "SetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultState});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::SetResult
// Il2CppName: SetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::ResultState*, ::Il2CppString*)>(&NUnit::Framework::Internal::TestResult::SetResult)> {
  static const MethodInfo* get() {
    static auto* resultState = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "SetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultState, message});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::SetResult
// Il2CppName: SetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::ResultState*, ::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Internal::TestResult::SetResult)> {
  static const MethodInfo* get() {
    static auto* resultState = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "SetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultState, message, stackTrace});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::RecordException
// Il2CppName: RecordException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(System::Exception*)>(&NUnit::Framework::Internal::TestResult::RecordException)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "RecordException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::RecordException
// Il2CppName: RecordException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(System::Exception*, NUnit::Framework::Interfaces::FailureSite)>(&NUnit::Framework::Internal::TestResult::RecordException)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* site = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "FailureSite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "RecordException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex, site});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::RecordTearDownException
// Il2CppName: RecordTearDownException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestResult::*)(System::Exception*)>(&NUnit::Framework::Internal::TestResult::RecordTearDownException)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "RecordTearDownException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::AddReasonElement
// Il2CppName: AddReasonElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::TNode*)>(&NUnit::Framework::Internal::TestResult::AddReasonElement)> {
  static const MethodInfo* get() {
    static auto* targetNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "AddReasonElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetNode});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::AddFailureElement
// Il2CppName: AddFailureElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::TNode*)>(&NUnit::Framework::Internal::TestResult::AddFailureElement)> {
  static const MethodInfo* get() {
    static auto* targetNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "AddFailureElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetNode});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestResult::AddOutputElement
// Il2CppName: AddOutputElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::TestResult::*)(NUnit::Framework::Interfaces::TNode*)>(&NUnit::Framework::Internal::TestResult::AddOutputElement)> {
  static const MethodInfo* get() {
    static auto* targetNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestResult*), "AddOutputElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetNode});
  }
};
