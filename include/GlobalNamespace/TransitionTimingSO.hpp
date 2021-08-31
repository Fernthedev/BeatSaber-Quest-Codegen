// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TransitionTimingSO
  // [TokenAttribute] Offset: FFFFFFFF
  class TransitionTimingSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private Tweening.EaseType _easeType
    // Size: 0x4
    // Offset: 0x18
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // private System.Single _easeDuration
    // Size: 0x4
    // Offset: 0x1C
    float easeDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TransitionTimingSO
    TransitionTimingSO(Tweening::EaseType easeType_ = {}, float easeDuration_ = {}) noexcept : easeType{easeType_}, easeDuration{easeDuration_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private Tweening.EaseType _easeType
    Tweening::EaseType _get__easeType();
    // Set instance field: private Tweening.EaseType _easeType
    void _set__easeType(Tweening::EaseType value);
    // Get instance field: private System.Single _easeDuration
    float _get__easeDuration();
    // Set instance field: private System.Single _easeDuration
    void _set__easeDuration(float value);
    // public Tweening.EaseType get_easeType()
    // Offset: 0x1097A6C
    Tweening::EaseType get_easeType();
    // public System.Single get_easeDuration()
    // Offset: 0x1097A74
    float get_easeDuration();
    // public System.Void .ctor()
    // Offset: 0x1097A7C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransitionTimingSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TransitionTimingSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransitionTimingSO*, creationType>()));
    }
  }; // TransitionTimingSO
  #pragma pack(pop)
  static check_size<sizeof(TransitionTimingSO), 28 + sizeof(float)> __GlobalNamespace_TransitionTimingSOSizeCheck;
  static_assert(sizeof(TransitionTimingSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TransitionTimingSO*, "", "TransitionTimingSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TransitionTimingSO::get_easeType
// Il2CppName: get_easeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Tweening::EaseType (GlobalNamespace::TransitionTimingSO::*)()>(&GlobalNamespace::TransitionTimingSO::get_easeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransitionTimingSO*), "get_easeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransitionTimingSO::get_easeDuration
// Il2CppName: get_easeDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TransitionTimingSO::*)()>(&GlobalNamespace::TransitionTimingSO::get_easeDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransitionTimingSO*), "get_easeDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransitionTimingSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
