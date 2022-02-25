// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundTextureGradient
#include "GlobalNamespace/BloomPrePassBackgroundTextureGradient.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundGradient
  class BloomPrePassBackgroundGradient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundGradient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundGradient*, "", "BloomPrePassBackgroundGradient");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundGradient
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundGradient : public GlobalNamespace::BloomPrePassBackgroundTextureGradient {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Gradient _gradient
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Gradient* gradient;
    // Field size check
    static_assert(sizeof(UnityEngine::Gradient*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Gradient _gradient
    UnityEngine::Gradient*& dyn__gradient();
    // public System.Void .ctor()
    // Offset: 0x2084E38
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::.ctor()
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundGradient*, creationType>()));
    }
    // protected override System.Void UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    // Offset: 0x2084DC0
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    void UpdatePixels(Unity::Collections::NativeArray_1<UnityEngine::Color32> pixels, int numberOfPixels);
  }; // BloomPrePassBackgroundGradient
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundGradient), 64 + sizeof(UnityEngine::Gradient*)> __GlobalNamespace_BloomPrePassBackgroundGradientSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundGradient) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels
// Il2CppName: UpdatePixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundGradient::*)(Unity::Collections::NativeArray_1<UnityEngine::Color32>, int)>(&GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels)> {
  static const MethodInfo* get() {
    static auto* pixels = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    static auto* numberOfPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundGradient*), "UpdatePixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels, numberOfPixels});
  }
};
