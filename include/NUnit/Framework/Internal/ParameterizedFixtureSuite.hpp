// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x8A
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ParameterizedFixtureSuite
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterizedFixtureSuite : public NUnit::Framework::Internal::TestSuite {
    public:
    // private System.Boolean _genericFixture
    // Size: 0x1
    // Offset: 0x89
    bool genericFixture;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ParameterizedFixtureSuite
    ParameterizedFixtureSuite(bool genericFixture_ = {}) noexcept : genericFixture{genericFixture_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return genericFixture;
    }
    // Get instance field: private System.Boolean _genericFixture
    bool _get__genericFixture();
    // Set instance field: private System.Boolean _genericFixture
    void _set__genericFixture(bool value);
    // public override System.String get_TestType()
    // Offset: 0x2299138
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_TestType()
    ::Il2CppString* get_TestType();
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x2298ED4
    // Implemented from: NUnit.Framework.Internal.TestSuite
    // Base method: System.Void TestSuite::.ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterizedFixtureSuite* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* typeInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterizedFixtureSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterizedFixtureSuite*, creationType>(typeInfo)));
    }
  }; // NUnit.Framework.Internal.ParameterizedFixtureSuite
  #pragma pack(pop)
  static check_size<sizeof(ParameterizedFixtureSuite), 137 + sizeof(bool)> __NUnit_Framework_Internal_ParameterizedFixtureSuiteSizeCheck;
  static_assert(sizeof(ParameterizedFixtureSuite) == 0x8A);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ParameterizedFixtureSuite*, "NUnit.Framework.Internal", "ParameterizedFixtureSuite");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterizedFixtureSuite::get_TestType
// Il2CppName: get_TestType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::ParameterizedFixtureSuite::*)()>(&NUnit::Framework::Internal::ParameterizedFixtureSuite::get_TestType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ParameterizedFixtureSuite*), "get_TestType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterizedFixtureSuite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
