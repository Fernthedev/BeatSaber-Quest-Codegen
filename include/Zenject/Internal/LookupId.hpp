// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.LookupId
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class LookupId : public ::Il2CppObject {
    public:
    // public Zenject.IProvider Provider
    // Size: 0x8
    // Offset: 0x10
    Zenject::IProvider* Provider;
    // Field size check
    static_assert(sizeof(Zenject::IProvider*) == 0x8);
    // public Zenject.BindingId BindingId
    // Size: 0x10
    // Offset: 0x18
    Zenject::BindingId BindingId;
    // Field size check
    static_assert(sizeof(Zenject::BindingId) == 0x10);
    // Creating value type constructor for type: LookupId
    LookupId(Zenject::IProvider* Provider_ = {}, Zenject::BindingId BindingId_ = {}) noexcept : Provider{Provider_}, BindingId{BindingId_} {}
    // Get instance field reference: public Zenject.IProvider Provider
    Zenject::IProvider*& dyn_Provider();
    // Get instance field reference: public Zenject.BindingId BindingId
    Zenject::BindingId& dyn_BindingId();
    // public System.Void .ctor(Zenject.IProvider provider, Zenject.BindingId bindingId)
    // Offset: 0x166ACB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LookupId* New_ctor(Zenject::IProvider* provider, Zenject::BindingId bindingId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::LookupId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LookupId*, creationType>(provider, bindingId)));
    }
    // public System.Void .ctor()
    // Offset: 0x166ACA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LookupId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::LookupId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LookupId*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x166AD54
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Zenject.Internal.LookupId
  #pragma pack(pop)
  static check_size<sizeof(LookupId), 24 + sizeof(Zenject::BindingId)> __Zenject_Internal_LookupIdSizeCheck;
  static_assert(sizeof(LookupId) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::LookupId*, "Zenject.Internal", "LookupId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::LookupId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::LookupId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::LookupId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::Internal::LookupId::*)()>(&Zenject::Internal::LookupId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::LookupId*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
