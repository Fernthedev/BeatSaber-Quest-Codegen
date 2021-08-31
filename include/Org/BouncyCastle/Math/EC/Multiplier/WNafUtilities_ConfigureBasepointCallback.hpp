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
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/Org.BouncyCastle.Math.EC.Multiplier.ConfigureBasepointCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class WNafUtilities::ConfigureBasepointCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECCurve m_curve
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECCurve* m_curve;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // private readonly System.Int32 m_confWidth
    // Size: 0x4
    // Offset: 0x18
    int m_confWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConfigureBasepointCallback
    ConfigureBasepointCallback(Org::BouncyCastle::Math::EC::ECCurve* m_curve_ = {}, int m_confWidth_ = {}) noexcept : m_curve{m_curve_}, m_confWidth{m_confWidth_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.ECCurve m_curve
    Org::BouncyCastle::Math::EC::ECCurve*& dyn_m_curve();
    // Get instance field reference: private readonly System.Int32 m_confWidth
    int& dyn_m_confWidth();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, System.Int32 confWidth)
    // Offset: 0x1DCA328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WNafUtilities::ConfigureBasepointCallback* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, int confWidth) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WNafUtilities::ConfigureBasepointCallback*, creationType>(curve, confWidth)));
    }
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x1DCB04C
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities/Org.BouncyCastle.Math.EC.Multiplier.ConfigureBasepointCallback
  #pragma pack(pop)
  static check_size<sizeof(WNafUtilities::ConfigureBasepointCallback), 24 + sizeof(int)> __Org_BouncyCastle_Math_EC_Multiplier_WNafUtilities_ConfigureBasepointCallbackSizeCheck;
  static_assert(sizeof(WNafUtilities::ConfigureBasepointCallback) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafUtilities/ConfigureBasepointCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(&Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback::Precompute)> {
  static const MethodInfo* get() {
    static auto* existing = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WNafUtilities::ConfigureBasepointCallback*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existing});
  }
};
