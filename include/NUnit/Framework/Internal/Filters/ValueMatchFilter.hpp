// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.ValueMatchFilter
  class ValueMatchFilter : public NUnit::Framework::Internal::TestFilter {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE05B14
    // [DebuggerBrowsableAttribute] Offset: 0xE05B14
    // private System.String <ExpectedValue>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ExpectedValue;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE05B50
    // [DebuggerBrowsableAttribute] Offset: 0xE05B50
    // private System.Boolean <IsRegex>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsRegex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ValueMatchFilter
    ValueMatchFilter(::Il2CppString* ExpectedValue_ = {}, bool IsRegex_ = {}) noexcept : ExpectedValue{ExpectedValue_}, IsRegex{IsRegex_} {}
    // public System.String get_ExpectedValue()
    // Offset: 0x22A9C68
    ::Il2CppString* get_ExpectedValue();
    // private System.Void set_ExpectedValue(System.String value)
    // Offset: 0x22A9C70
    void set_ExpectedValue(::Il2CppString* value);
    // public System.Boolean get_IsRegex()
    // Offset: 0x22A9C78
    bool get_IsRegex();
    // public System.Void set_IsRegex(System.Boolean value)
    // Offset: 0x22A9C80
    void set_IsRegex(bool value);
    // public System.Void .ctor(System.String expectedValue)
    // Offset: 0x22A9C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueMatchFilter* New_ctor(::Il2CppString* expectedValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::ValueMatchFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueMatchFilter*, creationType>(expectedValue)));
    }
    // protected System.Boolean Match(System.String input)
    // Offset: 0x22A9D10
    bool Match(::Il2CppString* input);
    // protected System.String get_ElementName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_ElementName();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x22A9DD0
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.Filters.ValueMatchFilter
  #pragma pack(pop)
  static check_size<sizeof(ValueMatchFilter), 24 + sizeof(bool)> __NUnit_Framework_Internal_Filters_ValueMatchFilterSizeCheck;
  static_assert(sizeof(ValueMatchFilter) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::ValueMatchFilter*, "NUnit.Framework.Internal.Filters", "ValueMatchFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ExpectedValue
// Il2CppName: get_ExpectedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)()>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ExpectedValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "get_ExpectedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::set_ExpectedValue
// Il2CppName: set_ExpectedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::set_ExpectedValue)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "set_ExpectedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::get_IsRegex
// Il2CppName: get_IsRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)()>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::get_IsRegex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "get_IsRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::set_IsRegex
// Il2CppName: set_IsRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(bool)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::set_IsRegex)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "set_IsRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::Match)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)()>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::get_ElementName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::ValueMatchFilter::AddToXml
// Il2CppName: AddToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Internal::Filters::ValueMatchFilter::*)(NUnit::Framework::Interfaces::TNode*, bool)>(&NUnit::Framework::Internal::Filters::ValueMatchFilter::AddToXml)> {
  const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "TNode")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::ValueMatchFilter*), "AddToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, recursive});
  }
};
