// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: NUnit.Framework.Interfaces.IXmlNodeBuilder
#include "NUnit/Framework/Interfaces/IXmlNodeBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITestResult
  class ITestResult/*, public NUnit::Framework::Interfaces::IXmlNodeBuilder*/ {
    public:
    // Creating value type constructor for type: ITestResult
    ITestResult() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IXmlNodeBuilder
    operator NUnit::Framework::Interfaces::IXmlNodeBuilder() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IXmlNodeBuilder*>(this);
    }
    // public NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_FullName();
    // public System.Double get_Duration()
    // Offset: 0xFFFFFFFF
    double get_Duration();
    // public System.DateTime get_StartTime()
    // Offset: 0xFFFFFFFF
    System::DateTime get_StartTime();
    // public System.DateTime get_EndTime()
    // Offset: 0xFFFFFFFF
    System::DateTime get_EndTime();
    // public System.String get_Message()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Message();
    // public System.String get_StackTrace()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_StackTrace();
    // public System.Int32 get_AssertCount()
    // Offset: 0xFFFFFFFF
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
    // public NUnit.Framework.Interfaces.ITest get_Test()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITest* get_Test();
    // public System.String get_Output()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Output();
  }; // NUnit.Framework.Interfaces.ITestResult
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestResult*, "NUnit.Framework.Interfaces", "ITestResult");
// Writing includes for template specializations
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ResultState* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_ResultState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_FullName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_Duration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_StartTime
// Il2CppName: get_StartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_StartTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_StartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_EndTime
// Il2CppName: get_EndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_EndTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_EndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_Message)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_StackTrace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_AssertCount
// Il2CppName: get_AssertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_AssertCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_AssertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_FailCount
// Il2CppName: get_FailCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_FailCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_FailCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_PassCount
// Il2CppName: get_PassCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_PassCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_PassCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_SkipCount
// Il2CppName: get_SkipCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_SkipCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_SkipCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_InconclusiveCount
// Il2CppName: get_InconclusiveCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_InconclusiveCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_InconclusiveCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_HasChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestResult*>* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_Children)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_Test
// Il2CppName: get_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_Test)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::ITestResult::get_Output
// Il2CppName: get_Output
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::ITestResult::*)()>(&NUnit::Framework::Interfaces::ITestResult::get_Output)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::ITestResult*), "get_Output", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
