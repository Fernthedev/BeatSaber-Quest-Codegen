// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Amplifier
  // [TokenAttribute] Offset: FFFFFFFF
  class Amplifier : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: RootMotion::FinalIK::Amplifier::Body
    class Body;
    // [TooltipAttribute] Offset: 0xE27D50
    // public RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body[] bodies
    // Size: 0x8
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::Amplifier::Body*>* bodies;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Amplifier::Body*>*) == 0x8);
    // Creating value type constructor for type: Amplifier
    Amplifier(::Array<RootMotion::FinalIK::Amplifier::Body*>* bodies_ = {}) noexcept : bodies{bodies_} {}
    // Get instance field reference: public RootMotion.FinalIK.Amplifier/RootMotion.FinalIK.Body[] bodies
    ::Array<RootMotion::FinalIK::Amplifier::Body*>*& dyn_bodies();
    // public System.Void .ctor()
    // Offset: 0x1D30A4C
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Amplifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Amplifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Amplifier*, creationType>()));
    }
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1D304A8
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
  }; // RootMotion.FinalIK.Amplifier
  #pragma pack(pop)
  static check_size<sizeof(Amplifier), 48 + sizeof(::Array<RootMotion::FinalIK::Amplifier::Body*>*)> __RootMotion_FinalIK_AmplifierSizeCheck;
  static_assert(sizeof(Amplifier) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier*, "RootMotion.FinalIK", "Amplifier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::Amplifier::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Amplifier::*)()>(&RootMotion::FinalIK::Amplifier::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Amplifier*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
