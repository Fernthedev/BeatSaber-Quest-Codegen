// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.StackedController
#include "HMUI/StackedController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.StackedController/<>c__DisplayClass5_0
  // [CompilerGeneratedAttribute] Offset: DF7DE0
  class StackedController::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public System.Int32 numberOfViewControllersToPop
    // Size: 0x4
    // Offset: 0x10
    int numberOfViewControllersToPop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(int numberOfViewControllersToPop_ = {}) noexcept : numberOfViewControllersToPop{numberOfViewControllersToPop_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return numberOfViewControllersToPop;
    }
    // System.Void <PopViewControllers>g__AnimationLayouter|0(System.Single t, HMUI.ViewController[] viewControllers, System.Collections.Generic.HashSet`1<HMUI.ViewController> removingViewControllers)
    // Offset: 0x12BD828
    void $PopViewControllers$g__AnimationLayouter_0(float t, ::Array<HMUI::ViewController*>* viewControllers, System::Collections::Generic::HashSet_1<HMUI::ViewController*>* removingViewControllers);
    // public System.Void .ctor()
    // Offset: 0x12BD6D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackedController::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::StackedController::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackedController::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // HMUI.StackedController/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(StackedController::$$c__DisplayClass5_0), 16 + sizeof(int)> __HMUI_StackedController_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(StackedController::$$c__DisplayClass5_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::StackedController::$$c__DisplayClass5_0*, "HMUI", "StackedController/<>c__DisplayClass5_0");
// Writing includes for template specializations
#include "System/Collections/Generic/HashSet_1.hpp"
// Writing MetadataGetter for method: HMUI::StackedController::$$c__DisplayClass5_0::$PopViewControllers$g__AnimationLayouter_0
// Il2CppName: <PopViewControllers>g__AnimationLayouter|0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::$$c__DisplayClass5_0::*)(float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*)>(&HMUI::StackedController::$$c__DisplayClass5_0::$PopViewControllers$g__AnimationLayouter_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController::$$c__DisplayClass5_0*), "<PopViewControllers>g__AnimationLayouter|0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<::Array<HMUI::ViewController*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>()});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
