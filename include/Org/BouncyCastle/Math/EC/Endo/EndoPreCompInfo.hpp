// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class EndoPreCompInfo : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*/ {
    public:
    // protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECPoint m_mappedPoint
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECPoint* m_mappedPoint;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // Creating value type constructor for type: EndoPreCompInfo
    EndoPreCompInfo(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism_ = {}, Org::BouncyCastle::Math::EC::ECPoint* m_mappedPoint_ = {}) noexcept : m_endomorphism{m_endomorphism_}, m_mappedPoint{m_mappedPoint_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
    operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this);
    }
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& dyn_m_endomorphism();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.ECPoint m_mappedPoint
    Org::BouncyCastle::Math::EC::ECPoint*& dyn_m_mappedPoint();
    // public Org.BouncyCastle.Math.EC.Endo.ECEndomorphism get_Endomorphism()
    // Offset: 0x21435EC
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* get_Endomorphism();
    // public System.Void set_Endomorphism(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism value)
    // Offset: 0x21435F4
    void set_Endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);
    // public Org.BouncyCastle.Math.EC.ECPoint get_MappedPoint()
    // Offset: 0x21435FC
    Org::BouncyCastle::Math::EC::ECPoint* get_MappedPoint();
    // public System.Void set_MappedPoint(Org.BouncyCastle.Math.EC.ECPoint value)
    // Offset: 0x2143604
    void set_MappedPoint(Org::BouncyCastle::Math::EC::ECPoint* value);
    // public System.Void .ctor()
    // Offset: 0x214360C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndoPreCompInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndoPreCompInfo*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo
  #pragma pack(pop)
  static check_size<sizeof(EndoPreCompInfo), 24 + sizeof(Org::BouncyCastle::Math::EC::ECPoint*)> __Org_BouncyCastle_Math_EC_Endo_EndoPreCompInfoSizeCheck;
  static_assert(sizeof(EndoPreCompInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*, "Org.BouncyCastle.Math.EC.Endo", "EndoPreCompInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_Endomorphism
// Il2CppName: get_Endomorphism
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* (Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_Endomorphism)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*), "get_Endomorphism", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_Endomorphism
// Il2CppName: set_Endomorphism
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*)>(&Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_Endomorphism)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*), "set_Endomorphism", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_MappedPoint
// Il2CppName: get_MappedPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::get_MappedPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*), "get_MappedPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_MappedPoint
// Il2CppName: set_MappedPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::set_MappedPoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*), "set_MappedPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
