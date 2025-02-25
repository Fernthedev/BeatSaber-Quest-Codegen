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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IfNotBoundBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class IfNotBoundBinder : public ::Il2CppObject {
    public:
    // private Zenject.BindInfo <BindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Zenject::BindInfo* BindInfo;
    // Field size check
    static_assert(sizeof(Zenject::BindInfo*) == 0x8);
    // Creating value type constructor for type: IfNotBoundBinder
    IfNotBoundBinder(Zenject::BindInfo* BindInfo_ = {}) noexcept : BindInfo{BindInfo_} {}
    // Creating conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept {
      return BindInfo;
    }
    // Get instance field reference: private Zenject.BindInfo <BindInfo>k__BackingField
    Zenject::BindInfo*& dyn_$BindInfo$k__BackingField();
    // public Zenject.BindInfo get_BindInfo()
    // Offset: 0x16685B4
    Zenject::BindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.BindInfo value)
    // Offset: 0x16685BC
    void set_BindInfo(Zenject::BindInfo* value);
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x1668588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IfNotBoundBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IfNotBoundBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IfNotBoundBinder*, creationType>(bindInfo)));
    }
    // public System.Void IfNotBound()
    // Offset: 0x16685C4
    void IfNotBound();
  }; // Zenject.IfNotBoundBinder
  #pragma pack(pop)
  static check_size<sizeof(IfNotBoundBinder), 16 + sizeof(Zenject::BindInfo*)> __Zenject_IfNotBoundBinderSizeCheck;
  static_assert(sizeof(IfNotBoundBinder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::IfNotBoundBinder*, "Zenject", "IfNotBoundBinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IfNotBoundBinder::get_BindInfo
// Il2CppName: get_BindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindInfo* (Zenject::IfNotBoundBinder::*)()>(&Zenject::IfNotBoundBinder::get_BindInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IfNotBoundBinder*), "get_BindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IfNotBoundBinder::set_BindInfo
// Il2CppName: set_BindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IfNotBoundBinder::*)(Zenject::BindInfo*)>(&Zenject::IfNotBoundBinder::set_BindInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "BindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IfNotBoundBinder*), "set_BindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::IfNotBoundBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::IfNotBoundBinder::IfNotBound
// Il2CppName: IfNotBound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IfNotBoundBinder::*)()>(&Zenject::IfNotBoundBinder::IfNotBound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IfNotBoundBinder*), "IfNotBound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
