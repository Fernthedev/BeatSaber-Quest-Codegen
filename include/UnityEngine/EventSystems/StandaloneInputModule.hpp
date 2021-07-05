// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0xB1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.StandaloneInputModule
  // [AddComponentMenu] Offset: DC5C54
  class StandaloneInputModule : public UnityEngine::EventSystems::PointerInputModule {
    public:
    // Nested type: UnityEngine::EventSystems::StandaloneInputModule::InputMode
    struct InputMode;
    // private System.Single m_PrevActionTime
    // Size: 0x4
    // Offset: 0x58
    float m_PrevActionTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 m_LastMoveVector
    // Size: 0x8
    // Offset: 0x5C
    UnityEngine::Vector2 m_LastMoveVector;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Int32 m_ConsecutiveMoveCount
    // Size: 0x4
    // Offset: 0x64
    int m_ConsecutiveMoveCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector2 m_LastMousePosition
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Vector2 m_LastMousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_MousePosition
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Vector2 m_MousePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.GameObject m_CurrentFocusedGameObject
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GameObject* m_CurrentFocusedGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.EventSystems.PointerEventData m_InputPointerEvent
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // private System.String m_HorizontalAxis
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* m_HorizontalAxis;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_VerticalAxis
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* m_VerticalAxis;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_SubmitButton
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* m_SubmitButton;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_CancelButton
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* m_CancelButton;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single m_InputActionsPerSecond
    // Size: 0x4
    // Offset: 0xA8
    float m_InputActionsPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_RepeatDelay
    // Size: 0x4
    // Offset: 0xAC
    float m_RepeatDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xDC7CB8
    // private System.Boolean m_ForceModuleActive
    // Size: 0x1
    // Offset: 0xB0
    bool m_ForceModuleActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: StandaloneInputModule
    StandaloneInputModule(float m_PrevActionTime_ = {}, UnityEngine::Vector2 m_LastMoveVector_ = {}, int m_ConsecutiveMoveCount_ = {}, UnityEngine::Vector2 m_LastMousePosition_ = {}, UnityEngine::Vector2 m_MousePosition_ = {}, UnityEngine::GameObject* m_CurrentFocusedGameObject_ = {}, UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent_ = {}, ::Il2CppString* m_HorizontalAxis_ = {}, ::Il2CppString* m_VerticalAxis_ = {}, ::Il2CppString* m_SubmitButton_ = {}, ::Il2CppString* m_CancelButton_ = {}, float m_InputActionsPerSecond_ = {}, float m_RepeatDelay_ = {}, bool m_ForceModuleActive_ = {}) noexcept : m_PrevActionTime{m_PrevActionTime_}, m_LastMoveVector{m_LastMoveVector_}, m_ConsecutiveMoveCount{m_ConsecutiveMoveCount_}, m_LastMousePosition{m_LastMousePosition_}, m_MousePosition{m_MousePosition_}, m_CurrentFocusedGameObject{m_CurrentFocusedGameObject_}, m_InputPointerEvent{m_InputPointerEvent_}, m_HorizontalAxis{m_HorizontalAxis_}, m_VerticalAxis{m_VerticalAxis_}, m_SubmitButton{m_SubmitButton_}, m_CancelButton{m_CancelButton_}, m_InputActionsPerSecond{m_InputActionsPerSecond_}, m_RepeatDelay{m_RepeatDelay_}, m_ForceModuleActive{m_ForceModuleActive_} {}
    // public UnityEngine.EventSystems.StandaloneInputModule/InputMode get_inputMode()
    // Offset: 0x1435000
    UnityEngine::EventSystems::StandaloneInputModule::InputMode get_inputMode();
    // public System.Boolean get_allowActivationOnMobileDevice()
    // Offset: 0x1435008
    bool get_allowActivationOnMobileDevice();
    // public System.Void set_allowActivationOnMobileDevice(System.Boolean value)
    // Offset: 0x1435010
    void set_allowActivationOnMobileDevice(bool value);
    // public System.Boolean get_forceModuleActive()
    // Offset: 0x143501C
    bool get_forceModuleActive();
    // public System.Void set_forceModuleActive(System.Boolean value)
    // Offset: 0x1435024
    void set_forceModuleActive(bool value);
    // public System.Single get_inputActionsPerSecond()
    // Offset: 0x1435030
    float get_inputActionsPerSecond();
    // public System.Void set_inputActionsPerSecond(System.Single value)
    // Offset: 0x1435038
    void set_inputActionsPerSecond(float value);
    // public System.Single get_repeatDelay()
    // Offset: 0x1435040
    float get_repeatDelay();
    // public System.Void set_repeatDelay(System.Single value)
    // Offset: 0x1435048
    void set_repeatDelay(float value);
    // public System.String get_horizontalAxis()
    // Offset: 0x1435050
    ::Il2CppString* get_horizontalAxis();
    // public System.Void set_horizontalAxis(System.String value)
    // Offset: 0x1435058
    void set_horizontalAxis(::Il2CppString* value);
    // public System.String get_verticalAxis()
    // Offset: 0x1435060
    ::Il2CppString* get_verticalAxis();
    // public System.Void set_verticalAxis(System.String value)
    // Offset: 0x1435068
    void set_verticalAxis(::Il2CppString* value);
    // public System.String get_submitButton()
    // Offset: 0x1435070
    ::Il2CppString* get_submitButton();
    // public System.Void set_submitButton(System.String value)
    // Offset: 0x1435078
    void set_submitButton(::Il2CppString* value);
    // public System.String get_cancelButton()
    // Offset: 0x1435080
    ::Il2CppString* get_cancelButton();
    // public System.Void set_cancelButton(System.String value)
    // Offset: 0x1435088
    void set_cancelButton(::Il2CppString* value);
    // private System.Boolean ShouldIgnoreEventsOnNoFocus()
    // Offset: 0x1435090
    bool ShouldIgnoreEventsOnNoFocus();
    // private System.Void ReleaseMouse(UnityEngine.EventSystems.PointerEventData pointerEvent, UnityEngine.GameObject currentOverGo)
    // Offset: 0x14351A8
    void ReleaseMouse(UnityEngine::EventSystems::PointerEventData* pointerEvent, UnityEngine::GameObject* currentOverGo);
    // private System.Boolean ProcessTouchEvents()
    // Offset: 0x1435B28
    bool ProcessTouchEvents();
    // protected System.Void ProcessTouchPress(UnityEngine.EventSystems.PointerEventData pointerEvent, System.Boolean pressed, System.Boolean released)
    // Offset: 0x1436168
    void ProcessTouchPress(UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);
    // protected System.Boolean SendSubmitEventToSelectedObject()
    // Offset: 0x1435F34
    bool SendSubmitEventToSelectedObject();
    // private UnityEngine.Vector2 GetRawMoveVector()
    // Offset: 0x1436840
    UnityEngine::Vector2 GetRawMoveVector();
    // protected System.Boolean SendMoveEventToSelectedObject()
    // Offset: 0x1435CA0
    bool SendMoveEventToSelectedObject();
    // protected System.Void ProcessMouseEvent()
    // Offset: 0x1435C98
    void ProcessMouseEvent();
    // protected System.Boolean ForceAutoSelect()
    // Offset: 0x1436BEC
    bool ForceAutoSelect();
    // protected System.Void ProcessMouseEvent(System.Int32 id)
    // Offset: 0x143697C
    void ProcessMouseEvent(int id);
    // protected System.Boolean SendUpdateEventToSelectedObject()
    // Offset: 0x14359D4
    bool SendUpdateEventToSelectedObject();
    // protected System.Void ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData data)
    // Offset: 0x1436BF4
    void ProcessMousePress(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* data);
    // protected UnityEngine.GameObject GetCurrentFocusedGameObject()
    // Offset: 0x1436F6C
    UnityEngine::GameObject* GetCurrentFocusedGameObject();
    // protected System.Void .ctor()
    // Offset: 0x1434F70
    // Implemented from: UnityEngine.EventSystems.PointerInputModule
    // Base method: System.Void PointerInputModule::.ctor()
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::StandaloneInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneInputModule*, creationType>()));
    }
    // public override System.Void UpdateModule()
    // Offset: 0x14350B4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::UpdateModule()
    void UpdateModule();
    // public override System.Boolean IsModuleSupported()
    // Offset: 0x1435544
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsModuleSupported()
    bool IsModuleSupported();
    // public override System.Boolean ShouldActivateModule()
    // Offset: 0x14355B0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::ShouldActivateModule()
    bool ShouldActivateModule();
    // public override System.Void ActivateModule()
    // Offset: 0x14357E0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::ActivateModule()
    void ActivateModule();
    // public override System.Void DeactivateModule()
    // Offset: 0x1435910
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::DeactivateModule()
    void DeactivateModule();
    // public override System.Void Process()
    // Offset: 0x1435914
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
  }; // UnityEngine.EventSystems.StandaloneInputModule
  #pragma pack(pop)
  static check_size<sizeof(StandaloneInputModule), 176 + sizeof(bool)> __UnityEngine_EventSystems_StandaloneInputModuleSizeCheck;
  static_assert(sizeof(StandaloneInputModule) == 0xB1);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::StandaloneInputModule*, "UnityEngine.EventSystems", "StandaloneInputModule");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_inputMode
