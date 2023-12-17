#pragma once
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__OVRCursor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
constexpr void UnityEngine::EventSystems::__OVRInputModule__InputMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::EventSystems::__OVRInputModule__InputMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::EventSystems::__OVRInputModule__InputMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::__OVRInputModule__InputMode::__OVRInputModule__InputMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::EventSystems::__OVRInputModule__InputMode  UnityEngine::EventSystems::__OVRInputModule__InputMode::Mouse{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::EventSystems::__OVRInputModule__InputMode  UnityEngine::EventSystems::__OVRInputModule__InputMode::Buttons{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x27f87b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_inputMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__OVRInputModule__InputMode (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_inputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_inputMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_allowActivationOnMobileDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f892c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_allowActivationOnMobileDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_allowActivationOnMobileDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(bool)>(&::UnityEngine::EventSystems::OVRInputModule::set_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27f8934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_allowActivationOnMobileDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_inputActionsPerSecond
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_inputActionsPerSecond",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_inputActionsPerSecond
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(float_t)>(&::UnityEngine::EventSystems::OVRInputModule::set_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_inputActionsPerSecond",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_horizontalAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_horizontalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_horizontalAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_horizontalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_verticalAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_verticalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_verticalAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_verticalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_submitButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_submitButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_submitButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_submitButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.get_cancelButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::get_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_cancelButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.set_cancelButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::StringW)>(&::UnityEngine::EventSystems::OVRInputModule::set_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f8988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_cancelButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.UpdateModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::UpdateModule)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f8990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.IsModuleSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::IsModuleSupported)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f89b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ShouldActivateModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x27f89cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ActivateModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27f8b54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.DeactivateModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::DeactivateModule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27f8c20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SendSubmitEventToSelectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::SendSubmitEventToSelectedObject)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x27f8f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SendSubmitEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.AllowMoveEventProcessing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)(float_t)>(&::UnityEngine::EventSystems::OVRInputModule::AllowMoveEventProcessing)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27f9118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "AllowMoveEventProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetRawMoveVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::GetRawMoveVector)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27f9174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetRawMoveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SendMoveEventToSelectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::SendMoveEventToSelectedObject)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x27f9230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SendMoveEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SendUpdateEventToSelectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x27f9434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SendUpdateEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ProcessMousePress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x27f957c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ProcessMousePress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ProcessMouseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::__PointerInputModule__MouseState*)>(&::UnityEngine::EventSystems::OVRInputModule::ProcessMouseEvent)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x27f9ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ProcessMouseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::Process)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27f9fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.UseMouse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, bool, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::UseMouse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27f9f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "UseMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.CopyFromTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::OVRPointerEventData*, ::UnityEngine::EventSystems::OVRPointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::CopyFromTo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27fa06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "CopyFromTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::OVRPointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::OVRPointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.CopyFromTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::CopyFromTo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27fa0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "CopyFromTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetPointerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)(int32_t, ByRef<::UnityEngine::EventSystems::OVRPointerEventData*>, bool)>(&::UnityEngine::EventSystems::OVRInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x27fa12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::OVRPointerEventData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ClearSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x27f8c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetRectTransformNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::RectTransform*)>(&::UnityEngine::EventSystems::OVRInputModule::GetRectTransformNormal)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x27fa220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetRectTransformNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetGazePointerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerInputModule__MouseState* (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::GetGazePointerData)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x27fa3c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetCanvasPointerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerInputModule__MouseState* (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::GetCanvasPointerData)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x27faf54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetCanvasPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ShouldStartDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x27fb2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ShouldStartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.IsPointerMoving
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::IsPointerMoving)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27fa038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "IsPointerMoving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.SwipeAdjustedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::Vector2, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::SwipeAdjustedPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27fb6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SwipeAdjustedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.ProcessDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::OVRInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x27fb734;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetGazeButtonState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerEventData__FramePressState (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::GetGazeButtonState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27fba30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRInputModule.GetExtraScrollDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::OVRInputModule::*)()>(&::UnityEngine::EventSystems::OVRInputModule::GetExtraScrollDelta)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27faa38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetExtraScrollDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_rayTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x60>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* UnityEngine::EventSystems::OVRInputModule::__get_rayTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> UnityEngine::EventSystems::OVRInputModule::__get_rayTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_Cursor(::GlobalNamespace::OVRCursor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRCursor*, 0x68>(this, std::forward<::GlobalNamespace::OVRCursor*>(value));
}
constexpr ::GlobalNamespace::OVRCursor* UnityEngine::EventSystems::OVRInputModule::__get_m_Cursor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCursor*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCursor*> UnityEngine::EventSystems::OVRInputModule::__get_m_Cursor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCursor*, 0x68>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_joyPadClickButton(::GlobalNamespace::__OVRInput__Button  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__Button, 0x70>(this, std::forward<::GlobalNamespace::__OVRInput__Button>(value));
}
constexpr ::GlobalNamespace::__OVRInput__Button& UnityEngine::EventSystems::OVRInputModule::__get_joyPadClickButton()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__Button, 0x70>(this);
}
constexpr ::GlobalNamespace::__OVRInput__Button const& UnityEngine::EventSystems::OVRInputModule::__get_joyPadClickButton() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__Button, 0x70>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_gazeClickKey(::UnityEngine::KeyCode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::KeyCode, 0x74>(this, std::forward<::UnityEngine::KeyCode>(value));
}
constexpr ::UnityEngine::KeyCode& UnityEngine::EventSystems::OVRInputModule::__get_gazeClickKey()  {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x74>(this);
}
constexpr ::UnityEngine::KeyCode const& UnityEngine::EventSystems::OVRInputModule::__get_gazeClickKey() const {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x74>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_performSphereCastForGazepointer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__get_performSphereCastForGazepointer()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__get_performSphereCastForGazepointer() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_useRightStickScroll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x79>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__get_useRightStickScroll()  {
return ::cordl_internals::getInstanceField<bool, 0x79>(this);
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__get_useRightStickScroll() const {
return ::cordl_internals::getInstanceField<bool, 0x79>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_rightStickDeadZone(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__get_rightStickDeadZone()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__get_rightStickDeadZone() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_useSwipeScroll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__get_useSwipeScroll()  {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__get_useSwipeScroll() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_swipeDragThreshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__get_swipeDragThreshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__get_swipeDragThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_swipeDragScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__get_swipeDragScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__get_swipeDragScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_InvertSwipeXAxis(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__get_InvertSwipeXAxis()  {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__get_InvertSwipeXAxis() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_activeGraphicRaycaster(::GlobalNamespace::OVRRaycaster*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRRaycaster*, 0x90>(this, std::forward<::GlobalNamespace::OVRRaycaster*>(value));
}
constexpr ::GlobalNamespace::OVRRaycaster* UnityEngine::EventSystems::OVRInputModule::__get_activeGraphicRaycaster()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRRaycaster*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRRaycaster*> UnityEngine::EventSystems::OVRInputModule::__get_activeGraphicRaycaster() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRRaycaster*, 0x90>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_angleDragThreshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__get_angleDragThreshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__get_angleDragThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_SpherecastRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__get_m_SpherecastRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__get_m_SpherecastRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_NextAction(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__get_m_NextAction()  {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__get_m_NextAction() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_LastMousePosition(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0xa4>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::OVRInputModule::__get_m_LastMousePosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xa4>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::OVRInputModule::__get_m_LastMousePosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xa4>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_MousePosition(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0xac>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::OVRInputModule::__get_m_MousePosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xac>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::OVRInputModule::__get_m_MousePosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xac>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_HorizontalAxis(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__get_m_HorizontalAxis()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this);
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__get_m_HorizontalAxis() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_VerticalAxis(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__get_m_VerticalAxis()  {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this);
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__get_m_VerticalAxis() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_SubmitButton(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xc8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__get_m_SubmitButton()  {
return ::cordl_internals::getInstanceField<::StringW, 0xc8>(this);
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__get_m_SubmitButton() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc8>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_CancelButton(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xd0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::EventSystems::OVRInputModule::__get_m_CancelButton()  {
return ::cordl_internals::getInstanceField<::StringW, 0xd0>(this);
}
constexpr ::StringW const& UnityEngine::EventSystems::OVRInputModule::__get_m_CancelButton() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd0>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_InputActionsPerSecond(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xd8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::EventSystems::OVRInputModule::__get_m_InputActionsPerSecond()  {
return ::cordl_internals::getInstanceField<float_t, 0xd8>(this);
}
constexpr float_t const& UnityEngine::EventSystems::OVRInputModule::__get_m_InputActionsPerSecond() const {
return ::cordl_internals::getInstanceField<float_t, 0xd8>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_AllowActivationOnMobileDevice(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xdc>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::EventSystems::OVRInputModule::__get_m_AllowActivationOnMobileDevice()  {
return ::cordl_internals::getInstanceField<bool, 0xdc>(this);
}
constexpr bool const& UnityEngine::EventSystems::OVRInputModule::__get_m_AllowActivationOnMobileDevice() const {
return ::cordl_internals::getInstanceField<bool, 0xdc>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_VRRayPointerData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData*>*, 0xe0>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData*>* UnityEngine::EventSystems::OVRInputModule::__get_m_VRRayPointerData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData*>*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData*>*> UnityEngine::EventSystems::OVRInputModule::__get_m_VRRayPointerData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::OVRPointerEventData*>*, 0xe0>(this);
}
constexpr void UnityEngine::EventSystems::OVRInputModule::__set_m_MouseState(::UnityEngine::EventSystems::__PointerInputModule__MouseState*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::__PointerInputModule__MouseState*, 0xe8>(this, std::forward<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>(value));
}
constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseState* UnityEngine::EventSystems::OVRInputModule::__get_m_MouseState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::__PointerInputModule__MouseState*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseState*> UnityEngine::EventSystems::OVRInputModule::__get_m_MouseState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::__PointerInputModule__MouseState*, 0xe8>(this);
}
inline ::UnityEngine::EventSystems::OVRInputModule* UnityEngine::EventSystems::OVRInputModule::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::OVRInputModule*>());
}
inline void UnityEngine::EventSystems::OVRInputModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::EventSystems::__OVRInputModule__InputMode UnityEngine::EventSystems::OVRInputModule::get_inputMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_inputMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__OVRInputModule__InputMode, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::get_allowActivationOnMobileDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_allowActivationOnMobileDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_allowActivationOnMobileDevice(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_allowActivationOnMobileDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::OVRInputModule::get_inputActionsPerSecond()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_inputActionsPerSecond",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_inputActionsPerSecond(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_inputActionsPerSecond",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_horizontalAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_horizontalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_horizontalAxis(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_horizontalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_verticalAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_verticalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_verticalAxis(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_verticalAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_submitButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_submitButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_submitButton(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_submitButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::OVRInputModule::get_cancelButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "get_cancelButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::set_cancelButton(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "set_cancelButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::EventSystems::OVRInputModule::UpdateModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "UpdateModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::IsModuleSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "IsModuleSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::ShouldActivateModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ShouldActivateModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::ActivateModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ActivateModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::DeactivateModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "DeactivateModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::SendSubmitEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SendSubmitEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::AllowMoveEventProcessing(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "AllowMoveEventProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, time);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::OVRInputModule::GetRawMoveVector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetRawMoveVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::SendMoveEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SendMoveEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::SendUpdateEventToSelectedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SendUpdateEventToSelectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::OVRInputModule::ProcessMousePress(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ProcessMousePress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline void UnityEngine::EventSystems::OVRInputModule::ProcessMouseEvent(::UnityEngine::EventSystems::__PointerInputModule__MouseState*  mouseData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ProcessMouseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mouseData);
}
inline void UnityEngine::EventSystems::OVRInputModule::Process()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::UseMouse(bool  pressed, bool  released, ::UnityEngine::EventSystems::PointerEventData*  pointerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "UseMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pressed, released, pointerData);
}
inline void UnityEngine::EventSystems::OVRInputModule::CopyFromTo(::UnityEngine::EventSystems::OVRPointerEventData*  from, ::UnityEngine::EventSystems::OVRPointerEventData*  to)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "CopyFromTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::OVRPointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::OVRPointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, from, to);
}
inline void UnityEngine::EventSystems::OVRInputModule::CopyFromTo(::UnityEngine::EventSystems::PointerEventData*  from, ::UnityEngine::EventSystems::PointerEventData*  to)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "CopyFromTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, from, to);
}
inline bool UnityEngine::EventSystems::OVRInputModule::GetPointerData(int32_t  id, ByRef<::UnityEngine::EventSystems::OVRPointerEventData*>  data, bool  create)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::OVRPointerEventData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, id, data, create);
}
inline void UnityEngine::EventSystems::OVRInputModule::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::EventSystems::OVRInputModule::GetRectTransformNormal(::UnityEngine::RectTransform*  rectTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetRectTransformNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, rectTransform);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* UnityEngine::EventSystems::OVRInputModule::GetGazePointerData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetGazePointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerInputModule__MouseState*, false>(*this, ___internal_method);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* UnityEngine::EventSystems::OVRInputModule::GetCanvasPointerData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetCanvasPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerInputModule__MouseState*, false>(*this, ___internal_method);
}
inline bool UnityEngine::EventSystems::OVRInputModule::ShouldStartDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ShouldStartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pointerEvent);
}
inline bool UnityEngine::EventSystems::OVRInputModule::IsPointerMoving(::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "IsPointerMoving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerEvent);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::OVRInputModule::SwipeAdjustedPosition(::UnityEngine::Vector2  originalPosition, ::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "SwipeAdjustedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, originalPosition, pointerEvent);
}
inline void UnityEngine::EventSystems::OVRInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "ProcessDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointerEvent);
}
inline ::UnityEngine::EventSystems::__PointerEventData__FramePressState UnityEngine::EventSystems::OVRInputModule::GetGazeButtonState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetGazeButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerEventData__FramePressState, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::OVRInputModule::GetExtraScrollDelta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRInputModule*>::get(),
                            "GetExtraScrollDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
