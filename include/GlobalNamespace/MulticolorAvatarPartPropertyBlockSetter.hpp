// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MulticolorAvatarPartPropertyBlockSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class MulticolorAvatarPartPropertyBlockSetter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData
    class ColorData;
    // Nested type: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c
    class $$c;
    // private MulticolorAvatarPartPropertyBlockSetter/ColorData[] _colorDataList
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*>* colorDataList;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xE386C0
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // [SpaceAttribute] Offset: 0xE386F8
    // private System.Boolean _editInPlayMode
    // Size: 0x1
    // Offset: 0x28
    bool editInPlayMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: editInPlayMode and: colors
    char __padding2[0x7] = {};
    // private readonly UnityEngine.Vector4[] _colors
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::Vector4>* colors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private readonly UnityEngine.Vector4[] _rimLightColors
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Vector4>* rimLightColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // private UnityEngine.Color[] _boostColors
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::Color>* boostColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Color>*) == 0x8);
    // private System.Boolean _highlighted
    // Size: 0x1
    // Offset: 0x48
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: highlighted and: uvSegment
    char __padding6[0x3] = {};
    // private System.Int32 _uvSegment
    // Size: 0x4
    // Offset: 0x4C
    int uvSegment;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MulticolorAvatarPartPropertyBlockSetter
    MulticolorAvatarPartPropertyBlockSetter(::Array<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*>* colorDataList_ = {}, UnityEngine::Renderer* renderer_ = {}, bool editInPlayMode_ = {}, ::Array<UnityEngine::Vector4>* colors_ = {}, ::Array<UnityEngine::Vector4>* rimLightColors_ = {}, ::Array<UnityEngine::Color>* boostColors_ = {}, bool highlighted_ = {}, int uvSegment_ = {}) noexcept : colorDataList{colorDataList_}, renderer{renderer_}, editInPlayMode{editInPlayMode_}, colors{colors_}, rimLightColors{rimLightColors_}, boostColors{boostColors_}, highlighted{highlighted_}, uvSegment{uvSegment_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE38730
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // Get instance field reference: private MulticolorAvatarPartPropertyBlockSetter/ColorData[] _colorDataList
    ::Array<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*>*& dyn__colorDataList();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private System.Boolean _editInPlayMode
    bool& dyn__editInPlayMode();
    // Get instance field reference: private readonly UnityEngine.Vector4[] _colors
    ::Array<UnityEngine::Vector4>*& dyn__colors();
    // Get instance field reference: private readonly UnityEngine.Vector4[] _rimLightColors
    ::Array<UnityEngine::Vector4>*& dyn__rimLightColors();
    // Get instance field reference: private UnityEngine.Color[] _boostColors
    ::Array<UnityEngine::Color>*& dyn__boostColors();
    // Get instance field reference: private System.Boolean _highlighted
    bool& dyn__highlighted();
    // Get instance field reference: private System.Int32 _uvSegment
    int& dyn__uvSegment();
    // protected System.Void OnValidate()
    // Offset: 0x11C2860
    void OnValidate();
    // public System.Void SetColors(params UnityEngine.Color[] colors)
    // Offset: 0x11C29D8
    void SetColors(::Array<UnityEngine::Color>* colors);
    // Creating initializer_list -> params proxy for: System.Void SetColors(params UnityEngine.Color[] colors)
    void SetColors(std::initializer_list<UnityEngine::Color> colors);
    // Creating TArgs -> initializer_list proxy for: System.Void SetColors(params UnityEngine.Color[] colors)
    template<class ...TParams>
    void SetColors(TParams&&... colors) {
      SetColors({colors...});
    }
    // public System.Void SetHighlight(System.Boolean highlighted, System.Int32 uvSegment)
    // Offset: 0x11C2D64
    void SetHighlight(bool highlighted, int uvSegment);
    // private System.Void UpdateRenderer()
    // Offset: 0x11C2BF8
    void UpdateRenderer();
    // public System.Void .ctor()
    // Offset: 0x11C2D74
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticolorAvatarPartPropertyBlockSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticolorAvatarPartPropertyBlockSetter*, creationType>()));
    }
  }; // MulticolorAvatarPartPropertyBlockSetter
  #pragma pack(pop)
  static check_size<sizeof(MulticolorAvatarPartPropertyBlockSetter), 76 + sizeof(int)> __GlobalNamespace_MulticolorAvatarPartPropertyBlockSetterSizeCheck;
  static_assert(sizeof(MulticolorAvatarPartPropertyBlockSetter) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*, "", "MulticolorAvatarPartPropertyBlockSetter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)(::Array<UnityEngine::Color>*)>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetColors)> {
  static const MethodInfo* get() {
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetHighlight
// Il2CppName: SetHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)(bool, int)>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::SetHighlight)> {
  static const MethodInfo* get() {
    static auto* highlighted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* uvSegment = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "SetHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlighted, uvSegment});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::UpdateRenderer
// Il2CppName: UpdateRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::UpdateRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*), "UpdateRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
