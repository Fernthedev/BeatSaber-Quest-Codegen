#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "VRUIControls/zzzz__VRInputModule_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "VRUIControls/zzzz__MouseState_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VRUIControls/zzzz__VRPointer_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRInputModule.add_onProcessMousePressEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&::VRUIControls::VRInputModule::add_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2eb5fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "add_onProcessMousePressEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.remove_onProcessMousePressEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&::VRUIControls::VRInputModule::remove_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2eb6098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "remove_onProcessMousePressEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2eb6148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetPointerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t, ByRef<::UnityEngine::EventSystems::PointerEventData*>, bool)>(&::VRUIControls::VRInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2eb636c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "GetPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetMousePointerEventData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VRUIControls::MouseState* (::VRUIControls::VRInputModule::*)(int32_t)>(&::VRUIControls::VRInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2eb6458;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetLastPointerEventData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::VRUIControls::VRInputModule::*)(int32_t)>(&::VRUIControls::VRInputModule::GetLastPointerEventData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2eb67f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "GetLastPointerEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ShouldStartDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(&::VRUIControls::VRInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2eb6814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ShouldStartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::VRUIControls::VRInputModule::ProcessMove)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2eb6844;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::VRUIControls::VRInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2eb7154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.IsPointerOverGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t)>(&::VRUIControls::VRInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2eb7418;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ClearSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2eb6164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ToString)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2eb74b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.DeselectIfSelectionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(&::VRUIControls::VRInputModule::DeselectIfSelectionChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2eb7724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "DeselectIfSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::Process)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2eb7814;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.SendUpdateEventToSelectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2eb8198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "SendUpdateEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMousePress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::VRUIControls::MouseButtonEventData*)>(&::VRUIControls::VRInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x2eb7a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ProcessMousePress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::MouseButtonEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.HandlePointerExitAndEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(&::VRUIControls::VRInputModule::HandlePointerExitAndEnter)> {
  constexpr static std::size_t size = 0x8f8;
  constexpr static std::size_t addrs = 0x2eb685c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "HandlePointerExitAndEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.RaycastComparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(&::VRUIControls::VRInputModule::RaycastComparer)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2eb82e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "RaycastComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2eb86c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void VRUIControls::VRInputModule::__set__vrPointer(::VRUIControls::VRPointer*  value)  {
::cordl_internals::setInstanceField<::VRUIControls::VRPointer*, 0x50>(this, std::forward<::VRUIControls::VRPointer*>(value));
}
constexpr ::VRUIControls::VRPointer* VRUIControls::VRInputModule::__get__vrPointer()  {
return ::cordl_internals::getInstanceField<::VRUIControls::VRPointer*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRPointer*> VRUIControls::VRInputModule::__get__vrPointer() const {
return ::cordl_internals::getInstanceField<::VRUIControls::VRPointer*, 0x50>(this);
}
constexpr void VRUIControls::VRInputModule::__set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x58>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* VRUIControls::VRInputModule::__get__rumblePreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> VRUIControls::VRInputModule::__get__rumblePreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x58>(this);
}
constexpr void VRUIControls::VRInputModule::__set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x60>(this, std::forward<::GlobalNamespace::HapticFeedbackManager*>(value));
}
constexpr ::GlobalNamespace::HapticFeedbackManager* VRUIControls::VRInputModule::__get__hapticFeedbackManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> VRUIControls::VRInputModule::__get__hapticFeedbackManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x60>(this);
}
constexpr void VRUIControls::VRInputModule::__set_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::GameObject*>*, 0x68>(this, std::forward<::System::Action_1<::UnityEngine::GameObject*>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::GameObject*>* VRUIControls::VRInputModule::__get_onProcessMousePressEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::GameObject*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::GameObject*>*> VRUIControls::VRInputModule::__get_onProcessMousePressEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::GameObject*>*, 0x68>(this);
}
constexpr void VRUIControls::VRInputModule::__set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*, 0x70>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* VRUIControls::VRInputModule::__get__pointerData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*> VRUIControls::VRInputModule::__get__pointerData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*, 0x70>(this);
}
constexpr void VRUIControls::VRInputModule::__set__componentList(::System::Collections::Generic::List_1<::UnityEngine::Component*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Component*>*, 0x78>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Component*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Component*>* VRUIControls::VRInputModule::__get__componentList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Component*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Component*>*> VRUIControls::VRInputModule::__get__componentList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Component*>*, 0x78>(this);
}
constexpr void VRUIControls::VRInputModule::__set__mouseState(::VRUIControls::MouseState*  value)  {
::cordl_internals::setInstanceField<::VRUIControls::MouseState*, 0x80>(this, std::forward<::VRUIControls::MouseState*>(value));
}
constexpr ::VRUIControls::MouseState* VRUIControls::VRInputModule::__get__mouseState()  {
return ::cordl_internals::getInstanceField<::VRUIControls::MouseState*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::VRUIControls::MouseState*> VRUIControls::VRInputModule::__get__mouseState() const {
return ::cordl_internals::getInstanceField<::VRUIControls::MouseState*, 0x80>(this);
}
inline void VRUIControls::VRInputModule::setStaticF__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get>(std::forward<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* VRUIControls::VRInputModule::getStaticF__raycastComparer()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get>();
}
inline void VRUIControls::VRInputModule::add_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "add_onProcessMousePressEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::remove_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "remove_onProcessMousePressEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::GetPointerData(int32_t  id, ByRef<::UnityEngine::EventSystems::PointerEventData*>  data, bool  create)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "GetPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id, data, create);
}
inline ::VRUIControls::MouseState* VRUIControls::VRInputModule::GetMousePointerEventData(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "GetMousePointerEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::VRUIControls::MouseState*, false>(*this, ___internal_method, id);
}
inline ::UnityEngine::EventSystems::PointerEventData* VRUIControls::VRInputModule::GetLastPointerEventData(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "GetLastPointerEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*, false>(*this, ___internal_method, id);
}
inline bool VRUIControls::VRInputModule::ShouldStartDrag(::UnityEngine::Vector2  pressPos, ::UnityEngine::Vector2  currentPos, float_t  threshold, bool  useDragThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ShouldStartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void VRUIControls::VRInputModule::ProcessMove(::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ProcessMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointerEvent);
}
inline void VRUIControls::VRInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ProcessDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointerEvent);
}
inline bool VRUIControls::VRInputModule::IsPointerOverGameObject(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "IsPointerOverGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pointerId);
}
inline void VRUIControls::VRInputModule::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW VRUIControls::VRInputModule::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void VRUIControls::VRInputModule::DeselectIfSelectionChanged(::UnityEngine::GameObject*  currentOverGo, ::UnityEngine::EventSystems::BaseEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "DeselectIfSelectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentOverGo, pointerEvent);
}
inline void VRUIControls::VRInputModule::Process()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::SendUpdateEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "SendUpdateEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void VRUIControls::VRInputModule::ProcessMousePress(::VRUIControls::MouseButtonEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "ProcessMousePress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::MouseButtonEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline void VRUIControls::VRInputModule::HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData*  currentPointerData, ::UnityEngine::GameObject*  newEnterTarget)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "HandlePointerExitAndEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentPointerData, newEnterTarget);
}
inline int32_t VRUIControls::VRInputModule::RaycastComparer(::UnityEngine::EventSystems::RaycastResult  lhs, ::UnityEngine::EventSystems::RaycastResult  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            "RaycastComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::VRUIControls::VRInputModule* VRUIControls::VRInputModule::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::VRUIControls::VRInputModule*>());
}
inline void VRUIControls::VRInputModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
