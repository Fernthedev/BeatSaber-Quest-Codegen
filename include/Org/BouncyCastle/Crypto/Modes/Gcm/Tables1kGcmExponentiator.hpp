// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
#include "Org/BouncyCastle/Crypto/Modes/Gcm/IGcmExponentiator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
  // [TokenAttribute] Offset: FFFFFFFF
  class Tables1kGcmExponentiator : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*/ {
    public:
    // private System.Collections.IList lookupPowX2
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IList* lookupPowX2;
    // Field size check
    static_assert(sizeof(System::Collections::IList*) == 0x8);
    // Creating value type constructor for type: Tables1kGcmExponentiator
    Tables1kGcmExponentiator(System::Collections::IList* lookupPowX2_ = {}) noexcept : lookupPowX2{lookupPowX2_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator
    operator Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IList*
    constexpr operator System::Collections::IList*() const noexcept {
      return lookupPowX2;
    }
    // Get instance field reference: private System.Collections.IList lookupPowX2
    System::Collections::IList*& dyn_lookupPowX2();
    // public System.Void Init(System.Byte[] x)
    // Offset: 0x1922B48
    void Init(::Array<uint8_t>* x);
    // public System.Void ExponentiateX(System.Int64 pow, System.Byte[] output)
    // Offset: 0x1922D5C
    void ExponentiateX(int64_t pow, ::Array<uint8_t>* output);
    // private System.Void EnsureAvailable(System.Int32 bit)
    // Offset: 0x1922F1C
    void EnsureAvailable(int bit);
    // public System.Void .ctor()
    // Offset: 0x1923184
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tables1kGcmExponentiator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tables1kGcmExponentiator*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
  #pragma pack(pop)
  static check_size<sizeof(Tables1kGcmExponentiator), 16 + sizeof(System::Collections::IList*)> __Org_BouncyCastle_Crypto_Modes_Gcm_Tables1kGcmExponentiatorSizeCheck;
  static_assert(sizeof(Tables1kGcmExponentiator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables1kGcmExponentiator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::Init)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::ExponentiateX
// Il2CppName: ExponentiateX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::*)(int64_t, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::ExponentiateX)> {
  static const MethodInfo* get() {
    static auto* pow = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator*), "ExponentiateX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pow, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::EnsureAvailable
// Il2CppName: EnsureAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::*)(int)>(&Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::EnsureAvailable)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator*), "EnsureAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
