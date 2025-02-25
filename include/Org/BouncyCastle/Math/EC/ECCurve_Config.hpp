// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
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
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECCurve/Org.BouncyCastle.Math.EC.Config
  // [TokenAttribute] Offset: FFFFFFFF
  class ECCurve::Config : public ::Il2CppObject {
    public:
    // protected Org.BouncyCastle.Math.EC.ECCurve outer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECCurve* outer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // protected System.Int32 coord
    // Size: 0x4
    // Offset: 0x18
    int coord;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: coord and: endomorphism
    char __padding1[0x4] = {};
    // protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier multiplier
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*) == 0x8);
    // Creating value type constructor for type: Config
    Config(Org::BouncyCastle::Math::EC::ECCurve* outer_ = {}, int coord_ = {}, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism_ = {}, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier_ = {}) noexcept : outer{outer_}, coord{coord_}, endomorphism{endomorphism_}, multiplier{multiplier_} {}
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.ECCurve outer
    Org::BouncyCastle::Math::EC::ECCurve*& dyn_outer();
    // Get instance field reference: protected System.Int32 coord
    int& dyn_coord();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& dyn_endomorphism();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier multiplier
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& dyn_multiplier();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve outer, System.Int32 coord, Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism, Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier multiplier)
    // Offset: 0x213FDD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECCurve::Config* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* outer, int coord, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ECCurve::Config::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECCurve::Config*, creationType>(outer, coord, endomorphism, multiplier)));
    }
    // public Org.BouncyCastle.Math.EC.ECCurve/Org.BouncyCastle.Math.EC.Config SetEndomorphism(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism)
    // Offset: 0x21414B8
    Org::BouncyCastle::Math::EC::ECCurve::Config* SetEndomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);
    // public Org.BouncyCastle.Math.EC.ECCurve Create()
    // Offset: 0x21414C0
    Org::BouncyCastle::Math::EC::ECCurve* Create();
  }; // Org.BouncyCastle.Math.EC.ECCurve/Org.BouncyCastle.Math.EC.Config
  #pragma pack(pop)
  static check_size<sizeof(ECCurve::Config), 40 + sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*)> __Org_BouncyCastle_Math_EC_ECCurve_ConfigSizeCheck;
  static_assert(sizeof(ECCurve::Config) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECCurve::Config*, "Org.BouncyCastle.Math.EC", "ECCurve/Config");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::Config::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::Config::SetEndomorphism
// Il2CppName: SetEndomorphism
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve::Config* (Org::BouncyCastle::Math::EC::ECCurve::Config::*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*)>(&Org::BouncyCastle::Math::EC::ECCurve::Config::SetEndomorphism)> {
  static const MethodInfo* get() {
    static auto* endomorphism = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve::Config*), "SetEndomorphism", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endomorphism});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::Config::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Math::EC::ECCurve::Config::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::Config::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve::Config*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
