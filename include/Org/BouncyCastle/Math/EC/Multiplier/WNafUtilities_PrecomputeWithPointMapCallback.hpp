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
  // Forward declaring type: ECPointMap
  class ECPointMap;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: WNafPreCompInfo
  class WNafPreCompInfo;
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/Org.BouncyCastle.Math.EC.Multiplier.PrecomputeWithPointMapCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class WNafUtilities::PrecomputeWithPointMapCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_point
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECPoint* m_point;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // private readonly Org.BouncyCastle.Math.EC.ECPointMap m_pointMap
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPointMap*) == 0x8);
    // private readonly Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo m_fromWNaf
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* m_fromWNaf;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*) == 0x8);
    // private readonly System.Boolean m_includeNegated
    // Size: 0x1
    // Offset: 0x28
    bool m_includeNegated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PrecomputeWithPointMapCallback
    PrecomputeWithPointMapCallback(Org::BouncyCastle::Math::EC::ECPoint* m_point_ = {}, Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap_ = {}, Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* m_fromWNaf_ = {}, bool m_includeNegated_ = {}) noexcept : m_point{m_point_}, m_pointMap{m_pointMap_}, m_fromWNaf{m_fromWNaf_}, m_includeNegated{m_includeNegated_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Get instance field: private readonly Org.BouncyCastle.Math.EC.ECPoint m_point
    Org::BouncyCastle::Math::EC::ECPoint* _get_m_point();
    // Set instance field: private readonly Org.BouncyCastle.Math.EC.ECPoint m_point
    void _set_m_point(Org::BouncyCastle::Math::EC::ECPoint* value);
    // Get instance field: private readonly Org.BouncyCastle.Math.EC.ECPointMap m_pointMap
    Org::BouncyCastle::Math::EC::ECPointMap* _get_m_pointMap();
    // Set instance field: private readonly Org.BouncyCastle.Math.EC.ECPointMap m_pointMap
    void _set_m_pointMap(Org::BouncyCastle::Math::EC::ECPointMap* value);
    // Get instance field: private readonly Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo m_fromWNaf
    Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* _get_m_fromWNaf();
    // Set instance field: private readonly Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo m_fromWNaf
    void _set_m_fromWNaf(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* value);
    // Get instance field: private readonly System.Boolean m_includeNegated
    bool _get_m_includeNegated();
    // Set instance field: private readonly System.Boolean m_includeNegated
    void _set_m_includeNegated(bool value);
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint point, Org.BouncyCastle.Math.EC.ECPointMap pointMap, Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo fromWNaf, System.Boolean includeNegated)
    // Offset: 0x1DCAEAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WNafUtilities::PrecomputeWithPointMapCallback* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* point, Org::BouncyCastle::Math::EC::ECPointMap* pointMap, Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* fromWNaf, bool includeNegated) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WNafUtilities::PrecomputeWithPointMapCallback*, creationType>(point, pointMap, fromWNaf, includeNegated)));
    }
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x1DCBB64
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
    // private System.Boolean CheckExisting(Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo existingWNaf, System.Int32 width, System.Int32 reqPreCompLen, System.Boolean includeNegated)
    // Offset: 0x1DCBF80
    bool CheckExisting(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* existingWNaf, int width, int reqPreCompLen, bool includeNegated);
    // private System.Boolean CheckTable(Org.BouncyCastle.Math.EC.ECPoint[] table, System.Int32 reqLen)
    // Offset: 0x1DCC020
    bool CheckTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* table, int reqLen);
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/Org.BouncyCastle.Math.EC.Multiplier.PrecomputeWithPointMapCallback
  #pragma pack(pop)
  static check_size<sizeof(WNafUtilities::PrecomputeWithPointMapCallback), 40 + sizeof(bool)> __Org_BouncyCastle_Math_EC_Multiplier_WNafUtilities_PrecomputeWithPointMapCallbackSizeCheck;
  static_assert(sizeof(WNafUtilities::PrecomputeWithPointMapCallback) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/PrecomputeWithPointMapCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::Precompute)> {
  static const MethodInfo* get() {
    static auto* existing = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existing});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::CheckExisting
// Il2CppName: CheckExisting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, int, int, bool)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::CheckExisting)> {
  static const MethodInfo* get() {
    static auto* existingWNaf = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reqPreCompLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* includeNegated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback*), "CheckExisting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingWNaf, width, reqPreCompLen, includeNegated});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::CheckTable
// Il2CppName: CheckTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback::CheckTable)> {
  static const MethodInfo* get() {
    static auto* table = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* reqLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::PrecomputeWithPointMapCallback*), "CheckTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, reqLen});
  }
};
