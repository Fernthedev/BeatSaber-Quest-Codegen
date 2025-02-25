// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol
#include "Mono/Unity/UnityTls_unitytls_protocol.hpp"
// Completed includes
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_protocolrange
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_tlsctx_protocolrange/*, public System::ValueType*/ {
    public:
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol min
    // Size: 0x4
    // Offset: 0x0
    Mono::Unity::UnityTls::unitytls_protocol min;
    // Field size check
    static_assert(sizeof(Mono::Unity::UnityTls::unitytls_protocol) == 0x4);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol max
    // Size: 0x4
    // Offset: 0x4
    Mono::Unity::UnityTls::unitytls_protocol max;
    // Field size check
    static_assert(sizeof(Mono::Unity::UnityTls::unitytls_protocol) == 0x4);
    // Creating value type constructor for type: unitytls_tlsctx_protocolrange
    constexpr unitytls_tlsctx_protocolrange(Mono::Unity::UnityTls::unitytls_protocol min_ = {}, Mono::Unity::UnityTls::unitytls_protocol max_ = {}) noexcept : min{min_}, max{max_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol min
    Mono::Unity::UnityTls::unitytls_protocol& dyn_min();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol max
    Mono::Unity::UnityTls::unitytls_protocol& dyn_max();
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_protocolrange
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_tlsctx_protocolrange), 4 + sizeof(Mono::Unity::UnityTls::unitytls_protocol)> __Mono_Unity_UnityTls_unitytls_tlsctx_protocolrangeSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_tlsctx_protocolrange) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange, "Mono.Unity", "UnityTls/unitytls_tlsctx_protocolrange");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
