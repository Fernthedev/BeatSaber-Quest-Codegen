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
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GUIStyleState
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DD2ED4
  class GUIStyleState : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private readonly UnityEngine.GUIStyle m_SourceStyle
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GUIStyle* m_SourceStyle;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // Creating value type constructor for type: GUIStyleState
    GUIStyleState(System::IntPtr m_Ptr_ = {}, UnityEngine::GUIStyle* m_SourceStyle_ = {}) noexcept : m_Ptr{m_Ptr_}, m_SourceStyle{m_SourceStyle_} {}
    // Get instance field reference: System.IntPtr m_Ptr
    System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private readonly UnityEngine.GUIStyle m_SourceStyle
    UnityEngine::GUIStyle*& dyn_m_SourceStyle();
    // public System.Void set_textColor(UnityEngine.Color value)
    // Offset: 0x1B3505C
    void set_textColor(UnityEngine::Color value);
    // private System.Void .ctor(UnityEngine.GUIStyle sourceStyle, System.IntPtr source)
    // Offset: 0x1B37448
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIStyleState* New_ctor(UnityEngine::GUIStyle* sourceStyle, System::IntPtr source) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIStyleState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIStyleState*, creationType>(sourceStyle, source)));
    }
    // static private System.IntPtr Init()
    // Offset: 0x1B37388
    static System::IntPtr Init();
    // private System.Void Cleanup()
    // Offset: 0x1B373BC
    void Cleanup();
    // static UnityEngine.GUIStyleState GetGUIStyleState(UnityEngine.GUIStyle sourceStyle, System.IntPtr source)
    // Offset: 0x1B367BC
    static UnityEngine::GUIStyleState* GetGUIStyleState(UnityEngine::GUIStyle* sourceStyle, System::IntPtr source);
    // private System.Void set_textColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1B37338
    void set_textColor_Injected(ByRef<UnityEngine::Color> value);
    // public System.Void .ctor()
    // Offset: 0x1B373FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIStyleState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIStyleState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIStyleState*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1B37480
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.GUIStyleState
  #pragma pack(pop)
  static check_size<sizeof(GUIStyleState), 24 + sizeof(UnityEngine::GUIStyle*)> __UnityEngine_GUIStyleStateSizeCheck;
  static_assert(sizeof(GUIStyleState) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIStyleState*, "UnityEngine", "GUIStyleState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::set_textColor
// Il2CppName: set_textColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIStyleState::*)(UnityEngine::Color)>(&UnityEngine::GUIStyleState::set_textColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStyleState*), "set_textColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)()>(&UnityEngine::GUIStyleState::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStyleState*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIStyleState::*)()>(&UnityEngine::GUIStyleState::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStyleState*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::GetGUIStyleState
// Il2CppName: GetGUIStyleState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUIStyleState* (*)(UnityEngine::GUIStyle*, System::IntPtr)>(&UnityEngine::GUIStyleState::GetGUIStyleState)> {
  static const MethodInfo* get() {
    static auto* sourceStyle = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStyleState*), "GetGUIStyleState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceStyle, source});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::set_textColor_Injected
// Il2CppName: set_textColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIStyleState::*)(ByRef<UnityEngine::Color>)>(&UnityEngine::GUIStyleState::set_textColor_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStyleState*), "set_textColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIStyleState::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIStyleState::*)()>(&UnityEngine::GUIStyleState::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIStyleState*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
