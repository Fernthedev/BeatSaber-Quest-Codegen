// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundTextureGradient
  // [ExecuteAlways] Offset: DF55AC
  class BloomPrePassBackgroundTextureGradient : public GlobalNamespace::BloomPrePassNonLightPass {
    public:
    // private UnityEngine.Texture2D _texture
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBackgroundTextureGradient
    BloomPrePassBackgroundTextureGradient(UnityEngine::Texture2D* texture_ = {}, UnityEngine::Material* material_ = {}) noexcept : texture{texture_}, material{material_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF5D70
    // Get static field: static private readonly System.Int32 _gradientTexID
    static int _get__gradientTexID();
    // Set static field: static private readonly System.Int32 _gradientTexID
    static void _set__gradientTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF5D80
    // Get static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static int _get__inverseProjectionMatrixID();
    // Set static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static void _set__inverseProjectionMatrixID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF5D90
    // Get static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static int _get__cameraToWorldMatrixID();
    // Set static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static void _set__cameraToWorldMatrixID(int value);
    // static field const value: static private System.String _useToneMappingKeyword
    static constexpr const char* _useToneMappingKeyword = "USE_TONE_MAPPING";
    // Get static field: static private System.String _useToneMappingKeyword
    static ::Il2CppString* _get__useToneMappingKeyword();
    // Set static field: static private System.String _useToneMappingKeyword
    static void _set__useToneMappingKeyword(::Il2CppString* value);
    // static field const value: static private System.Int32 kTextureWidth
    static constexpr const int kTextureWidth = 128;
    // Get static field: static private System.Int32 kTextureWidth
    static int _get_kTextureWidth();
    // Set static field: static private System.Int32 kTextureWidth
    static void _set_kTextureWidth(int value);
    // private System.Void InitIfNeeded()
    // Offset: 0x1D866A4
    void InitIfNeeded();
    // protected System.Void Start()
    // Offset: 0x1D868A8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1D868AC
    void OnDestroy();
    // protected System.Void UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    // Offset: 0xFFFFFFFF
    void UpdatePixels(Unity::Collections::NativeArray_1<UnityEngine::Color32> pixels, int numberOfPixels);
    // public System.Void UpdateGradientTexture()
    // Offset: 0x1D86014
    void UpdateGradientTexture();
    // protected override System.Void OnValidate()
    // Offset: 0x1D868DC
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::OnValidate()
    void OnValidate();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1D8693C
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(UnityEngine::RenderTexture* dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix);
    // protected System.Void .ctor()
    // Offset: 0x1D85E54
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundTextureGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundTextureGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundTextureGradient*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D86A9C
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassBackgroundTextureGradient
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundTextureGradient), 40 + sizeof(UnityEngine::Material*)> __GlobalNamespace_BloomPrePassBackgroundTextureGradientSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundTextureGradient) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundTextureGradient*, "", "BloomPrePassBackgroundTextureGradient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::InitIfNeeded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdatePixels
// Il2CppName: UpdatePixels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(Unity::Collections::NativeArray_1<UnityEngine::Color32>, int)>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdatePixels)> {
  const MethodInfo* get() {
    static auto* pixels = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    static auto* numberOfPixels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "UpdatePixels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels, numberOfPixels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdateGradientTexture
// Il2CppName: UpdateGradientTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::UpdateGradientTexture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "UpdateGradientTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::OnValidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundTextureGradient::*)(UnityEngine::RenderTexture*, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::Render)> {
  const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, viewMatrix, projectionMatrix});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundTextureGradient::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassBackgroundTextureGradient::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundTextureGradient*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
