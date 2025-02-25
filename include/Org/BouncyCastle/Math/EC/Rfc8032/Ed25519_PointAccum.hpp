// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed25519.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Org.BouncyCastle.Math.EC.Rfc8032.PointAccum
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed25519::PointAccum : public ::Il2CppObject {
    public:
    // System.Int32[] x
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* x;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] y
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* y;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] z
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* z;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] u
    // Size: 0x8
    // Offset: 0x28
    ::Array<int>* u;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] v
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* v;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: PointAccum
    PointAccum(::Array<int>* x_ = {}, ::Array<int>* y_ = {}, ::Array<int>* z_ = {}, ::Array<int>* u_ = {}, ::Array<int>* v_ = {}) noexcept : x{x_}, y{y_}, z{z_}, u{u_}, v{v_} {}
    // Get instance field reference: System.Int32[] x
    ::Array<int>*& dyn_x();
    // Get instance field reference: System.Int32[] y
    ::Array<int>*& dyn_y();
    // Get instance field reference: System.Int32[] z
    ::Array<int>*& dyn_z();
    // Get instance field reference: System.Int32[] u
    ::Array<int>*& dyn_u();
    // Get instance field reference: System.Int32[] v
    ::Array<int>*& dyn_v();
    // public System.Void .ctor()
    // Offset: 0x1DD2BFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519::PointAccum* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519::PointAccum*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Org.BouncyCastle.Math.EC.Rfc8032.PointAccum
  #pragma pack(pop)
  static check_size<sizeof(Ed25519::PointAccum), 48 + sizeof(::Array<int>*)> __Org_BouncyCastle_Math_EC_Rfc8032_Ed25519_PointAccumSizeCheck;
  static_assert(sizeof(Ed25519::PointAccum) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointAccum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAccum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