// Il2CppName: get_inputMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::StandaloneInputModule::InputMode (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_inputMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_inputMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice
// Il2CppName: get_allowActivationOnMobileDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_allowActivationOnMobileDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice
// Il2CppName: set_allowActivationOnMobileDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(&UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_allowActivationOnMobileDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive
// Il2CppName: get_forceModuleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_forceModuleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive
// Il2CppName: set_forceModuleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(&UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_forceModuleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond
// Il2CppName: get_inputActionsPerSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_inputActionsPerSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond
// Il2CppName: set_inputActionsPerSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(float)>(&UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_inputActionsPerSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay
// Il2CppName: get_repeatDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_repeatDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay
// Il2CppName: set_repeatDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(float)>(&UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_repeatDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis
// Il2CppName: get_horizontalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_horizontalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis
// Il2CppName: set_horizontalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::Il2CppString*)>(&UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_horizontalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis
// Il2CppName: get_verticalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_verticalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis
// Il2CppName: set_verticalAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::Il2CppString*)>(&UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_verticalAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_submitButton
// Il2CppName: get_submitButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_submitButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_submitButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_submitButton
// Il2CppName: set_submitButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::Il2CppString*)>(&UnityEngine::EventSystems::StandaloneInputModule::set_submitButton)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_submitButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton
// Il2CppName: get_cancelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "get_cancelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton
// Il2CppName: set_cancelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(::Il2CppString*)>(&UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "set_cancelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus
// Il2CppName: ShouldIgnoreEventsOnNoFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ShouldIgnoreEventsOnNoFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse
// Il2CppName: ReleaseMouse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(UnityEngine::EventSystems::PointerEventData*, UnityEngine::GameObject*)>(&UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse)> {
  const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* currentOverGo = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ReleaseMouse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent, currentOverGo});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents
