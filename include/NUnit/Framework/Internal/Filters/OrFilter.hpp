// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Filters.CompositeFilter
#include "NUnit/Framework/Internal/Filters/CompositeFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestFilter because it is already included!
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.OrFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class OrFilter : public NUnit::Framework::Internal::Filters::CompositeFilter {
    public:
    // Creating value type constructor for type: OrFilter
    OrFilter() noexcept {}
    // protected override System.String get_ElementName()
    // Offset: 0x1782EAC
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.String CompositeFilter::get_ElementName()
    ::Il2CppString* get_ElementName();
    // public System.Void .ctor()
    // Offset: 0x1782550
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor()
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::OrFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrFilter*, creationType>()));
    }
    // public System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    // Offset: 0x1782554
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrFilter* New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>* filters) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::OrFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrFilter*, creationType>(filters)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrFilter* New_ctor(std::initializer_list<NUnit::Framework::Interfaces::ITestFilter*> filters) {
      return New_ctor<creationType>(::Array<NUnit::Framework::Interfaces::ITestFilter*>::New(filters));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static OrFilter* New_ctor(TParams&&... filters) {
      return New_ctor<creationType>({filters...});
    }
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1782558
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1782894
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1782BA0
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
  }; // NUnit.Framework.Internal.Filters.OrFilter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::OrFilter*, "NUnit.Framework.Internal.Filters", "OrFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::OrFilter::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::Filters::OrFilter::*)()>(&NUnit::Framework::Internal::Filters::OrFilter::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::OrFilter*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::OrFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::OrFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::OrFilter::Pass
// Il2CppName: Pass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::OrFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::OrFilter::Pass)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::OrFilter*), "Pass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::OrFilter::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::OrFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::OrFilter::Match)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::OrFilter*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Filters::OrFilter::IsExplicitMatch
// Il2CppName: IsExplicitMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::Filters::OrFilter::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Filters::OrFilter::IsExplicitMatch)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Filters::OrFilter*), "IsExplicitMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
