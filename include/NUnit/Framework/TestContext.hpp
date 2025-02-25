// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: TestParameters
  class TestParameters;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.TestContext
  // [TokenAttribute] Offset: FFFFFFFF
  class TestContext : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TestContext
    TestContext() noexcept {}
    // Get static field: static public NUnit.Framework.Internal.ITestExecutionContext CurrentTestExecutionContext
    static NUnit::Framework::Internal::ITestExecutionContext* _get_CurrentTestExecutionContext();
    // Set static field: static public NUnit.Framework.Internal.ITestExecutionContext CurrentTestExecutionContext
    static void _set_CurrentTestExecutionContext(NUnit::Framework::Internal::ITestExecutionContext* value);
    // Get static field: static public System.IO.TextWriter Error
    static System::IO::TextWriter* _get_Error();
    // Set static field: static public System.IO.TextWriter Error
    static void _set_Error(System::IO::TextWriter* value);
    // Get static field: static public readonly System.IO.TextWriter Progress
    static System::IO::TextWriter* _get_Progress();
    // Set static field: static public readonly System.IO.TextWriter Progress
    static void _set_Progress(System::IO::TextWriter* value);
    // Get static field: static public readonly NUnit.Framework.TestParameters Parameters
    static NUnit::Framework::TestParameters* _get_Parameters();
    // Set static field: static public readonly NUnit.Framework.TestParameters Parameters
    static void _set_Parameters(NUnit::Framework::TestParameters* value);
    // static public System.IO.TextWriter get_Out()
    // Offset: 0x22A1F18
    static System::IO::TextWriter* get_Out();
    // static private System.Void .cctor()
    // Offset: 0x22A201C
    static void _cctor();
  }; // NUnit.Framework.TestContext
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestContext*, "NUnit.Framework", "TestContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::TestContext::get_Out
// Il2CppName: get_Out
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::TextWriter* (*)()>(&NUnit::Framework::TestContext::get_Out)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestContext*), "get_Out", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestContext::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::TestContext::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestContext*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
