// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHValidationParameters
  class DHValidationParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DHParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger g
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* g;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger j
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* j;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly System.Int32 m
    // Size: 0x4
    // Offset: 0x30
    int m;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 l
    // Size: 0x4
    // Offset: 0x34
    int l;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly Org.BouncyCastle.Crypto.Parameters.DHValidationParameters validation
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*) == 0x8);
    // Creating value type constructor for type: DHParameters
    DHParameters(Org::BouncyCastle::Math::BigInteger* p_ = {}, Org::BouncyCastle::Math::BigInteger* g_ = {}, Org::BouncyCastle::Math::BigInteger* q_ = {}, Org::BouncyCastle::Math::BigInteger* j_ = {}, int m_ = {}, int l_ = {}, Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation_ = {}) noexcept : p{p_}, g{g_}, q{q_}, j{j_}, m{m_}, l{l_}, validation{validation_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field: private readonly Org.BouncyCastle.Math.BigInteger p
    Org::BouncyCastle::Math::BigInteger* _get_p();
    // Set instance field: private readonly Org.BouncyCastle.Math.BigInteger p
    void _set_p(Org::BouncyCastle::Math::BigInteger* value);
    // Get instance field: private readonly Org.BouncyCastle.Math.BigInteger g
    Org::BouncyCastle::Math::BigInteger* _get_g();
    // Set instance field: private readonly Org.BouncyCastle.Math.BigInteger g
    void _set_g(Org::BouncyCastle::Math::BigInteger* value);
    // Get instance field: private readonly Org.BouncyCastle.Math.BigInteger q
    Org::BouncyCastle::Math::BigInteger* _get_q();
    // Set instance field: private readonly Org.BouncyCastle.Math.BigInteger q
    void _set_q(Org::BouncyCastle::Math::BigInteger* value);
    // Get instance field: private readonly Org.BouncyCastle.Math.BigInteger j
    Org::BouncyCastle::Math::BigInteger* _get_j();
    // Set instance field: private readonly Org.BouncyCastle.Math.BigInteger j
    void _set_j(Org::BouncyCastle::Math::BigInteger* value);
    // Get instance field: private readonly System.Int32 m
    int _get_m();
    // Set instance field: private readonly System.Int32 m
    void _set_m(int value);
    // Get instance field: private readonly System.Int32 l
    int _get_l();
    // Set instance field: private readonly System.Int32 l
    void _set_l(int value);
    // Get instance field: private readonly Org.BouncyCastle.Crypto.Parameters.DHValidationParameters validation
    Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* _get_validation();
    // Set instance field: private readonly Org.BouncyCastle.Crypto.Parameters.DHValidationParameters validation
    void _set_validation(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* value);
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x12707DC
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_G()
    // Offset: 0x12707E4
    Org::BouncyCastle::Math::BigInteger* get_G();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x12707EC
    Org::BouncyCastle::Math::BigInteger* get_Q();
    // public System.Int32 get_M()
    // Offset: 0x12707F4
    int get_M();
    // public System.Int32 get_L()
    // Offset: 0x12707FC
    int get_L();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger g, Org.BouncyCastle.Math.BigInteger q)
    // Offset: 0x127005C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* g, Org::BouncyCastle::Math::BigInteger* q) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHParameters*, creationType>(p, g, q)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger g, Org.BouncyCastle.Math.BigInteger q, System.Int32 l)
    // Offset: 0x12700E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* g, Org::BouncyCastle::Math::BigInteger* q, int l) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHParameters*, creationType>(p, g, q, l)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger g, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger j, Org.BouncyCastle.Crypto.Parameters.DHValidationParameters validation)
    // Offset: 0x127045C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* g, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* j, Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHParameters*, creationType>(p, g, q, j, validation)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger g, Org.BouncyCastle.Math.BigInteger q, System.Int32 m, System.Int32 l, Org.BouncyCastle.Math.BigInteger j, Org.BouncyCastle.Crypto.Parameters.DHValidationParameters validation)
    // Offset: 0x1270154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* g, Org::BouncyCastle::Math::BigInteger* q, int m, int l, Org::BouncyCastle::Math::BigInteger* j, Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHParameters*, creationType>(p, g, q, m, l, j, validation)));
    }
    // static private System.Int32 GetDefaultMParam(System.Int32 lParam)
    // Offset: 0x126FFDC
    static int GetDefaultMParam(int lParam);
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DHParameters other)
    // Offset: 0x12708BC
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DHParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1270804
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1270938
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DHParameters
  #pragma pack(pop)
  static check_size<sizeof(DHParameters), 56 + sizeof(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*)> __Org_BouncyCastle_Crypto_Parameters_DHParametersSizeCheck;
  static_assert(sizeof(DHParameters) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::get_G
// Il2CppName: get_G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::get_G)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "get_G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::get_M
// Il2CppName: get_M
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::get_M)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "get_M", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::get_L
// Il2CppName: get_L
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::get_L)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "get_L", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::GetDefaultMParam
// Il2CppName: GetDefaultMParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::GetDefaultMParam)> {
  static const MethodInfo* get() {
    static auto* lParam = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "GetDefaultMParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lParam});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)(Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::DHParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
