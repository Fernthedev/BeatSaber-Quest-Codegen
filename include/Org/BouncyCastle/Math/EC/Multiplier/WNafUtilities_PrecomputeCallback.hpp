// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
#include "Org/BouncyCastle/Math/EC/Multiplier/WNafUtilities.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
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
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
  // Forward declaring type: WNafPreCompInfo
  class WNafPreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/Org.BouncyCastle.Math.EC.Multiplier.PrecomputeCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class WNafUtilities::PrecomputeCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECPoint* m_p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // private readonly System.Int32 m_minWidth
    // Size: 0x4
    // Offset: 0x18
    int m_minWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Boolean m_includeNegated
    // Size: 0x1
    // Offset: 0x1C
    bool m_includeNegated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PrecomputeCallback
    PrecomputeCallback(Org::BouncyCastle::Math::EC::ECPoint* m_p_ = {}, int m_minWidth_ = {}, bool m_includeNegated_ = {}) noexcept : m_p{m_p_}, m_minWidth{m_minWidth_}, m_includeNegated{m_includeNegated_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Get instance field: private readonly Org.BouncyCastle.Math.EC.ECPoint m_p
    Org::BouncyCastle::Math::EC::ECPoint* _get_m_p();
    // Set instance field: private readonly Org.BouncyCastle.Math.EC.ECPoint m_p
    void _set_m_p(Org::BouncyCastle::Math::EC::ECPoint* value);
    // Get instance field: private readonly System.Int32 m_minWidth
    int _get_m_minWidth();
    // Set instance field: private readonly System.Int32 m_minWidth
    void _set_m_minWidth(int value);
    // Get instance field: private readonly System.Boolean m_includeNegated
    bool _get_m_includeNegated();
    // Set instance field: private readonly System.Boolean m_includeNegated
    void _set_m_includeNegated(bool value);
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint p, System.Int32 minWidth, System.Boolean includeNegated)
    // Offset: 0x1DCAD28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WNafUtilities::PrecomputeCallback* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* p, int minWidth, bool includeNegated) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WNafUtilities::PrecomputeCallback*, creationType>(p, minWidth, includeNegated)));
    }
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x1DCB210
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
    // private System.Boolean CheckExisting(Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo existingWNaf, System.Int32 width, System.Int32 reqPreCompLen, System.Boolean includeNegated)
    // Offset: 0x1DCBA30
    bool CheckExisting(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int width, int reqPreCompLen, bool includeNegated);
    // private System.Boolean CheckTable(Org.BouncyCastle.Math.EC.ECPoint[] table, System.Int32 reqLen)
    // Offset: 0x1DCBB48
    bool CheckTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* table, int reqLen);
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/Org.BouncyCastle.Math.EC.Multiplier.PrecomputeCallback
  #pragma pack(pop)
  static check_size<sizeof(WNafUtilities::PrecomputeCallback), 28 + sizeof(bool)> __Org_BouncyCastle_Math_EC_Multiplier_WNafUtilities_PrecomputeCallbackSizeCheck;
  static_assert(sizeof(WNafUtilities::PrecomputeCallback) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/PrecomputeCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::Precompute)> {
  static const MethodInfo* get() {
    static auto* existing = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existing});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::CheckExisting
// Il2CppName: CheckExisting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, int, int, bool)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::CheckExisting)> {
  static const MethodInfo* get() {
    static auto* existingWNaf = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reqPreCompLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* includeNegated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback*), "CheckExisting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingWNaf, width, reqPreCompLen, includeNegated});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::CheckTable
// Il2CppName: CheckTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback::CheckTable)> {
  static const MethodInfo* get() {
    static auto* table = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* reqLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeCallback*), "CheckTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, reqLen});
  }
};
