// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuLightsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsManager*, "", "MenuLightsManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MenuLightsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuLightsManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MenuLightsManager::$Start$d__4
    class $Start$d__4;
    public:
    // private MenuLightsPresetSO _defaultPreset
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MenuLightsPresetSO* defaultPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x20
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: smooth and: lightManager
    char __padding1[0x4] = {};
    // [InjectAttribute] Offset: 0x10E79EC
    // private LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIdManager*) == 0x8);
    // private MenuLightsPresetSO _preset
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MenuLightsPresetSO* preset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MenuLightsPresetSO _defaultPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuLightsPresetSO*& dyn__defaultPreset();
    // Get instance field reference: private System.Single _smooth
    [[deprecated("Use field access instead!")]] float& dyn__smooth();
    // Get instance field reference: private LightWithIdManager _lightManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // Get instance field reference: private MenuLightsPresetSO _preset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuLightsPresetSO*& dyn__preset();
    // public System.Void .ctor()
    // Offset: 0x1308D48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuLightsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuLightsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuLightsManager*, creationType>()));
    }
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x130870C
    ::System::Collections::IEnumerator* Start();
    // protected System.Void Update()
    // Offset: 0x13087A8
    void Update();
    // private System.Boolean IsColorVeryCloseToColor(UnityEngine.Color color0, UnityEngine.Color color1)
    // Offset: 0x1308960
    bool IsColorVeryCloseToColor(::UnityEngine::Color color0, ::UnityEngine::Color color1);
    // private System.Void SetColor(System.Int32 lightId, UnityEngine.Color color)
    // Offset: 0x1308A88
    void SetColor(int lightId, ::UnityEngine::Color color);
    // private UnityEngine.Color CurrentColorForID(System.Int32 lightId)
    // Offset: 0x1308AA4
    ::UnityEngine::Color CurrentColorForID(int lightId);
    // private System.Boolean SetColorsFromPreset(MenuLightsPresetSO preset, System.Single interpolationFactor)
    // Offset: 0x13087F8
    bool SetColorsFromPreset(::GlobalNamespace::MenuLightsPresetSO* preset, float interpolationFactor);
    // private System.Void RefreshLightsDictForPreset(MenuLightsPresetSO preset)
    // Offset: 0x1308AFC
    void RefreshLightsDictForPreset(::GlobalNamespace::MenuLightsPresetSO* preset);
    // public System.Void SetColorPreset(MenuLightsPresetSO preset, System.Boolean animated)
    // Offset: 0x1308BD4
    void SetColorPreset(::GlobalNamespace::MenuLightsPresetSO* preset, bool animated);
    // public System.Void RefreshColors()
    // Offset: 0x1308CA0
    void RefreshColors();
  }; // MenuLightsManager
  #pragma pack(pop)
  static check_size<sizeof(MenuLightsManager), 48 + sizeof(::GlobalNamespace::MenuLightsPresetSO*)> __GlobalNamespace_MenuLightsManagerSizeCheck;
  static_assert(sizeof(MenuLightsManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MenuLightsManager::*)()>(&GlobalNamespace::MenuLightsManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuLightsManager::*)()>(&GlobalNamespace::MenuLightsManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::IsColorVeryCloseToColor
// Il2CppName: IsColorVeryCloseToColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MenuLightsManager::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&GlobalNamespace::MenuLightsManager::IsColorVeryCloseToColor)> {
  static const MethodInfo* get() {
    static auto* color0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* color1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "IsColorVeryCloseToColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color0, color1});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuLightsManager::*)(int, ::UnityEngine::Color)>(&GlobalNamespace::MenuLightsManager::SetColor)> {
  static const MethodInfo* get() {
    static auto* lightId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightId, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::CurrentColorForID
// Il2CppName: CurrentColorForID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::MenuLightsManager::*)(int)>(&GlobalNamespace::MenuLightsManager::CurrentColorForID)> {
  static const MethodInfo* get() {
    static auto* lightId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "CurrentColorForID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::SetColorsFromPreset
// Il2CppName: SetColorsFromPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MenuLightsManager::*)(::GlobalNamespace::MenuLightsPresetSO*, float)>(&GlobalNamespace::MenuLightsManager::SetColorsFromPreset)> {
  static const MethodInfo* get() {
    static auto* preset = &::il2cpp_utils::GetClassFromName("", "MenuLightsPresetSO")->byval_arg;
    static auto* interpolationFactor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "SetColorsFromPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preset, interpolationFactor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::RefreshLightsDictForPreset
// Il2CppName: RefreshLightsDictForPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuLightsManager::*)(::GlobalNamespace::MenuLightsPresetSO*)>(&GlobalNamespace::MenuLightsManager::RefreshLightsDictForPreset)> {
  static const MethodInfo* get() {
    static auto* preset = &::il2cpp_utils::GetClassFromName("", "MenuLightsPresetSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "RefreshLightsDictForPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::SetColorPreset
// Il2CppName: SetColorPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuLightsManager::*)(::GlobalNamespace::MenuLightsPresetSO*, bool)>(&GlobalNamespace::MenuLightsManager::SetColorPreset)> {
  static const MethodInfo* get() {
    static auto* preset = &::il2cpp_utils::GetClassFromName("", "MenuLightsPresetSO")->byval_arg;
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "SetColorPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preset, animated});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsManager::RefreshColors
// Il2CppName: RefreshColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuLightsManager::*)()>(&GlobalNamespace::MenuLightsManager::RefreshColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsManager*), "RefreshColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
