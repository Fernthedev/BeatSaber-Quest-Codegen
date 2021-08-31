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
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.TestParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E22250
  class TestParameters : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.String> _parameters
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: TestParameters
    TestParameters(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*
    constexpr operator System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*() const noexcept {
      return parameters;
    }
    // Get static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
    static System::IFormatProvider* _get_MODIFIED_INVARIANT_CULTURE();
    // Set static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
    static void _set_MODIFIED_INVARIANT_CULTURE(System::IFormatProvider* value);
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.String> _parameters
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*& dyn__parameters();
    // static private System.Void .cctor()
    // Offset: 0x22A5980
    static void _cctor();
    // System.Void Add(System.String name, System.String value)
    // Offset: 0x22A57CC
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // static private System.IFormatProvider CreateModifiedInvariantCulture()
    // Offset: 0x22A583C
    static System::IFormatProvider* CreateModifiedInvariantCulture();
    // public System.Void .ctor()
    // Offset: 0x22A54E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::TestParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestParameters*, creationType>()));
    }
  }; // NUnit.Framework.TestParameters
  #pragma pack(pop)
  static check_size<sizeof(TestParameters), 16 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*)> __NUnit_Framework_TestParametersSizeCheck;
  static_assert(sizeof(TestParameters) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestParameters*, "NUnit.Framework", "TestParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::TestParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::TestParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestParameters::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::TestParameters::*)(::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::TestParameters::Add)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestParameters*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestParameters::CreateModifiedInvariantCulture
// Il2CppName: CreateModifiedInvariantCulture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IFormatProvider* (*)()>(&NUnit::Framework::TestParameters::CreateModifiedInvariantCulture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::TestParameters*), "CreateModifiedInvariantCulture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::TestParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
