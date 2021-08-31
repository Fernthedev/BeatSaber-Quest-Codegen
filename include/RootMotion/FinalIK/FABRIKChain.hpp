// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FABRIK
  class FABRIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FABRIKChain
  // [TokenAttribute] Offset: FFFFFFFF
  class FABRIKChain : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FABRIK ik
    // Size: 0x8
    // Offset: 0x10
    RootMotion::FinalIK::FABRIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FABRIK*) == 0x8);
    // [RangeAttribute] Offset: 0xE26168
    // public System.Single pull
    // Size: 0x4
    // Offset: 0x18
    float pull;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE26180
    // public System.Single pin
    // Size: 0x4
    // Offset: 0x1C
    float pin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32[] children
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* children;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: FABRIKChain
    FABRIKChain(RootMotion::FinalIK::FABRIK* ik_ = {}, float pull_ = {}, float pin_ = {}, ::Array<int>* children_ = {}) noexcept : ik{ik_}, pull{pull_}, pin{pin_}, children{children_} {}
    // Get instance field reference: public RootMotion.FinalIK.FABRIK ik
    RootMotion::FinalIK::FABRIK*& dyn_ik();
    // Get instance field reference: public System.Single pull
    float& dyn_pull();
    // Get instance field reference: public System.Single pin
    float& dyn_pin();
    // Get instance field reference: public System.Int32[] children
    ::Array<int>*& dyn_children();
    // public System.Boolean IsValid(ref System.String message)
    // Offset: 0x1D32F74
    bool IsValid(ByRef<::Il2CppString*> message);
    // public System.Void Initiate()
    // Offset: 0x1D3303C
    void Initiate();
    // public System.Void Stage1(RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x1D3305C
    void Stage1(::Array<RootMotion::FinalIK::FABRIKChain*>* chain);
    // public System.Void Stage2(UnityEngine.Vector3 rootPosition, RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x1D3342C
    void Stage2(UnityEngine::Vector3 rootPosition, ::Array<RootMotion::FinalIK::FABRIKChain*>* chain);
    // private UnityEngine.Vector3 GetCentroid(RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x1D33130
    UnityEngine::Vector3 GetCentroid(::Array<RootMotion::FinalIK::FABRIKChain*>* chain);
    // public System.Void .ctor()
    // Offset: 0x1D33524
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FABRIKChain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FABRIKChain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FABRIKChain*, creationType>()));
    }
  }; // RootMotion.FinalIK.FABRIKChain
  #pragma pack(pop)
  static check_size<sizeof(FABRIKChain), 32 + sizeof(::Array<int>*)> __RootMotion_FinalIK_FABRIKChainSizeCheck;
  static_assert(sizeof(FABRIKChain) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FABRIKChain*, "RootMotion.FinalIK", "FABRIKChain");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::FABRIKChain::*)(ByRef<::Il2CppString*>)>(&RootMotion::FinalIK::FABRIKChain::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKChain::*)()>(&RootMotion::FinalIK::FABRIKChain::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::Stage1
// Il2CppName: Stage1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKChain::*)(::Array<RootMotion::FinalIK::FABRIKChain*>*)>(&RootMotion::FinalIK::FABRIKChain::Stage1)> {
  static const MethodInfo* get() {
    static auto* chain = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FABRIKChain"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "Stage1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::Stage2
// Il2CppName: Stage2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKChain::*)(UnityEngine::Vector3, ::Array<RootMotion::FinalIK::FABRIKChain*>*)>(&RootMotion::FinalIK::FABRIKChain::Stage2)> {
  static const MethodInfo* get() {
    static auto* rootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* chain = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FABRIKChain"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "Stage2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootPosition, chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::GetCentroid
// Il2CppName: GetCentroid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::FABRIKChain::*)(::Array<RootMotion::FinalIK::FABRIKChain*>*)>(&RootMotion::FinalIK::FABRIKChain::GetCentroid)> {
  static const MethodInfo* get() {
    static auto* chain = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FABRIKChain"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "GetCentroid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
