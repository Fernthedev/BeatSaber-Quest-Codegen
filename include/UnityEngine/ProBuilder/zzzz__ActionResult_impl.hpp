#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
constexpr void UnityEngine::ProBuilder::__ActionResult__Status::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ProBuilder::__ActionResult__Status::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::ProBuilder::__ActionResult__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::__ActionResult__Status::__ActionResult__Status(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::ProBuilder::__ActionResult__Status  UnityEngine::ProBuilder::__ActionResult__Status::Success{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ProBuilder::__ActionResult__Status  UnityEngine::ProBuilder::__ActionResult__Status::Failure{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ProBuilder::__ActionResult__Status  UnityEngine::ProBuilder::__ActionResult__Status::Canceled{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ProBuilder::__ActionResult__Status  UnityEngine::ProBuilder::__ActionResult__Status::NoChange{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__ActionResult__Status (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b366fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::UnityEngine::ProBuilder::__ActionResult__Status)>(&::UnityEngine::ProBuilder::ActionResult::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b36704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__ActionResult__Status>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_notification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::get_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b3670c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_notification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::StringW)>(&::UnityEngine::ProBuilder::ActionResult::set_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b36714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "set_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::UnityEngine::ProBuilder::__ActionResult__Status, ::StringW)>(&::UnityEngine::ProBuilder::ActionResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b3671c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__ActionResult__Status>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.op_Implicit_bool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ActionResult*)>(&::UnityEngine::ProBuilder::ActionResult::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b3674c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.ToBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::ToBool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b36760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "ToBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.FromBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::UnityEngine::ProBuilder::ActionResult::FromBool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b36770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "FromBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_Success)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b36810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_NoSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_NoSelection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b3688c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_NoSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_UserCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_UserCanceled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b3690c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_UserCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::ActionResult::__set__status_k__BackingField(::UnityEngine::ProBuilder::__ActionResult__Status  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::__ActionResult__Status, 0x10>(this, std::forward<::UnityEngine::ProBuilder::__ActionResult__Status>(value));
}
constexpr ::UnityEngine::ProBuilder::__ActionResult__Status& UnityEngine::ProBuilder::ActionResult::__get__status_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::__ActionResult__Status, 0x10>(this);
}
constexpr ::UnityEngine::ProBuilder::__ActionResult__Status const& UnityEngine::ProBuilder::ActionResult::__get__status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::__ActionResult__Status, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::ActionResult::__set__notification_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::ProBuilder::ActionResult::__get__notification_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::ProBuilder::ActionResult::__get__notification_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::UnityEngine::ProBuilder::__ActionResult__Status UnityEngine::ProBuilder::ActionResult::get_status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__ActionResult__Status, false>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ActionResult::set_status(::UnityEngine::ProBuilder::__ActionResult__Status  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__ActionResult__Status>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::ProBuilder::ActionResult::get_notification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ActionResult::set_notification(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "set_notification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::New_ctor(::UnityEngine::ProBuilder::__ActionResult__Status  status, ::StringW  notification)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::ActionResult*>(status, notification));
}
inline void UnityEngine::ProBuilder::ActionResult::_ctor(::UnityEngine::ProBuilder::__ActionResult__Status  status, ::StringW  notification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::__ActionResult__Status>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, status, notification);
}
inline bool UnityEngine::ProBuilder::ActionResult::op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult*  res)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ActionResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, res);
}
inline bool UnityEngine::ProBuilder::ActionResult::ToBool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "ToBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::ActionResult::FromBool(bool  success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "FromBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, success);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_NoSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_NoSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_UserCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ActionResult*>::get(),
                            "get_UserCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
