// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBasicAgreement
#include "Org/BouncyCastle/Crypto/IBasicAgreement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECPrivateKeyParameters
  class ECPrivateKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Forward declaring type: ECDHBasicAgreement
  class ECDHBasicAgreement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECDHBasicAgreement");
// Type namespace: Org.BouncyCastle.Crypto.Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
  // [TokenAttribute] Offset: FFFFFFFF
  class ECDHBasicAgreement : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBasicAgreement*/ {
    public:
    public:
    // protected internal Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters privKey
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privKey;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBasicAgreement
    operator ::Org::BouncyCastle::Crypto::IBasicAgreement() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(this);
    }
    // Creating interface conversion operator: i_IBasicAgreement
    inline ::Org::BouncyCastle::Crypto::IBasicAgreement* i_IBasicAgreement() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(this);
    }
    // Creating conversion operator: operator ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
    constexpr operator ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*() const noexcept {
      return privKey;
    }
    // Get instance field reference: protected internal Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters privKey
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& dyn_privKey();
    // public System.Void .ctor()
    // Offset: 0x1F58260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECDHBasicAgreement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECDHBasicAgreement*, creationType>()));
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1F57EF4
    void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetFieldSize()
    // Offset: 0x1F57FC0
    int GetFieldSize();
    // public Org.BouncyCastle.Math.BigInteger CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters pubKey)
    // Offset: 0x1F5800C
    ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey);
  }; // Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
  #pragma pack(pop)
  static check_size<sizeof(ECDHBasicAgreement), 16 + sizeof(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*)> __Org_BouncyCastle_Crypto_Agreement_ECDHBasicAgreementSizeCheck;
  static_assert(sizeof(ECDHBasicAgreement) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::GetFieldSize
// Il2CppName: GetFieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)()>(&Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::GetFieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*), "GetFieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::CalculateAgreement
// Il2CppName: CalculateAgreement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement::CalculateAgreement)> {
  static const MethodInfo* get() {
    static auto* pubKey = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*), "CalculateAgreement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pubKey});
  }
};
