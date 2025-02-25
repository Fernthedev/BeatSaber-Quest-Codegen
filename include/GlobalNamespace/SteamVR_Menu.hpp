// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.CursorLockMode
#include "UnityEngine/CursorLockMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Overlay
  class SteamVR_Overlay;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8D
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Menu
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Menu : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Texture cursor
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Texture* cursor;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture background
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Texture* background;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public UnityEngine.Texture logo
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Texture* logo;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public System.Single logoHeight
    // Size: 0x4
    // Offset: 0x30
    float logoHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single menuOffset
    // Size: 0x4
    // Offset: 0x34
    float menuOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 scaleLimits
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Vector2 scaleLimits;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Single scaleRate
    // Size: 0x4
    // Offset: 0x40
    float scaleRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: scaleRate and: overlay
    char __padding6[0x4] = {};
    // private SteamVR_Overlay overlay
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::SteamVR_Overlay* overlay;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Overlay*) == 0x8);
    // private UnityEngine.Camera overlayCam
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Camera* overlayCam;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Vector4 uvOffset
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Vector4 uvOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // private System.Single distance
    // Size: 0x4
    // Offset: 0x68
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <scale>k__BackingField
    // Size: 0x4
    // Offset: 0x6C
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.String scaleLimitX
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* scaleLimitX;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String scaleLimitY
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* scaleLimitY;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String scaleRateText
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* scaleRateText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.CursorLockMode savedCursorLockState
    // Size: 0x4
    // Offset: 0x88
    UnityEngine::CursorLockMode savedCursorLockState;
    // Field size check
    static_assert(sizeof(UnityEngine::CursorLockMode) == 0x4);
    // private System.Boolean savedCursorVisible
    // Size: 0x1
    // Offset: 0x8C
    bool savedCursorVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SteamVR_Menu
    SteamVR_Menu(UnityEngine::Texture* cursor_ = {}, UnityEngine::Texture* background_ = {}, UnityEngine::Texture* logo_ = {}, float logoHeight_ = {}, float menuOffset_ = {}, UnityEngine::Vector2 scaleLimits_ = {}, float scaleRate_ = {}, GlobalNamespace::SteamVR_Overlay* overlay_ = {}, UnityEngine::Camera* overlayCam_ = {}, UnityEngine::Vector4 uvOffset_ = {}, float distance_ = {}, float scale_ = {}, ::Il2CppString* scaleLimitX_ = {}, ::Il2CppString* scaleLimitY_ = {}, ::Il2CppString* scaleRateText_ = {}, UnityEngine::CursorLockMode savedCursorLockState_ = {}, bool savedCursorVisible_ = {}) noexcept : cursor{cursor_}, background{background_}, logo{logo_}, logoHeight{logoHeight_}, menuOffset{menuOffset_}, scaleLimits{scaleLimits_}, scaleRate{scaleRate_}, overlay{overlay_}, overlayCam{overlayCam_}, uvOffset{uvOffset_}, distance{distance_}, scale{scale_}, scaleLimitX{scaleLimitX_}, scaleLimitY{scaleLimitY_}, scaleRateText{scaleRateText_}, savedCursorLockState{savedCursorLockState_}, savedCursorVisible{savedCursorVisible_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Texture cursor
    UnityEngine::Texture*& dyn_cursor();
    // Get instance field reference: public UnityEngine.Texture background
    UnityEngine::Texture*& dyn_background();
    // Get instance field reference: public UnityEngine.Texture logo
    UnityEngine::Texture*& dyn_logo();
    // Get instance field reference: public System.Single logoHeight
    float& dyn_logoHeight();
    // Get instance field reference: public System.Single menuOffset
    float& dyn_menuOffset();
    // Get instance field reference: public UnityEngine.Vector2 scaleLimits
    UnityEngine::Vector2& dyn_scaleLimits();
    // Get instance field reference: public System.Single scaleRate
    float& dyn_scaleRate();
    // Get instance field reference: private SteamVR_Overlay overlay
    GlobalNamespace::SteamVR_Overlay*& dyn_overlay();
    // Get instance field reference: private UnityEngine.Camera overlayCam
    UnityEngine::Camera*& dyn_overlayCam();
    // Get instance field reference: private UnityEngine.Vector4 uvOffset
    UnityEngine::Vector4& dyn_uvOffset();
    // Get instance field reference: private System.Single distance
    float& dyn_distance();
    // Get instance field reference: private System.Single <scale>k__BackingField
    float& dyn_$scale$k__BackingField();
    // Get instance field reference: private System.String scaleLimitX
    ::Il2CppString*& dyn_scaleLimitX();
    // Get instance field reference: private System.String scaleLimitY
    ::Il2CppString*& dyn_scaleLimitY();
    // Get instance field reference: private System.String scaleRateText
    ::Il2CppString*& dyn_scaleRateText();
    // Get instance field reference: private UnityEngine.CursorLockMode savedCursorLockState
    UnityEngine::CursorLockMode& dyn_savedCursorLockState();
    // Get instance field reference: private System.Boolean savedCursorVisible
    bool& dyn_savedCursorVisible();
    // public UnityEngine.RenderTexture get_texture()
    // Offset: 0x142FFD0
    UnityEngine::RenderTexture* get_texture();
    // public System.Single get_scale()
    // Offset: 0x143009C
    float get_scale();
    // private System.Void set_scale(System.Single value)
    // Offset: 0x14300A4
    void set_scale(float value);
    // private System.Void Awake()
    // Offset: 0x14300AC
    void Awake();
    // private System.Void OnGUI()
    // Offset: 0x1430214
    void OnGUI();
    // public System.Void ShowMenu()
    // Offset: 0x1431DD0
    void ShowMenu();
    // public System.Void HideMenu()
    // Offset: 0x1431CCC
    void HideMenu();
    // private System.Void Update()
    // Offset: 0x1432188
    void Update();
    // private System.Void SetScale(System.Single scale)
    // Offset: 0x1431BE0
    void SetScale(float scale);
    // private System.Void SaveCursorState()
    // Offset: 0x1432120
    void SaveCursorState();
    // private System.Void RestoreCursorState()
    // Offset: 0x1432158
    void RestoreCursorState();
    // public System.Void .ctor()
    // Offset: 0x1432358
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Menu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Menu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Menu*, creationType>()));
    }
  }; // SteamVR_Menu
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Menu), 140 + sizeof(bool)> __GlobalNamespace_SteamVR_MenuSizeCheck;
  static_assert(sizeof(SteamVR_Menu) == 0x8D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Menu*, "", "SteamVR_Menu");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::get_scale
// Il2CppName: get_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::get_scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "get_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::set_scale
// Il2CppName: set_scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)(float)>(&GlobalNamespace::SteamVR_Menu::set_scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "set_scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::ShowMenu
// Il2CppName: ShowMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::ShowMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "ShowMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::HideMenu
// Il2CppName: HideMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::HideMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "HideMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::SetScale
// Il2CppName: SetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)(float)>(&GlobalNamespace::SteamVR_Menu::SetScale)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "SetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::SaveCursorState
// Il2CppName: SaveCursorState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::SaveCursorState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "SaveCursorState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::RestoreCursorState
// Il2CppName: RestoreCursorState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Menu::*)()>(&GlobalNamespace::SteamVR_Menu::RestoreCursorState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Menu*), "RestoreCursorState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Menu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
