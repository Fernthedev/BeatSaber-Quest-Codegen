// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.TouchScreenKeyboardType
#include "UnityEngine/TouchScreenKeyboardType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RangeInt
  struct RangeInt;
  // Forward declaring type: TouchScreenKeyboard_InternalConstructorHelperArguments
  struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TouchScreenKeyboard
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DAFDD8
  // [NativeConditionalAttribute] Offset: DAFDD8
  // [NativeHeaderAttribute] Offset: DAFDD8
  class TouchScreenKeyboard : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TouchScreenKeyboard::Status
    struct Status;
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: TouchScreenKeyboard
    TouchScreenKeyboard(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field: System.IntPtr m_Ptr
    System::IntPtr _get_m_Ptr();
    // Set instance field: System.IntPtr m_Ptr
    void _set_m_Ptr(System::IntPtr value);
    // static public System.Boolean get_isSupported()
    // Offset: 0x235FC14
    static bool get_isSupported();
    // static public System.Boolean get_isInPlaceEditingAllowed()
    // Offset: 0x235FC9C
    static bool get_isInPlaceEditingAllowed();
    // public System.String get_text()
    // Offset: 0x235FDF8
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x235FE38
    void set_text(::Il2CppString* value);
    // static public System.Void set_hideInput(System.Boolean value)
    // Offset: 0x235FE88
    static void set_hideInput(bool value);
    // public System.Boolean get_active()
    // Offset: 0x235FEC8
    bool get_active();
    // public System.Void set_active(System.Boolean value)
    // Offset: 0x235FF08
    void set_active(bool value);
    // public UnityEngine.TouchScreenKeyboard/UnityEngine.Status get_status()
    // Offset: 0x235FF58
    UnityEngine::TouchScreenKeyboard::Status get_status();
    // public System.Void set_characterLimit(System.Int32 value)
    // Offset: 0x235FF98
    void set_characterLimit(int value);
    // public System.Boolean get_canGetSelection()
    // Offset: 0x235FFE8
    bool get_canGetSelection();
    // public System.Boolean get_canSetSelection()
    // Offset: 0x2360028
    bool get_canSetSelection();
    // public UnityEngine.RangeInt get_selection()
    // Offset: 0x2360068
    UnityEngine::RangeInt get_selection();
    // public System.Void set_selection(UnityEngine.RangeInt value)
    // Offset: 0x2360114
    void set_selection(UnityEngine::RangeInt value);
    // public System.Void .ctor(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure, System.Boolean alert, System.String textPlaceholder, System.Int32 characterLimit)
    // Offset: 0x235FA58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TouchScreenKeyboard* New_ctor(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::Il2CppString* textPlaceholder, int characterLimit) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TouchScreenKeyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TouchScreenKeyboard*, creationType>(text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit)));
    }
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x235F8FC
    static void Internal_Destroy(System::IntPtr ptr);
    // private System.Void Destroy()
    // Offset: 0x235F93C
    void Destroy();
    // static private System.IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments arguments, System.String text, System.String textPlaceholder)
    // Offset: 0x235FBBC
    static System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(ByRef<UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments> arguments, ::Il2CppString* text, ::Il2CppString* textPlaceholder);
    // static public UnityEngine.TouchScreenKeyboard Open(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure, System.Boolean alert, System.String textPlaceholder, System.Int32 characterLimit)
    // Offset: 0x235FCA4
    static UnityEngine::TouchScreenKeyboard* Open(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::Il2CppString* textPlaceholder, int characterLimit);
    // static public UnityEngine.TouchScreenKeyboard Open(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure)
    // Offset: 0x235FD64
    static UnityEngine::TouchScreenKeyboard* Open(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure);
    // static private System.Void GetSelection(out System.Int32 start, out System.Int32 length)
    // Offset: 0x23600C4
    static void GetSelection(ByRef<int> start, ByRef<int> length);
    // static private System.Void SetSelection(System.Int32 start, System.Int32 length)
    // Offset: 0x236021C
    static void SetSelection(int start, int length);
    // protected override System.Void Finalize()
    // Offset: 0x235F9F0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.TouchScreenKeyboard
  #pragma pack(pop)
  static check_size<sizeof(TouchScreenKeyboard), 16 + sizeof(System::IntPtr)> __UnityEngine_TouchScreenKeyboardSizeCheck;
  static_assert(sizeof(TouchScreenKeyboard) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchScreenKeyboard*, "UnityEngine", "TouchScreenKeyboard");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_isSupported
// Il2CppName: get_isSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::TouchScreenKeyboard::get_isSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_isSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed
// Il2CppName: get_isInPlaceEditingAllowed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_isInPlaceEditingAllowed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(::Il2CppString*)>(&UnityEngine::TouchScreenKeyboard::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_hideInput
// Il2CppName: set_hideInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::TouchScreenKeyboard::set_hideInput)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_hideInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_active
// Il2CppName: set_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(bool)>(&UnityEngine::TouchScreenKeyboard::set_active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TouchScreenKeyboard::Status (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_characterLimit
// Il2CppName: set_characterLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(int)>(&UnityEngine::TouchScreenKeyboard::set_characterLimit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_characterLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_canGetSelection
// Il2CppName: get_canGetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_canGetSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_canGetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_canSetSelection
// Il2CppName: get_canSetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_canSetSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_canSetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::get_selection
// Il2CppName: get_selection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RangeInt (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::get_selection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "get_selection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::set_selection
// Il2CppName: set_selection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)(UnityEngine::RangeInt)>(&UnityEngine::TouchScreenKeyboard::set_selection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RangeInt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "set_selection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&UnityEngine::TouchScreenKeyboard::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper
// Il2CppName: TouchScreenKeyboard_InternalConstructorHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(ByRef<UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper)> {
  static const MethodInfo* get() {
    static auto* arguments = &::il2cpp_utils::GetClassFromName("UnityEngine", "TouchScreenKeyboard_InternalConstructorHelperArguments")->this_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* textPlaceholder = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "TouchScreenKeyboard_InternalConstructorHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments, text, textPlaceholder});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TouchScreenKeyboard* (*)(::Il2CppString*, UnityEngine::TouchScreenKeyboardType, bool, bool, bool, bool, ::Il2CppString*, int)>(&UnityEngine::TouchScreenKeyboard::Open)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyboardType = &::il2cpp_utils::GetClassFromName("UnityEngine", "TouchScreenKeyboardType")->byval_arg;
    static auto* autocorrection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* multiline = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* secure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* alert = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* textPlaceholder = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* characterLimit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, keyboardType, autocorrection, multiline, secure, alert, textPlaceholder, characterLimit});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TouchScreenKeyboard* (*)(::Il2CppString*, UnityEngine::TouchScreenKeyboardType, bool, bool, bool)>(&UnityEngine::TouchScreenKeyboard::Open)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyboardType = &::il2cpp_utils::GetClassFromName("UnityEngine", "TouchScreenKeyboardType")->byval_arg;
    static auto* autocorrection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* multiline = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* secure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, keyboardType, autocorrection, multiline, secure});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::GetSelection
// Il2CppName: GetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int>, ByRef<int>)>(&UnityEngine::TouchScreenKeyboard::GetSelection)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "GetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, length});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::SetSelection
// Il2CppName: SetSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::TouchScreenKeyboard::SetSelection)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "SetSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, length});
  }
};
// Writing MetadataGetter for method: UnityEngine::TouchScreenKeyboard::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TouchScreenKeyboard::*)()>(&UnityEngine::TouchScreenKeyboard::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TouchScreenKeyboard*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
