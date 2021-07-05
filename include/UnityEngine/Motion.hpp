// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Motion
  // [NativeHeaderAttribute] Offset: DA9290
  class Motion : public UnityEngine::Object {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xDAA174
    // [CompilerGeneratedAttribute] Offset: 0xDAA174
    // private readonly System.Boolean <isAnimatorMotion>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool isAnimatorMotion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Motion
    Motion(bool isAnimatorMotion_ = {}) noexcept : isAnimatorMotion{isAnimatorMotion_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isLooping()
    // Offset: 0x235D640
    bool get_isLooping();
    // protected System.Void .ctor()
    // Offset: 0x23527C8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Motion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Motion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Motion*, creationType>()));
    }
  }; // UnityEngine.Motion
  #pragma pack(pop)
  static check_size<sizeof(Motion), 24 + sizeof(bool)> __UnityEngine_MotionSizeCheck;
  static_assert(sizeof(Motion) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Motion*, "UnityEngine", "Motion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Motion::get_isLooping
// Il2CppName: get_isLooping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Motion::*)()>(&UnityEngine::Motion::get_isLooping)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Motion*), "get_isLooping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Motion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
