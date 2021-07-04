// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
  class IGcmExponentiator {
    public:
    // Creating value type constructor for type: IGcmExponentiator
    IGcmExponentiator() noexcept {}
    // public System.Void Init(System.Byte[] x)
    // Offset: 0xFFFFFFFF
    void Init(::Array<uint8_t>* x);
    // public System.Void ExponentiateX(System.Int64 pow, System.Byte[] output)
    // Offset: 0xFFFFFFFF
    void ExponentiateX(int64_t pow, ::Array<uint8_t>* output);
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmExponentiator");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::ExponentiateX
// Il2CppName: ExponentiateX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::*)(int64_t, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator::ExponentiateX)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*), "ExponentiateX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
