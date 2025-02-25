// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: KawaseBlurRendererSO
  // [TokenAttribute] Offset: FFFFFFFF
  class KawaseBlurRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::KernelSize
    struct KernelSize;
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::WeightsType
    struct WeightsType;
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::BloomKernel
    class BloomKernel;
    // Nested type: GlobalNamespace::KawaseBlurRendererSO::Pass
    struct Pass;
    // private UnityEngine.Shader _kawaseBlurShader
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Shader* kawaseBlurShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader _additiveShader
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Shader* additiveShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader _tintShader
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Shader* tintShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Material _kawaseBlurMaterial
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* kawaseBlurMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _additiveMaterial
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Material* additiveMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _tintMaterial
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Material* tintMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _commandBuffersMaterial
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Material* commandBuffersMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Int32[][] _kernels
    // Size: 0x8
    // Offset: 0x50
    ::Array<::Array<int>*>* kernels;
    // Field size check
    static_assert(sizeof(::Array<::Array<int>*>*) == 0x8);
    // private KawaseBlurRendererSO/BloomKernel[] _bloomKernels
    // Size: 0x8
    // Offset: 0x58
    ::Array<GlobalNamespace::KawaseBlurRendererSO::BloomKernel*>* bloomKernels;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::KawaseBlurRendererSO::BloomKernel*>*) == 0x8);
    // private UnityEngine.RenderTexture[] _blurTextures
    // Size: 0x8
    // Offset: 0x60
    ::Array<UnityEngine::RenderTexture*>* blurTextures;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RenderTexture*>*) == 0x8);
    // Creating value type constructor for type: KawaseBlurRendererSO
    KawaseBlurRendererSO(UnityEngine::Shader* kawaseBlurShader_ = {}, UnityEngine::Shader* additiveShader_ = {}, UnityEngine::Shader* tintShader_ = {}, UnityEngine::Material* kawaseBlurMaterial_ = {}, UnityEngine::Material* additiveMaterial_ = {}, UnityEngine::Material* tintMaterial_ = {}, UnityEngine::Material* commandBuffersMaterial_ = {}, ::Array<::Array<int>*>* kernels_ = {}, ::Array<GlobalNamespace::KawaseBlurRendererSO::BloomKernel*>* bloomKernels_ = {}, ::Array<UnityEngine::RenderTexture*>* blurTextures_ = {}) noexcept : kawaseBlurShader{kawaseBlurShader_}, additiveShader{additiveShader_}, tintShader{tintShader_}, kawaseBlurMaterial{kawaseBlurMaterial_}, additiveMaterial{additiveMaterial_}, tintMaterial{tintMaterial_}, commandBuffersMaterial{commandBuffersMaterial_}, kernels{kernels_}, bloomKernels{bloomKernels_}, blurTextures{blurTextures_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxBloomIterations
    static constexpr const int kMaxBloomIterations = 5;
    // Get static field: static private System.Int32 kMaxBloomIterations
    static int _get_kMaxBloomIterations();
    // Set static field: static private System.Int32 kMaxBloomIterations
    static void _set_kMaxBloomIterations(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE199D8
    // Get static field: static private readonly System.Single[][] kBloomIterationWeights
    static ::Array<::Array<float>*>* _get_kBloomIterationWeights();
    // Set static field: static private readonly System.Single[][] kBloomIterationWeights
    static void _set_kBloomIterationWeights(::Array<::Array<float>*>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE199E8
    // Get static field: static private readonly System.Int32 _offsetID
    static int _get__offsetID();
    // Set static field: static private readonly System.Int32 _offsetID
    static void _set__offsetID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE199F8
    // Get static field: static private readonly System.Int32 _boostID
    static int _get__boostID();
    // Set static field: static private readonly System.Int32 _boostID
    static void _set__boostID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19A08
    // Get static field: static private readonly System.Int32 _additiveAlphaID
    static int _get__additiveAlphaID();
    // Set static field: static private readonly System.Int32 _additiveAlphaID
    static void _set__additiveAlphaID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19A18
    // Get static field: static private readonly System.Int32 _alphaID
    static int _get__alphaID();
    // Set static field: static private readonly System.Int32 _alphaID
    static void _set__alphaID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19A28
    // Get static field: static private readonly System.Int32 _tintColorID
    static int _get__tintColorID();
    // Set static field: static private readonly System.Int32 _tintColorID
    static void _set__tintColorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19A38
    // Get static field: static private readonly System.Int32 _alphaWeightsID
    static int _get__alphaWeightsID();
    // Set static field: static private readonly System.Int32 _alphaWeightsID
    static void _set__alphaWeightsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19A48
    // Get static field: static private readonly System.Int32 _tempTexture0ID
    static int _get__tempTexture0ID();
    // Set static field: static private readonly System.Int32 _tempTexture0ID
    static void _set__tempTexture0ID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19A58
    // Get static field: static private readonly System.Int32 _tempTexture1ID
    static int _get__tempTexture1ID();
    // Set static field: static private readonly System.Int32 _tempTexture1ID
    static void _set__tempTexture1ID(int value);
    // Get instance field reference: private UnityEngine.Shader _kawaseBlurShader
    UnityEngine::Shader*& dyn__kawaseBlurShader();
    // Get instance field reference: private UnityEngine.Shader _additiveShader
    UnityEngine::Shader*& dyn__additiveShader();
    // Get instance field reference: private UnityEngine.Shader _tintShader
    UnityEngine::Shader*& dyn__tintShader();
    // Get instance field reference: private UnityEngine.Material _kawaseBlurMaterial
    UnityEngine::Material*& dyn__kawaseBlurMaterial();
    // Get instance field reference: private UnityEngine.Material _additiveMaterial
    UnityEngine::Material*& dyn__additiveMaterial();
    // Get instance field reference: private UnityEngine.Material _tintMaterial
    UnityEngine::Material*& dyn__tintMaterial();
    // Get instance field reference: private UnityEngine.Material _commandBuffersMaterial
    UnityEngine::Material*& dyn__commandBuffersMaterial();
    // Get instance field reference: private System.Int32[][] _kernels
    ::Array<::Array<int>*>*& dyn__kernels();
    // Get instance field reference: private KawaseBlurRendererSO/BloomKernel[] _bloomKernels
    ::Array<GlobalNamespace::KawaseBlurRendererSO::BloomKernel*>*& dyn__bloomKernels();
    // Get instance field reference: private UnityEngine.RenderTexture[] _blurTextures
    ::Array<UnityEngine::RenderTexture*>*& dyn__blurTextures();
    // public System.Int32[] GetBlurKernel(KawaseBlurRendererSO/KernelSize kernelSize)
    // Offset: 0x1E17118
    ::Array<int>* GetBlurKernel(GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize);
    // protected System.Void OnDisable()
    // Offset: 0x1E176A0
    void OnDisable();
    // public System.Void Bloom(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Int32 iterationsStart, System.Int32 iterations, System.Single boost, System.Single alphaWeights, KawaseBlurRendererSO/WeightsType blurStartWeightsType, System.Single[] bloomIterationWeights)
    // Offset: 0x1E176E8
    void Bloom(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, int iterationsStart, int iterations, float boost, float alphaWeights, GlobalNamespace::KawaseBlurRendererSO::WeightsType blurStartWeightsType, ::Array<float>* bloomIterationWeights);
    // public System.Void DoubleBlur(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, KawaseBlurRendererSO/KernelSize kernelSize0, System.Single boost0, KawaseBlurRendererSO/KernelSize kernelSize1, System.Single boost1, System.Single secondBlurAlpha, System.Int32 downsample, System.Boolean gammaCorrection)
    // Offset: 0x1E1812C
    void DoubleBlur(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize0, float boost0, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize1, float boost1, float secondBlurAlpha, int downsample, bool gammaCorrection);
    // public UnityEngine.Texture2D Blur(UnityEngine.Texture src, KawaseBlurRendererSO/KernelSize kernelSize, System.Int32 downsample)
    // Offset: 0x1E183A4
    UnityEngine::Texture2D* Blur(UnityEngine::Texture* src, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize, int downsample);
    // public System.Void Blur(UnityEngine.Texture src, UnityEngine.RenderTexture dest, KawaseBlurRendererSO/KernelSize kernelSize, System.Single boost, System.Int32 downsample)
    // Offset: 0x1E1846C
    void Blur(UnityEngine::Texture* src, UnityEngine::RenderTexture* dest, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize, float boost, int downsample);
    // private System.Void Blur(UnityEngine.Texture src, UnityEngine.RenderTexture dest, System.Int32[] kernel, System.Single boost, System.Int32 downsample, System.Int32 startIdx, System.Int32 length, System.Single alphaWeights, System.Single additiveAlpha, System.Boolean additivelyBlendToDest, System.Boolean gammaCorrection, KawaseBlurRendererSO/WeightsType blurStartWeightsType)
    // Offset: 0x1E17C2C
    void Blur(UnityEngine::Texture* src, UnityEngine::RenderTexture* dest, ::Array<int>* kernel, float boost, int downsample, int startIdx, int length, float alphaWeights, float additiveAlpha, bool additivelyBlendToDest, bool gammaCorrection, GlobalNamespace::KawaseBlurRendererSO::WeightsType blurStartWeightsType);
    // public System.Void AlphaWeights(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1E184F8
    void AlphaWeights(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public UnityEngine.Rendering.CommandBuffer CreateBlurCommandBuffer(System.Int32 width, System.Int32 height, System.String globalTextureName, KawaseBlurRendererSO/KernelSize kernelSize, System.Single boost)
    // Offset: 0x1E18604
    UnityEngine::Rendering::CommandBuffer* CreateBlurCommandBuffer(int width, int height, ::Il2CppString* globalTextureName, GlobalNamespace::KawaseBlurRendererSO::KernelSize kernelSize, float boost);
    // public System.Void .ctor()
    // Offset: 0x1E18924
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KawaseBlurRendererSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::KawaseBlurRendererSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KawaseBlurRendererSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E1892C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void OnEnable()
    // Offset: 0x1E17324
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // KawaseBlurRendererSO
  #pragma pack(pop)
  static check_size<sizeof(KawaseBlurRendererSO), 96 + sizeof(::Array<UnityEngine::RenderTexture*>*)> __GlobalNamespace_KawaseBlurRendererSOSizeCheck;
  static_assert(sizeof(KawaseBlurRendererSO) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO*, "", "KawaseBlurRendererSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel
// Il2CppName: GetBlurKernel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (GlobalNamespace::KawaseBlurRendererSO::*)(GlobalNamespace::KawaseBlurRendererSO::KernelSize)>(&GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel)> {
  static const MethodInfo* get() {
    static auto* kernelSize = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/KernelSize")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "GetBlurKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kernelSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)()>(&GlobalNamespace::KawaseBlurRendererSO::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::Bloom
// Il2CppName: Bloom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*, int, int, float, float, GlobalNamespace::KawaseBlurRendererSO::WeightsType, ::Array<float>*)>(&GlobalNamespace::KawaseBlurRendererSO::Bloom)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* iterationsStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* iterations = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* boost = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alphaWeights = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* blurStartWeightsType = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/WeightsType")->byval_arg;
    static auto* bloomIterationWeights = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "Bloom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, iterationsStart, iterations, boost, alphaWeights, blurStartWeightsType, bloomIterationWeights});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::DoubleBlur
// Il2CppName: DoubleBlur
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*, GlobalNamespace::KawaseBlurRendererSO::KernelSize, float, GlobalNamespace::KawaseBlurRendererSO::KernelSize, float, float, int, bool)>(&GlobalNamespace::KawaseBlurRendererSO::DoubleBlur)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* kernelSize0 = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/KernelSize")->byval_arg;
    static auto* boost0 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* kernelSize1 = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/KernelSize")->byval_arg;
    static auto* boost1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* secondBlurAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* downsample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gammaCorrection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "DoubleBlur", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, kernelSize0, boost0, kernelSize1, boost1, secondBlurAlpha, downsample, gammaCorrection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::Blur
// Il2CppName: Blur
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::Texture*, GlobalNamespace::KawaseBlurRendererSO::KernelSize, int)>(&GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* kernelSize = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/KernelSize")->byval_arg;
    static auto* downsample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "Blur", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, kernelSize, downsample});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::Blur
// Il2CppName: Blur
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::Texture*, UnityEngine::RenderTexture*, GlobalNamespace::KawaseBlurRendererSO::KernelSize, float, int)>(&GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* kernelSize = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/KernelSize")->byval_arg;
    static auto* boost = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* downsample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "Blur", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, kernelSize, boost, downsample});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::Blur
// Il2CppName: Blur
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::Texture*, UnityEngine::RenderTexture*, ::Array<int>*, float, int, int, int, float, float, bool, bool, GlobalNamespace::KawaseBlurRendererSO::WeightsType)>(&GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* kernel = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* boost = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* downsample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* alphaWeights = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* additiveAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* additivelyBlendToDest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* gammaCorrection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* blurStartWeightsType = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/WeightsType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "Blur", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, kernel, boost, downsample, startIdx, length, alphaWeights, additiveAlpha, additivelyBlendToDest, gammaCorrection, blurStartWeightsType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::AlphaWeights
// Il2CppName: AlphaWeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*)>(&GlobalNamespace::KawaseBlurRendererSO::AlphaWeights)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "AlphaWeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer
// Il2CppName: CreateBlurCommandBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CommandBuffer* (GlobalNamespace::KawaseBlurRendererSO::*)(int, int, ::Il2CppString*, GlobalNamespace::KawaseBlurRendererSO::KernelSize, float)>(&GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* globalTextureName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* kernelSize = &::il2cpp_utils::GetClassFromName("", "KawaseBlurRendererSO/KernelSize")->byval_arg;
    static auto* boost = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "CreateBlurCommandBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, globalTextureName, kernelSize, boost});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::KawaseBlurRendererSO::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KawaseBlurRendererSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KawaseBlurRendererSO::*)()>(&GlobalNamespace::KawaseBlurRendererSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KawaseBlurRendererSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
