// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: StepValuePicker
  class StepValuePicker;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RoomAdjustSettingsViewController
  class RoomAdjustSettingsViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RoomAdjustSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomAdjustSettingsViewController*, "", "RoomAdjustSettingsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: RoomAdjustSettingsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class RoomAdjustSettingsViewController : public ::HMUI::ViewController {
    public:
    public:
    // private Vector3SO _roomCenter
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::Vector3SO* roomCenter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3SO*) == 0x8);
    // private FloatSO _roomRotation
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::FloatSO* roomRotation;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10F4714
    // private StepValuePicker _xStepValuePicker
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::StepValuePicker* xStepValuePicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StepValuePicker*) == 0x8);
    // private StepValuePicker _yStepValuePicker
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::StepValuePicker* yStepValuePicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StepValuePicker*) == 0x8);
    // private StepValuePicker _zStepValuePicker
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::StepValuePicker* zStepValuePicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StepValuePicker*) == 0x8);
    // private StepValuePicker _rotStepValuePicker
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::StepValuePicker* rotStepValuePicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StepValuePicker*) == 0x8);
    // private UnityEngine.UI.Button _resetButton
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UI::Button* resetButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    public:
    // static field const value: static private System.Single kHorizontalMoveStep
    static constexpr const float kHorizontalMoveStep = 0.1;
    // Get static field: static private System.Single kHorizontalMoveStep
    static float _get_kHorizontalMoveStep();
    // Set static field: static private System.Single kHorizontalMoveStep
    static void _set_kHorizontalMoveStep(float value);
    // static field const value: static private System.Single kVerticalMoveStep
    static constexpr const float kVerticalMoveStep = 0.05;
    // Get static field: static private System.Single kVerticalMoveStep
    static float _get_kVerticalMoveStep();
    // Set static field: static private System.Single kVerticalMoveStep
    static void _set_kVerticalMoveStep(float value);
    // static field const value: static private System.Single kRotationStep
    static constexpr const float kRotationStep = 5;
    // Get static field: static private System.Single kRotationStep
    static float _get_kRotationStep();
    // Set static field: static private System.Single kRotationStep
    static void _set_kRotationStep(float value);
    // Get instance field reference: private Vector3SO _roomCenter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3SO*& dyn__roomCenter();
    // Get instance field reference: private FloatSO _roomRotation
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatSO*& dyn__roomRotation();
    // Get instance field reference: private StepValuePicker _xStepValuePicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StepValuePicker*& dyn__xStepValuePicker();
    // Get instance field reference: private StepValuePicker _yStepValuePicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StepValuePicker*& dyn__yStepValuePicker();
    // Get instance field reference: private StepValuePicker _zStepValuePicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StepValuePicker*& dyn__zStepValuePicker();
    // Get instance field reference: private StepValuePicker _rotStepValuePicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StepValuePicker*& dyn__rotStepValuePicker();
    // Get instance field reference: private UnityEngine.UI.Button _resetButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__resetButton();
    // public System.Void .ctor()
    // Offset: 0x14A903C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RoomAdjustSettingsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RoomAdjustSettingsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RoomAdjustSettingsViewController*, creationType>()));
    }
    // private System.Void Move(UnityEngine.Vector3 move)
    // Offset: 0x14A8E34
    void Move(::UnityEngine::Vector3 move);
    // private System.Void Rotate(System.Single rotation)
    // Offset: 0x14A8F04
    void Rotate(float rotation);
    // private System.Void ResetRoom()
    // Offset: 0x14A8F88
    void ResetRoom();
    // private System.Void RefreshTexts()
    // Offset: 0x14A8CB8
    void RefreshTexts();
    // private System.Void <DidActivate>b__10_0()
    // Offset: 0x14A9044
    void $DidActivate$b__10_0();
    // private System.Void <DidActivate>b__10_1()
    // Offset: 0x14A909C
    void $DidActivate$b__10_1();
    // private System.Void <DidActivate>b__10_2()
    // Offset: 0x14A90F4
    void $DidActivate$b__10_2();
    // private System.Void <DidActivate>b__10_3()
    // Offset: 0x14A914C
    void $DidActivate$b__10_3();
    // private System.Void <DidActivate>b__10_4()
    // Offset: 0x14A91A4
    void $DidActivate$b__10_4();
    // private System.Void <DidActivate>b__10_5()
    // Offset: 0x14A91FC
    void $DidActivate$b__10_5();
    // private System.Void <DidActivate>b__10_6()
    // Offset: 0x14A9254
    void $DidActivate$b__10_6();
    // private System.Void <DidActivate>b__10_7()
    // Offset: 0x14A925C
    void $DidActivate$b__10_7();
    // private System.Void <DidActivate>b__10_8()
    // Offset: 0x14A9264
    void $DidActivate$b__10_8();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x14A8A34
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // RoomAdjustSettingsViewController
  #pragma pack(pop)
  static check_size<sizeof(RoomAdjustSettingsViewController), 160 + sizeof(::UnityEngine::UI::Button*)> __GlobalNamespace_RoomAdjustSettingsViewControllerSizeCheck;
  static_assert(sizeof(RoomAdjustSettingsViewController) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)(::UnityEngine::Vector3)>(&GlobalNamespace::RoomAdjustSettingsViewController::Move)> {
  static const MethodInfo* get() {
    static auto* move = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{move});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)(float)>(&GlobalNamespace::RoomAdjustSettingsViewController::Rotate)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::ResetRoom
// Il2CppName: ResetRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::ResetRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "ResetRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::RefreshTexts
// Il2CppName: RefreshTexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::RefreshTexts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "RefreshTexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_0
// Il2CppName: <DidActivate>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_1
// Il2CppName: <DidActivate>b__10_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_2
// Il2CppName: <DidActivate>b__10_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_3
// Il2CppName: <DidActivate>b__10_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_4
// Il2CppName: <DidActivate>b__10_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_5
// Il2CppName: <DidActivate>b__10_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_6
// Il2CppName: <DidActivate>b__10_6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_7
// Il2CppName: <DidActivate>b__10_7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_7)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_8
// Il2CppName: <DidActivate>b__10_8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)()>(&GlobalNamespace::RoomAdjustSettingsViewController::$DidActivate$b__10_8)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "<DidActivate>b__10_8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomAdjustSettingsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomAdjustSettingsViewController::*)(bool, bool, bool)>(&GlobalNamespace::RoomAdjustSettingsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomAdjustSettingsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
