// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeClassHandle
  struct RuntimeClassHandle;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeRemoteClassHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeRemoteClassHandle/*, public System::ValueType*/ {
    public:
    // private Mono.RuntimeStructs/Mono.RemoteClass* value
    // Size: 0x8
    // Offset: 0x0
    Mono::RuntimeStructs::RemoteClass* value;
    // Field size check
    static_assert(sizeof(Mono::RuntimeStructs::RemoteClass*) == 0x8);
    // Creating value type constructor for type: RuntimeRemoteClassHandle
    constexpr RuntimeRemoteClassHandle(Mono::RuntimeStructs::RemoteClass* value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator Mono::RuntimeStructs::RemoteClass*
    constexpr operator Mono::RuntimeStructs::RemoteClass*() const noexcept {
      return value;
    }
    // Get instance field reference: private Mono.RuntimeStructs/Mono.RemoteClass* value
    Mono::RuntimeStructs::RemoteClass*& dyn_value();
    // Mono.RuntimeClassHandle get_ProxyClass()
    // Offset: 0x1A776C8
    Mono::RuntimeClassHandle get_ProxyClass();
  }; // Mono.RuntimeRemoteClassHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeRemoteClassHandle), 0 + sizeof(Mono::RuntimeStructs::RemoteClass*)> __Mono_RuntimeRemoteClassHandleSizeCheck;
  static_assert(sizeof(RuntimeRemoteClassHandle) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeRemoteClassHandle, "Mono", "RuntimeRemoteClassHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::RuntimeRemoteClassHandle::get_ProxyClass
// Il2CppName: get_ProxyClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::RuntimeClassHandle (Mono::RuntimeRemoteClassHandle::*)()>(&Mono::RuntimeRemoteClassHandle::get_ProxyClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeRemoteClassHandle), "get_ProxyClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
