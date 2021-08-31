// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
#include "Org/BouncyCastle/Crypto/Modes/Gcm/IGcmMultiplier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
  // [TokenAttribute] Offset: FFFFFFFF
  class Tables8kGcmMultiplier : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*/ {
    public:
    // private System.Byte[] H
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* H;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32[][][] M
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Array<::Array<uint>*>*>* M;
    // Field size check
    static_assert(sizeof(::Array<::Array<::Array<uint>*>*>*) == 0x8);
    // Creating value type constructor for type: Tables8kGcmMultiplier
    Tables8kGcmMultiplier(::Array<uint8_t>* H_ = {}, ::Array<::Array<::Array<uint>*>*>* M_ = {}) noexcept : H{H_}, M{M_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier
    operator Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*>(this);
    }
    // Get instance field: private System.Byte[] H
    ::Array<uint8_t>* _get_H();
    // Set instance field: private System.Byte[] H
    void _set_H(::Array<uint8_t>* value);
    // Get instance field: private System.UInt32[][][] M
    ::Array<::Array<::Array<uint>*>*>* _get_M();
    // Set instance field: private System.UInt32[][][] M
    void _set_M(::Array<::Array<::Array<uint>*>*>* value);
    // public System.Void Init(System.Byte[] H)
    // Offset: 0x191A958
    void Init(::Array<uint8_t>* H);
    // public System.Void MultiplyH(System.Byte[] x)
    // Offset: 0x191B1E4
    void MultiplyH(::Array<uint8_t>* x);
    // public System.Void .ctor()
    // Offset: 0x191B408
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tables8kGcmMultiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tables8kGcmMultiplier*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
  #pragma pack(pop)
  static check_size<sizeof(Tables8kGcmMultiplier), 24 + sizeof(::Array<::Array<::Array<uint>*>*>*)> __Org_BouncyCastle_Crypto_Modes_Gcm_Tables8kGcmMultiplierSizeCheck;
  static_assert(sizeof(Tables8kGcmMultiplier) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables8kGcmMultiplier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::Init)> {
  static const MethodInfo* get() {
    static auto* H = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{H});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::MultiplyH
// Il2CppName: MultiplyH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::MultiplyH)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier*), "MultiplyH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::Tables8kGcmMultiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
