// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Display
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DB38C8
  // [UsedByNativeCodeAttribute] Offset: DB38C8
  class Display : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Display::DisplaysUpdatedDelegate
    class DisplaysUpdatedDelegate;
    // System.IntPtr nativeDisplay
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr nativeDisplay;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: Display
    Display(System::IntPtr nativeDisplay_ = {}) noexcept : nativeDisplay{nativeDisplay_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return nativeDisplay;
    }
    // Get static field: static public UnityEngine.Display[] displays
    static ::Array<UnityEngine::Display*>* _get_displays();
    // Set static field: static public UnityEngine.Display[] displays
    static void _set_displays(::Array<UnityEngine::Display*>* value);
    // Get static field: static private UnityEngine.Display _mainDisplay
    static UnityEngine::Display* _get__mainDisplay();
    // Set static field: static private UnityEngine.Display _mainDisplay
    static void _set__mainDisplay(UnityEngine::Display* value);
    // [DebuggerBrowsableAttribute] Offset: 0xDB8450
    // Get static field: static private UnityEngine.Display/UnityEngine.DisplaysUpdatedDelegate onDisplaysUpdated
    static UnityEngine::Display::DisplaysUpdatedDelegate* _get_onDisplaysUpdated();
    // Set static field: static private UnityEngine.Display/UnityEngine.DisplaysUpdatedDelegate onDisplaysUpdated
    static void _set_onDisplaysUpdated(UnityEngine::Display::DisplaysUpdatedDelegate* value);
    // Get instance field reference: System.IntPtr nativeDisplay
    System::IntPtr& dyn_nativeDisplay();
    // public System.Int32 get_renderingWidth()
    // Offset: 0x1C519DC
    int get_renderingWidth();
    // public System.Int32 get_renderingHeight()
    // Offset: 0x1C51AD8
    int get_renderingHeight();
    // public System.Int32 get_systemWidth()
    // Offset: 0x1C51B7C
    int get_systemWidth();
    // public System.Int32 get_systemHeight()
    // Offset: 0x1C51C78
    int get_systemHeight();
    // static public UnityEngine.Display get_main()
    // Offset: 0x1C51E78
    static UnityEngine::Display* get_main();
    // System.Void .ctor(System.IntPtr nativeDisplay)
    // Offset: 0x1C519B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Display* New_ctor(System::IntPtr nativeDisplay) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Display::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Display*, creationType>(nativeDisplay)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C52334
    static void _cctor();
    // static public UnityEngine.Vector3 RelativeMouseAt(UnityEngine.Vector3 inputMouseCoordinates)
    // Offset: 0x1C51D1C
    static UnityEngine::Vector3 RelativeMouseAt(UnityEngine::Vector3 inputMouseCoordinates);
    // static private System.Void RecreateDisplayList(System.IntPtr[] nativeDisplay)
    // Offset: 0x1C51EE0
    static void RecreateDisplayList(::Array<System::IntPtr>* nativeDisplay);
    // static private System.Void FireDisplaysUpdated()
    // Offset: 0x1C52084
    static void FireDisplaysUpdated();
    // static private System.Void GetSystemExtImpl(System.IntPtr nativeDisplay, out System.Int32 w, out System.Int32 h)
    // Offset: 0x1C51C20
    static void GetSystemExtImpl(System::IntPtr nativeDisplay, ByRef<int> w, ByRef<int> h);
    // static private System.Void GetRenderingExtImpl(System.IntPtr nativeDisplay, out System.Int32 w, out System.Int32 h)
    // Offset: 0x1C51A80
    static void GetRenderingExtImpl(System::IntPtr nativeDisplay, ByRef<int> w, ByRef<int> h);
    // static private System.Int32 RelativeMouseAtImpl(System.Int32 x, System.Int32 y, out System.Int32 rx, out System.Int32 ry)
    // Offset: 0x1C51E10
    static int RelativeMouseAtImpl(int x, int y, ByRef<int> rx, ByRef<int> ry);
    // System.Void .ctor()
    // Offset: 0x1C51970
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Display* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Display::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Display*, creationType>()));
    }
  }; // UnityEngine.Display
  #pragma pack(pop)
  static check_size<sizeof(Display), 16 + sizeof(System::IntPtr)> __UnityEngine_DisplaySizeCheck;
  static_assert(sizeof(Display) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Display*, "UnityEngine", "Display");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Display::get_renderingWidth
// Il2CppName: get_renderingWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Display::*)()>(&UnityEngine::Display::get_renderingWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "get_renderingWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::get_renderingHeight
// Il2CppName: get_renderingHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Display::*)()>(&UnityEngine::Display::get_renderingHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "get_renderingHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::get_systemWidth
// Il2CppName: get_systemWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Display::*)()>(&UnityEngine::Display::get_systemWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "get_systemWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::get_systemHeight
// Il2CppName: get_systemHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Display::*)()>(&UnityEngine::Display::get_systemHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "get_systemHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::get_main
// Il2CppName: get_main
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Display* (*)()>(&UnityEngine::Display::get_main)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "get_main", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Display::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Display::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::RelativeMouseAt
// Il2CppName: RelativeMouseAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3)>(&UnityEngine::Display::RelativeMouseAt)> {
  static const MethodInfo* get() {
    static auto* inputMouseCoordinates = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "RelativeMouseAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputMouseCoordinates});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::RecreateDisplayList
// Il2CppName: RecreateDisplayList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<System::IntPtr>*)>(&UnityEngine::Display::RecreateDisplayList)> {
  static const MethodInfo* get() {
    static auto* nativeDisplay = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "IntPtr"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "RecreateDisplayList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeDisplay});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::FireDisplaysUpdated
// Il2CppName: FireDisplaysUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Display::FireDisplaysUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "FireDisplaysUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::GetSystemExtImpl
// Il2CppName: GetSystemExtImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr, ByRef<int>, ByRef<int>)>(&UnityEngine::Display::GetSystemExtImpl)> {
  static const MethodInfo* get() {
    static auto* nativeDisplay = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "GetSystemExtImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeDisplay, w, h});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::GetRenderingExtImpl
// Il2CppName: GetRenderingExtImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr, ByRef<int>, ByRef<int>)>(&UnityEngine::Display::GetRenderingExtImpl)> {
  static const MethodInfo* get() {
    static auto* nativeDisplay = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "GetRenderingExtImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeDisplay, w, h});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::RelativeMouseAtImpl
// Il2CppName: RelativeMouseAtImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, ByRef<int>, ByRef<int>)>(&UnityEngine::Display::RelativeMouseAtImpl)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* ry = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display*), "RelativeMouseAtImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, rx, ry});
  }
};
// Writing MetadataGetter for method: UnityEngine::Display::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
