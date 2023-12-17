#pragma once
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
constexpr void UnityEngine::UIElements::__DropdownMenuAction__Status::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__DropdownMenuAction__Status::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::__DropdownMenuAction__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status::__DropdownMenuAction__Status(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status  UnityEngine::UIElements::__DropdownMenuAction__Status::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status  UnityEngine::UIElements::__DropdownMenuAction__Status::Normal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status  UnityEngine::UIElements::__DropdownMenuAction__Status::Disabled{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status  UnityEngine::UIElements::__DropdownMenuAction__Status::Checked{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status  UnityEngine::UIElements::__DropdownMenuAction__Status::Hidden{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::__DropdownMenuAction__Status)>(&::UnityEngine::UIElements::DropdownMenuAction::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0856c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DropdownMenuAction__Status>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_eventInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::DropdownMenuEventInfo*)>(&::UnityEngine::UIElements::DropdownMenuAction::set_eventInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e08574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "set_eventInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_userData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::System::Object*)>(&::UnityEngine::UIElements::DropdownMenuAction::set_userData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "set_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*, ::System::Object*)>(&::UnityEngine::UIElements::DropdownMenuAction::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e08584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.UpdateActionStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::DropdownMenuEventInfo*)>(&::UnityEngine::UIElements::DropdownMenuAction::UpdateActionStatus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e085c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "UpdateActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::DropdownMenuAction::__set__name_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::DropdownMenuAction::__get__name_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::DropdownMenuAction::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__set__status_k__BackingField(::UnityEngine::UIElements::__DropdownMenuAction__Status  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__DropdownMenuAction__Status, 0x18>(this, std::forward<::UnityEngine::UIElements::__DropdownMenuAction__Status>(value));
}
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status& UnityEngine::UIElements::DropdownMenuAction::__get__status_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__DropdownMenuAction__Status, 0x18>(this);
}
constexpr ::UnityEngine::UIElements::__DropdownMenuAction__Status const& UnityEngine::UIElements::DropdownMenuAction::__get__status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__DropdownMenuAction__Status, 0x18>(this);
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__set__eventInfo_k__BackingField(::UnityEngine::UIElements::DropdownMenuEventInfo*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::DropdownMenuEventInfo*, 0x20>(this, std::forward<::UnityEngine::UIElements::DropdownMenuEventInfo*>(value));
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo* UnityEngine::UIElements::DropdownMenuAction::__get__eventInfo_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::DropdownMenuEventInfo*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenuEventInfo*> UnityEngine::UIElements::DropdownMenuAction::__get__eventInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::DropdownMenuEventInfo*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__set__userData_k__BackingField(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::UIElements::DropdownMenuAction::__get__userData_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::UIElements::DropdownMenuAction::__get__userData_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__set_actionCallback(::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, 0x30>(this, std::forward<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* UnityEngine::UIElements::DropdownMenuAction::__get_actionCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*> UnityEngine::UIElements::DropdownMenuAction::__get_actionCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, 0x30>(this);
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__set_actionStatusCallback(::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*, 0x38>(this, std::forward<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*>(value));
}
constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>* UnityEngine::UIElements::DropdownMenuAction::__get_actionStatusCallback()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*> UnityEngine::UIElements::DropdownMenuAction::__get_actionStatusCallback() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*, 0x38>(this);
}
inline void UnityEngine::UIElements::DropdownMenuAction::set_status(::UnityEngine::UIElements::__DropdownMenuAction__Status  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DropdownMenuAction__Status>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DropdownMenuAction::set_eventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "set_eventInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DropdownMenuAction::set_userData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "set_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
/// @param userData: ::System::Object* (default: csnull)
inline ::UnityEngine::UIElements::DropdownMenuAction* UnityEngine::UIElements::DropdownMenuAction::New_ctor(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*  actionStatusCallback, ::System::Object*  userData)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DropdownMenuAction*>(actionName, actionCallback, actionStatusCallback, userData));
}
/// @param userData: ::System::Object* (default: csnull)
inline void UnityEngine::UIElements::DropdownMenuAction::_ctor(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*  actionStatusCallback, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::UnityEngine::UIElements::__DropdownMenuAction__Status>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, actionName, actionCallback, actionStatusCallback, userData);
}
inline void UnityEngine::UIElements::DropdownMenuAction::UpdateActionStatus(::UnityEngine::UIElements::DropdownMenuEventInfo*  eventInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction*>::get(),
                            "UpdateActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventInfo);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
