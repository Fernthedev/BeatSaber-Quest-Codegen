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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettings
  class CurvedCanvasSettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.CurvedCanvasSettingsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class CurvedCanvasSettingsHelper : public ::Il2CppObject {
    public:
    // private UnityEngine.Canvas _cachedCanvas
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Canvas* cachedCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private System.Boolean _cachedCanvasIsRootCanvas
    // Size: 0x1
    // Offset: 0x18
    bool cachedCanvasIsRootCanvas;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cachedCanvasIsRootCanvas and: curvedCanvasSettings
    char __padding1[0x7] = {};
    // private HMUI.CurvedCanvasSettings _curvedCanvasSettings
    // Size: 0x8
    // Offset: 0x20
    HMUI::CurvedCanvasSettings* curvedCanvasSettings;
    // Field size check
    static_assert(sizeof(HMUI::CurvedCanvasSettings*) == 0x8);
    // private System.Boolean _hasCachedData
    // Size: 0x1
    // Offset: 0x28
    bool hasCachedData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CurvedCanvasSettingsHelper
    CurvedCanvasSettingsHelper(UnityEngine::Canvas* cachedCanvas_ = {}, bool cachedCanvasIsRootCanvas_ = {}, HMUI::CurvedCanvasSettings* curvedCanvasSettings_ = {}, bool hasCachedData_ = {}) noexcept : cachedCanvas{cachedCanvas_}, cachedCanvasIsRootCanvas{cachedCanvasIsRootCanvas_}, curvedCanvasSettings{curvedCanvasSettings_}, hasCachedData{hasCachedData_} {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,HMUI.CurvedCanvasSettings> _curvedCanvasCache
    static System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, HMUI::CurvedCanvasSettings*>* _get__curvedCanvasCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,HMUI.CurvedCanvasSettings> _curvedCanvasCache
    static void _set__curvedCanvasCache(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, HMUI::CurvedCanvasSettings*>* value);
    // Get instance field reference: private UnityEngine.Canvas _cachedCanvas
    UnityEngine::Canvas*& dyn__cachedCanvas();
    // Get instance field reference: private System.Boolean _cachedCanvasIsRootCanvas
    bool& dyn__cachedCanvasIsRootCanvas();
    // Get instance field reference: private HMUI.CurvedCanvasSettings _curvedCanvasSettings
    HMUI::CurvedCanvasSettings*& dyn__curvedCanvasSettings();
    // Get instance field reference: private System.Boolean _hasCachedData
    bool& dyn__hasCachedData();
    // static private System.Void .cctor()
    // Offset: 0x1370080
    static void _cctor();
    // public System.Void Reset()
    // Offset: 0x136FD28
    void Reset();
    // public HMUI.CurvedCanvasSettings GetCurvedCanvasSettings(UnityEngine.Canvas canvas)
    // Offset: 0x136FD3C
    HMUI::CurvedCanvasSettings* GetCurvedCanvasSettings(UnityEngine::Canvas* canvas);
    // static private HMUI.CurvedCanvasSettings GetCurvedCanvasSettingsForCanvas(UnityEngine.Canvas canvas)
    // Offset: 0x136FF64
    static HMUI::CurvedCanvasSettings* GetCurvedCanvasSettingsForCanvas(UnityEngine::Canvas* canvas);
    // public System.Void .ctor()
    // Offset: 0x1370078
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurvedCanvasSettingsHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CurvedCanvasSettingsHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurvedCanvasSettingsHelper*, creationType>()));
    }
  }; // HMUI.CurvedCanvasSettingsHelper
  #pragma pack(pop)
  static check_size<sizeof(CurvedCanvasSettingsHelper), 40 + sizeof(bool)> __HMUI_CurvedCanvasSettingsHelperSizeCheck;
  static_assert(sizeof(CurvedCanvasSettingsHelper) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedCanvasSettingsHelper*, "HMUI", "CurvedCanvasSettingsHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettingsHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HMUI::CurvedCanvasSettingsHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettingsHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettingsHelper::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedCanvasSettingsHelper::*)()>(&HMUI::CurvedCanvasSettingsHelper::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettingsHelper*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings
// Il2CppName: GetCurvedCanvasSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::CurvedCanvasSettings* (HMUI::CurvedCanvasSettingsHelper::*)(UnityEngine::Canvas*)>(&HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettingsHelper*), "GetCurvedCanvasSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas
// Il2CppName: GetCurvedCanvasSettingsForCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::CurvedCanvasSettings* (*)(UnityEngine::Canvas*)>(&HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedCanvasSettingsHelper*), "GetCurvedCanvasSettingsForCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettingsHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
