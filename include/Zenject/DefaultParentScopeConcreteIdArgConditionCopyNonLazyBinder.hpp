// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // private Zenject.SubContainerCreatorBindInfo <SubContainerCreatorBindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    Zenject::SubContainerCreatorBindInfo* SubContainerCreatorBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerCreatorBindInfo*) == 0x8);
    // Creating value type constructor for type: DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
    DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(Zenject::SubContainerCreatorBindInfo* SubContainerCreatorBindInfo_ = {}) noexcept : SubContainerCreatorBindInfo{SubContainerCreatorBindInfo_} {}
    // Get instance field reference: private Zenject.SubContainerCreatorBindInfo <SubContainerCreatorBindInfo>k__BackingField
    Zenject::SubContainerCreatorBindInfo*& dyn_$SubContainerCreatorBindInfo$k__BackingField();
    // protected Zenject.SubContainerCreatorBindInfo get_SubContainerCreatorBindInfo()
    // Offset: 0x13EA1B0
    Zenject::SubContainerCreatorBindInfo* get_SubContainerCreatorBindInfo();
    // private System.Void set_SubContainerCreatorBindInfo(Zenject.SubContainerCreatorBindInfo value)
    // Offset: 0x13EA1B8
    void set_SubContainerCreatorBindInfo(Zenject::SubContainerCreatorBindInfo* value);
    // public System.Void .ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    // Offset: 0x13EA180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(subContainerBindInfo, bindInfo)));
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder WithDefaultGameObjectParent(System.String defaultParentName)
    // Offset: 0x13EA1C0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithDefaultGameObjectParent(::Il2CppString* defaultParentName);
  }; // Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
  static check_size<sizeof(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder), 32 + sizeof(Zenject::SubContainerCreatorBindInfo*)> __Zenject_DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinderSizeCheck;
  static_assert(sizeof(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::get_SubContainerCreatorBindInfo
// Il2CppName: get_SubContainerCreatorBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SubContainerCreatorBindInfo* (Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::get_SubContainerCreatorBindInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*), "get_SubContainerCreatorBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::set_SubContainerCreatorBindInfo
// Il2CppName: set_SubContainerCreatorBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(Zenject::SubContainerCreatorBindInfo*)>(&Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::set_SubContainerCreatorBindInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "SubContainerCreatorBindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*), "set_SubContainerCreatorBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithDefaultGameObjectParent
// Il2CppName: WithDefaultGameObjectParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Il2CppString*)>(&Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::WithDefaultGameObjectParent)> {
  static const MethodInfo* get() {
    static auto* defaultParentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*), "WithDefaultGameObjectParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultParentName});
  }
};
