// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.StackedController
#include "HMUI/StackedController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::StackedController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::StackedController::$$c*, "HMUI", "StackedController/<>c");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.StackedController/HMUI.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StackedController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly HMUI.StackedController/HMUI.<>c <>9
    static ::HMUI::StackedController::$$c* _get_$$9();
    // Set static field: static public readonly HMUI.StackedController/HMUI.<>c <>9
    static void _set_$$9(::HMUI::StackedController::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x16E1D48
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x16E1DAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackedController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::StackedController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackedController::$$c*, creationType>()));
    }
    // System.Void <PushViewController>g__AnimationLayouter|3_0(System.Single t, HMUI.ViewController[] viewControllers)
    // Offset: 0x16E1DB4
    void $PushViewController$g__AnimationLayouter_3_0(float t, ::ArrayW<::HMUI::ViewController*> viewControllers);
  }; // HMUI.StackedController/HMUI.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::StackedController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HMUI::StackedController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::StackedController::$$c::$PushViewController$g__AnimationLayouter_3_0
// Il2CppName: <PushViewController>g__AnimationLayouter|3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::$$c::*)(float, ::ArrayW<::HMUI::ViewController*>)>(&HMUI::StackedController::$$c::$PushViewController$g__AnimationLayouter_3_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewControllers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController::$$c*), "<PushViewController>g__AnimationLayouter|3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, viewControllers});
  }
};
