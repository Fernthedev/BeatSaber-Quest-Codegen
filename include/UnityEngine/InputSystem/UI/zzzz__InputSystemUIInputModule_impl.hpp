#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerBehavior_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
constexpr void UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__set_refCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__get_refCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__get_refCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__set_enabledByInputModule(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__get_enabledByInputModule()  {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__get_enabledByInputModule() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabledByInputModule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__InputSystemUIInputModule__InputActionReferenceState(int32_t  refCount, bool  enabledByInputModule) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->refCount = refCount;
this->enabledByInputModule = enabledByInputModule;
}
constexpr void UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::__InputSystemUIInputModule__CursorLockBehavior(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior  UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::OutsideScreen{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior  UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::ScreenCenter{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_deselectOnBackgroundClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_deselectOnBackgroundClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad0208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_deselectOnBackgroundClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_deselectOnBackgroundClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_deselectOnBackgroundClick)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad0210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_deselectOnBackgroundClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_pointerBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::UI::UIPointerBehavior (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_pointerBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad021c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_pointerBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_pointerBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::UI::UIPointerBehavior)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_pointerBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad0224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_pointerBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_cursorLockBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cursorLockBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad022c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_cursorLockBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_cursorLockBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cursorLockBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad0234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_cursorLockBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_localMultiPlayerRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_localMultiPlayerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad023c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_localMultiPlayerRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_localMultiPlayerRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::GameObject*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_localMultiPlayerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad0244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_localMultiPlayerRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ActivateModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ad024c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IsPointerOverGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2ad0300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetLastRaycastResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetLastRaycastResult)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ad0598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetLastRaycastResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PerformRaycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PerformRaycast)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2ad0648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "PerformRaycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::UI::PointerModel>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointer)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2ad0e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PointerShouldIgnoreTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::Transform*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PointerShouldIgnoreTransform)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ad1fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "PointerShouldIgnoreTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::UI::PointerModel>, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ad12e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::UnityEngine::GameObject*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x2ad20e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButton)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x2ad134c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerButtonDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButtonDrag)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2ad1b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerButtonDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::InputSystem::UI::PointerModel>, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerScroll)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2ad1e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessNavigation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::UI::NavigationModel>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessNavigation)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x2ad27ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessNavigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::NavigationModel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IsMoveAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::EventSystems::AxisEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsMoveAllowed)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2ad2e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "IsMoveAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_moveRepeatDelay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_moveRepeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_moveRepeatDelay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_moveRepeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_moveRepeatRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_moveRepeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_moveRepeatRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_moveRepeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_explictlyIgnoreFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_explictlyIgnoreFocus)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ad3020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_explictlyIgnoreFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_shouldIgnoreFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_shouldIgnoreFocus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ad3088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_shouldIgnoreFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_repeatRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_repeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_repeatRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_repeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_repeatDelay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_repeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_repeatDelay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_repeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_xrTrackingOrigin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_xrTrackingOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_xrTrackingOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_xrTrackingOrigin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::Transform*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_xrTrackingOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_xrTrackingOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceDragThresholdMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDeviceDragThresholdMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceDragThresholdMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDeviceDragThresholdMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SwapAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::InputActionReference*>, ::UnityEngine::InputSystem::InputActionReference*, bool, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SwapAction)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2ad3190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SwapAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionReference*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_point
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_point)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_point",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_point
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_point)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_point",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_scrollWheel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollWheel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_scrollWheel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_scrollWheel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollWheel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_scrollWheel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_leftClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_leftClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_leftClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_leftClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_leftClick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_leftClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_middleClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_middleClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_middleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_middleClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_middleClick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_middleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_rightClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_rightClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad37a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_rightClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_rightClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_rightClick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad37b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_rightClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_move
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_move)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad37c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_move
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_move)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad37d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_submit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_submit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad37e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_submit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_submit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_submit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad37f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_submit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cancel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceOrientation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDeviceOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceOrientation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDeviceOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDevicePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDevicePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDevicePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ad3850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDevicePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.AssignDefaultActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::AssignDefaultActions)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2ad3868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "AssignDefaultActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UnassignActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnassignActions)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ad3d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "UnassignActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceSelect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ad3e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDeviceSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceSelect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ad3ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDeviceSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ad3ee8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad3f90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ad3fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ad44fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ResetPointers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ResetPointers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ad41fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ResetPointers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HasNoActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HasNoActions)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ad40cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "HasNoActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.EnableAllActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableAllActions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ad44a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "EnableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.DisableAllActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::DisableAllActions)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2ad459c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "DisableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.EnableInputAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableInputAction)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2ad35bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "EnableInputAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.TryDisableInputAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*, bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::TryDisableInputAction)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ad3444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "TryDisableInputAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ad0468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateIndexFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateForIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::UI::PointerModel> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateForIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ad4710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateForIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ad4754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateIndexFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputControl*, bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x2ad4818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateIndexFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.AllocatePointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t, int32_t, ::UnityEngine::InputSystem::UI::UIPointerType, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::AllocatePointer)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2ad5184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "AllocatePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SendPointerExitEventsAndRemovePointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SendPointerExitEventsAndRemovePointer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ad4644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SendPointerExitEventsAndRemovePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.RemovePointerAtIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::RemovePointerAtIndex)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2ad5464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "RemovePointerAtIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PurgeStalePointers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PurgeStalePointers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2ad564c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "PurgeStalePointers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HaveControlForDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HaveControlForDevice)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ad50b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "HaveControlForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnPointCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnPointCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ad5764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnPointCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IgnoreNextClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>, bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IgnoreNextClick)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2ad584c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "IgnoreNextClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnLeftClickCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnLeftClickCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ad5970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnLeftClickCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnRightClickCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnRightClickCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ad5a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnRightClickCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnMiddleClickCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMiddleClickCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ad5ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnMiddleClickCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.CheckForRemovedDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::CheckForRemovedDevice)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ad47b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "CheckForRemovedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnScrollCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnScrollCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ad5b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnScrollCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnMoveCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMoveCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ad5c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnMoveCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnTrackedDeviceOrientationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDeviceOrientationCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ad5cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnTrackedDeviceOrientationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnTrackedDevicePositionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDevicePositionCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ad5d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnTrackedDevicePositionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnControlsChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::System::Object*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnControlsChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad5e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnControlsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::Process)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2ad5e6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ConvertUIToolkitPointerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertUIToolkitPointerId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ad6128;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HookActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HookActions)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2ad4240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "HookActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UnhookActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnhookActions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad3fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "UnhookActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SetActionCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallbacks)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ad61f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SetActionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SetActionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2ad62e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SetActionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UpdateReferenceForNewAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionReference* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UpdateReferenceForNewAsset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ad63c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "UpdateReferenceForNewAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_actionsAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionAsset* (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_actionsAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad6450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_actionsAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_actionsAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_actionsAsset)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2ad3b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_actionsAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ad6458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_MoveRepeatDelay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MoveRepeatDelay()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MoveRepeatDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_MoveRepeatRate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MoveRepeatRate()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MoveRepeatRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_TrackedDeviceDragThresholdMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_TrackedDeviceDragThresholdMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_TrackedDeviceDragThresholdMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_XRTrackingOrigin(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x60>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_XRTrackingOrigin()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_XRTrackingOrigin() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_ActionsAsset(::UnityEngine::InputSystem::InputActionAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x68>(this, std::forward<::UnityEngine::InputSystem::InputActionAsset*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_ActionsAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_ActionsAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x68>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_PointAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x70>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x70>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_MoveAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x78>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MoveAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MoveAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x78>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_SubmitAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x80>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_SubmitAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_SubmitAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x80>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_CancelAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x88>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CancelAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CancelAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x88>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_LeftClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x90>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_LeftClickAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_LeftClickAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x90>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_MiddleClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x98>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MiddleClickAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_MiddleClickAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0x98>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_RightClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xa0>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_RightClickAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_RightClickAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xa0>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xa8>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_ScrollWheelAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_ScrollWheelAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xa8>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_TrackedDevicePositionAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xb0>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_TrackedDevicePositionAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_TrackedDevicePositionAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xb0>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_TrackedDeviceOrientationAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xb8>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_TrackedDeviceOrientationAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_TrackedDeviceOrientationAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xb8>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_DeselectOnBackgroundClick(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_DeselectOnBackgroundClick()  {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr bool const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_DeselectOnBackgroundClick() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_PointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::UI::UIPointerBehavior, 0xc4>(this, std::forward<::UnityEngine::InputSystem::UI::UIPointerBehavior>(value));
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerBehavior()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::UIPointerBehavior, 0xc4>(this);
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerBehavior() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::UIPointerBehavior, 0xc4>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_CursorLockBehavior(::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior, 0xc8>(this, std::forward<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior>(value));
}
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CursorLockBehavior()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior, 0xc8>(this);
}
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CursorLockBehavior() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior, 0xc8>(this);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::setStaticF_s_InputActionReferenceCounts(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*, "s_InputActionReferenceCounts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::getStaticF_s_InputActionReferenceCounts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*,::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*, "s_InputActionReferenceCounts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get>();
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_ActionsHooked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xcc>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_ActionsHooked()  {
return ::cordl_internals::getInstanceField<bool, 0xcc>(this);
}
constexpr bool const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_ActionsHooked() const {
return ::cordl_internals::getInstanceField<bool, 0xcc>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_NeedToPurgeStalePointers(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xcd>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_NeedToPurgeStalePointers()  {
return ::cordl_internals::getInstanceField<bool, 0xcd>(this);
}
constexpr bool const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_NeedToPurgeStalePointers() const {
return ::cordl_internals::getInstanceField<bool, 0xcd>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnPointDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xd0>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnPointDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnPointDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xd0>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnMoveDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xd8>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnMoveDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnMoveDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xd8>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnLeftClickDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xe0>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnLeftClickDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnLeftClickDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xe0>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnRightClickDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xe8>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnRightClickDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnRightClickDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xe8>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnMiddleClickDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xf0>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnMiddleClickDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnMiddleClickDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xf0>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnScrollWheelDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xf8>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnScrollWheelDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnScrollWheelDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0xf8>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnTrackedDevicePositionDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x100>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnTrackedDevicePositionDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnTrackedDevicePositionDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x100>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnTrackedDeviceOrientationDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x108>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnTrackedDeviceOrientationDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnTrackedDeviceOrientationDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x108>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_OnControlsChangedDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Object*>*, 0x110>(this, std::forward<::System::Action_1<::System::Object*>*>(value));
}
constexpr ::System::Action_1<::System::Object*>* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnControlsChangedDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Object*>*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_OnControlsChangedDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Object*>*, 0x110>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_CurrentPointerId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x118>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CurrentPointerId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x118>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CurrentPointerId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x118>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_CurrentPointerIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x11c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CurrentPointerIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CurrentPointerIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_CurrentPointerType(::UnityEngine::InputSystem::UI::UIPointerType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::UI::UIPointerType, 0x120>(this, std::forward<::UnityEngine::InputSystem::UI::UIPointerType>(value));
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CurrentPointerType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::UIPointerType, 0x120>(this);
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_CurrentPointerType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::UIPointerType, 0x120>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_PointerIds(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>, 0x128>(this, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerIds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>, 0x128>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerIds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>, 0x128>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_PointerTouchControls(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*>, 0x138>(this, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerTouchControls()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*>, 0x138>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerTouchControls() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*>, 0x138>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_PointerStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>, 0x150>(this, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerStates()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>, 0x150>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_PointerStates() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>, 0x150>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_NavigationState(::UnityEngine::InputSystem::UI::NavigationModel  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::UI::NavigationModel, 0x368>(this, std::forward<::UnityEngine::InputSystem::UI::NavigationModel>(value));
}
constexpr ::UnityEngine::InputSystem::UI::NavigationModel& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_NavigationState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::NavigationModel, 0x368>(this);
}
constexpr ::UnityEngine::InputSystem::UI::NavigationModel const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_NavigationState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::UI::NavigationModel, 0x368>(this);
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__set_m_LocalMultiPlayerRoot(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x388>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_LocalMultiPlayerRoot()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x388>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> UnityEngine::InputSystem::UI::InputSystemUIInputModule::__get_m_LocalMultiPlayerRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x388>(this);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_deselectOnBackgroundClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_deselectOnBackgroundClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_deselectOnBackgroundClick(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_deselectOnBackgroundClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::UIPointerBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_pointerBehavior()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_pointerBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::UIPointerBehavior, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_pointerBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cursorLockBehavior()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_cursorLockBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cursorLockBehavior(::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_cursorLockBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::GameObject* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_localMultiPlayerRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_localMultiPlayerRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_localMultiPlayerRoot(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_localMultiPlayerRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ActivateModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ActivateModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsPointerOverGameObject(int32_t  pointerOrTouchId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "IsPointerOverGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pointerOrTouchId);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetLastRaycastResult(int32_t  pointerOrTouchId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetLastRaycastResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult, false>(*this, ___internal_method, pointerOrTouchId);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::InputSystem::UI::InputSystemUIInputModule::PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "PerformRaycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointer(ByRef<::UnityEngine::InputSystem::UI::PointerModel>  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::PointerShouldIgnoreTransform(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "PointerShouldIgnoreTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, t);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement(ByRef<::UnityEngine::InputSystem::UI::PointerModel>  pointer, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointer, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData, ::UnityEngine::GameObject*  currentPointerTarget)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData, currentPointerTarget);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButton(ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>  button, ::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, button, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButtonDrag(ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>  button, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerButtonDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, button, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerScroll(ByRef<::UnityEngine::InputSystem::UI::PointerModel>  pointer, ::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessPointerScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointer, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessNavigation(ByRef<::UnityEngine::InputSystem::UI::NavigationModel>  navigationState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ProcessNavigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::NavigationModel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, navigationState);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsMoveAllowed(::UnityEngine::EventSystems::AxisEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "IsMoveAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, eventData);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatDelay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_moveRepeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_moveRepeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_moveRepeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_moveRepeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_explictlyIgnoreFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_explictlyIgnoreFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_shouldIgnoreFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_shouldIgnoreFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_repeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_repeatRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatDelay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_repeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_repeatDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Transform* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_xrTrackingOrigin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_xrTrackingOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_xrTrackingOrigin(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_xrTrackingOrigin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceDragThresholdMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDeviceDragThresholdMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceDragThresholdMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDeviceDragThresholdMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SwapAction(ByRef<::UnityEngine::InputSystem::InputActionReference*>  property, ::UnityEngine::InputSystem::InputActionReference*  newValue, bool  actionsHooked, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  actionCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SwapAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionReference*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, property, newValue, actionsHooked, actionCallback);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_point()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_point",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_point(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_point",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollWheel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_scrollWheel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollWheel(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_scrollWheel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_leftClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_leftClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_leftClick(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_leftClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_middleClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_middleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_middleClick(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_middleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_rightClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_rightClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_rightClick(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_rightClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_move()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_move(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_move",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_submit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_submit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_submit(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_submit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cancel(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceOrientation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDeviceOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDeviceOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDevicePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDevicePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDevicePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::AssignDefaultActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "AssignDefaultActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnassignActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "UnassignActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceSelect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_trackedDeviceSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_trackedDeviceSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ResetPointers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ResetPointers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::HasNoActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "HasNoActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableAllActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "EnableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::DisableAllActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "DisableAllActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputActionReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "EnableInputAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputActionReference);
}
/// @param isComponentDisabling: bool (default: false)
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::TryDisableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputActionReference, bool  isComponentDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "TryDisableInputAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputActionReference, isComponentDisabling);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(int32_t  pointerOrTouchId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateIndexFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, pointerOrTouchId);
}
inline ByRef<::UnityEngine::InputSystem::UI::PointerModel> UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateForIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateForIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::UI::PointerModel>, false>(*this, ___internal_method, index);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateIndexFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, context);
}
/// @param createIfNotExists: bool (default: true)
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(::UnityEngine::InputSystem::InputControl*  control, bool  createIfNotExists)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "GetPointerStateIndexFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, control, createIfNotExists);
}
/// @param touchControl: ::UnityEngine::InputSystem::InputControl* (default: csnull)
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::AllocatePointer(int32_t  pointerId, int32_t  touchId, ::UnityEngine::InputSystem::UI::UIPointerType  pointerType, ::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputControl*  touchControl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "AllocatePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, pointerId, touchId, pointerType, control, device, touchControl);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SendPointerExitEventsAndRemovePointer(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SendPointerExitEventsAndRemovePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::RemovePointerAtIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "RemovePointerAtIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::PurgeStalePointers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "PurgeStalePointers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::HaveControlForDevice(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputActionReference*  actionReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "HaveControlForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device, actionReference);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnPointCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnPointCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IgnoreNextClick(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>  context, bool  wasPressed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "IgnoreNextClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, context, wasPressed);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnLeftClickCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnLeftClickCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnRightClickCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnRightClickCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMiddleClickCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnMiddleClickCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::CheckForRemovedDevice(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "CheckForRemovedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnScrollCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnScrollCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMoveCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnMoveCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDeviceOrientationCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnTrackedDeviceOrientationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDevicePositionCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnTrackedDevicePositionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnControlsChanged(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "OnControlsChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::Process()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData*  sourcePointerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "ConvertUIToolkitPointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, sourcePointerData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::HookActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "HookActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnhookActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "UnhookActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallbacks(bool  install)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SetActionCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, install);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallback(::UnityEngine::InputSystem::InputActionReference*  actionReference, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  callback, bool  install)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "SetActionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionReference, callback, install);
}
inline ::UnityEngine::InputSystem::InputActionReference* UnityEngine::InputSystem::UI::InputSystemUIInputModule::UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference*  actionReference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "UpdateReferenceForNewAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionReference*, false>(*this, ___internal_method, actionReference);
}
inline ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_actionsAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "get_actionsAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionAsset*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            "set_actionsAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::InputSystemUIInputModule* UnityEngine::InputSystem::UI::InputSystemUIInputModule::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>());
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
