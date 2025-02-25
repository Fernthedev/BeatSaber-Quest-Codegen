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
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class WNafPreCompInfo : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*/ {
    public:
    // System.Int32 m_promotionCountdown
    // Size: 0x4
    // Offset: 0x10
    int m_promotionCountdown;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_confWidth
    // Size: 0x4
    // Offset: 0x14
    int m_confWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected Org.BouncyCastle.Math.EC.ECPoint[] m_preComp
    // Size: 0x8
    // Offset: 0x18
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preComp;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECPoint[] m_preCompNeg
    // Size: 0x8
    // Offset: 0x20
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preCompNeg;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECPoint m_twice
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::EC::ECPoint* m_twice;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // protected System.Int32 m_width
    // Size: 0x4
    // Offset: 0x30
    int m_width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WNafPreCompInfo
    WNafPreCompInfo(int m_promotionCountdown_ = {}, int m_confWidth_ = {}, ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preComp_ = {}, ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preCompNeg_ = {}, Org::BouncyCastle::Math::EC::ECPoint* m_twice_ = {}, int m_width_ = {}) noexcept : m_promotionCountdown{m_promotionCountdown_}, m_confWidth{m_confWidth_}, m_preComp{m_preComp_}, m_preCompNeg{m_preCompNeg_}, m_twice{m_twice_}, m_width{m_width_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
    operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this);
    }
    // Get instance field reference: System.Int32 m_promotionCountdown
    int& dyn_m_promotionCountdown();
    // Get instance field reference: protected System.Int32 m_confWidth
    int& dyn_m_confWidth();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.ECPoint[] m_preComp
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>*& dyn_m_preComp();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.ECPoint[] m_preCompNeg
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>*& dyn_m_preCompNeg();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.ECPoint m_twice
    Org::BouncyCastle::Math::EC::ECPoint*& dyn_m_twice();
    // Get instance field reference: protected System.Int32 m_width
    int& dyn_m_width();
    // System.Int32 get_PromotionCountdown()
    // Offset: 0x1DC9D68
    int get_PromotionCountdown();
    // System.Void set_PromotionCountdown(System.Int32 value)
    // Offset: 0x1DC9D8C
    void set_PromotionCountdown(int value);
    // public System.Boolean get_IsPromoted()
    // Offset: 0x1DC9DB4
    bool get_IsPromoted();
    // public System.Int32 get_ConfWidth()
    // Offset: 0x1DC9DDC
    int get_ConfWidth();
    // public System.Void set_ConfWidth(System.Int32 value)
    // Offset: 0x1DC9DE4
    void set_ConfWidth(int value);
    // public Org.BouncyCastle.Math.EC.ECPoint[] get_PreComp()
    // Offset: 0x1DC9DEC
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* get_PreComp();
    // public System.Void set_PreComp(Org.BouncyCastle.Math.EC.ECPoint[] value)
    // Offset: 0x1DC9DF4
    void set_PreComp(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* value);
    // public Org.BouncyCastle.Math.EC.ECPoint[] get_PreCompNeg()
    // Offset: 0x1DC9DFC
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* get_PreCompNeg();
    // public System.Void set_PreCompNeg(Org.BouncyCastle.Math.EC.ECPoint[] value)
    // Offset: 0x1DC9E04
    void set_PreCompNeg(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* value);
    // public Org.BouncyCastle.Math.EC.ECPoint get_Twice()
    // Offset: 0x1DC9E0C
    Org::BouncyCastle::Math::EC::ECPoint* get_Twice();
    // public System.Void set_Twice(Org.BouncyCastle.Math.EC.ECPoint value)
    // Offset: 0x1DC9E14
    void set_Twice(Org::BouncyCastle::Math::EC::ECPoint* value);
    // public System.Int32 get_Width()
    // Offset: 0x1DC9E1C
    int get_Width();
    // public System.Void set_Width(System.Int32 value)
    // Offset: 0x1DC9E24
    void set_Width(int value);
    // System.Int32 DecrementPromotionCountdown()
    // Offset: 0x1DC9D24
    int DecrementPromotionCountdown();
    // public System.Void .ctor()
    // Offset: 0x1DC9E2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WNafPreCompInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WNafPreCompInfo*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
  #pragma pack(pop)
  static check_size<sizeof(WNafPreCompInfo), 48 + sizeof(int)> __Org_BouncyCastle_Math_EC_Multiplier_WNafPreCompInfoSizeCheck;
  static_assert(sizeof(WNafPreCompInfo) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PromotionCountdown
// Il2CppName: get_PromotionCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PromotionCountdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "get_PromotionCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PromotionCountdown
// Il2CppName: set_PromotionCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)(int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PromotionCountdown)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "set_PromotionCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_IsPromoted
// Il2CppName: get_IsPromoted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_IsPromoted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "get_IsPromoted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_ConfWidth
// Il2CppName: get_ConfWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_ConfWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "get_ConfWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_ConfWidth
// Il2CppName: set_ConfWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)(int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_ConfWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "set_ConfWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PreComp
// Il2CppName: get_PreComp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Math::EC::ECPoint*>* (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PreComp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "get_PreComp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PreComp
// Il2CppName: set_PreComp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PreComp)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "set_PreComp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PreCompNeg
// Il2CppName: get_PreCompNeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Math::EC::ECPoint*>* (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PreCompNeg)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "get_PreCompNeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PreCompNeg
// Il2CppName: set_PreCompNeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PreCompNeg)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "set_PreCompNeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_Twice
// Il2CppName: get_Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_Twice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "get_Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_Twice
// Il2CppName: set_Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_Twice)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "set_Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_Width
// Il2CppName: set_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)(int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_Width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "set_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::DecrementPromotionCountdown
// Il2CppName: DecrementPromotionCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::DecrementPromotionCountdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*), "DecrementPromotionCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