// Il2CppName: ProcessTouchEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessTouchEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress
// Il2CppName: ProcessTouchPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(UnityEngine::EventSystems::PointerEventData*, bool, bool)>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress)> {
  const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* released = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessTouchPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent, pressed, released});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject
// Il2CppName: SendSubmitEventToSelectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "SendSubmitEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector
// Il2CppName: GetRawMoveVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "GetRawMoveVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject
// Il2CppName: SendMoveEventToSelectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "SendMoveEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent
// Il2CppName: ProcessMouseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessMouseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect
// Il2CppName: ForceAutoSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ForceAutoSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent
// Il2CppName: ProcessMouseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(int)>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessMouseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject
// Il2CppName: SendUpdateEventToSelectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress
// Il2CppName: ProcessMousePress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*)>(&UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress)> {
  const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ProcessMousePress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject
// Il2CppName: GetCurrentFocusedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "GetCurrentFocusedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::UpdateModule
// Il2CppName: UpdateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::UpdateModule)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "UpdateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::IsModuleSupported
// Il2CppName: IsModuleSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::IsModuleSupported)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "IsModuleSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule
// Il2CppName: ShouldActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ShouldActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::ActivateModule
// Il2CppName: ActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::ActivateModule)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "ActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule
// Il2CppName: DeactivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "DeactivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::StandaloneInputModule::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::StandaloneInputModule::*)()>(&UnityEngine::EventSystems::StandaloneInputModule::Process)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::StandaloneInputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
