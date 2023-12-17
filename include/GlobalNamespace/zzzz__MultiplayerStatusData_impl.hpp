#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
constexpr void GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__MultiplayerStatusData__AvailabilityStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus  GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::Online{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus  GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::MaintenanceUpcoming{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus  GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::Offline{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::*)()>(&::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_language(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_language()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_language() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_message(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_message()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage* GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>());
}
inline void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusData__UserMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusData__UserMessage::*)()>(&::GlobalNamespace::__MultiplayerStatusData__UserMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage::__set_localizations(::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>& GlobalNamespace::__MultiplayerStatusData__UserMessage::__get_localizations()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>, 0x10>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> const& GlobalNamespace::__MultiplayerStatusData__UserMessage::__get_localizations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*,::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>, 0x10>(this);
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* GlobalNamespace::__MultiplayerStatusData__UserMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>());
}
inline void GlobalNamespace::__MultiplayerStatusData__UserMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_minimumAppVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_minimumAppVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::StringW)>(&::GlobalNamespace::MultiplayerStatusData::set_minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_maintenanceStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_maintenanceStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(&::GlobalNamespace::MultiplayerStatusData::set_maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_maintenanceEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_maintenanceEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_maintenanceEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_maintenanceEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(&::GlobalNamespace::MultiplayerStatusData::set_maintenanceEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_maintenanceEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_userMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerStatusData__UserMessage* (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_userMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::GlobalNamespace::__MultiplayerStatusData__UserMessage*)>(&::GlobalNamespace::MultiplayerStatusData::set_userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_useGamelift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_useGamelift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_useGamelift
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(&::GlobalNamespace::MultiplayerStatusData::set_useGamelift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2352f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get_useXPlatformAuth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get_useXPlatformAuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set_useXPlatformAuth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(&::GlobalNamespace::MultiplayerStatusData::set_useXPlatformAuth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2352f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerStatusData::__set_minimum_app_version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MultiplayerStatusData::__get_minimum_app_version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::MultiplayerStatusData::__get_minimum_app_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_status(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus, 0x18>(this, std::forward<::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus>(value));
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus& GlobalNamespace::MultiplayerStatusData::__get_status()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus, 0x18>(this);
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const& GlobalNamespace::MultiplayerStatusData::__get_status() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_maintenance_start_time(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__get_maintenance_start_time()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__get_maintenance_start_time() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_maintenance_end_time(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__get_maintenance_end_time()  {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__get_maintenance_end_time() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_user_message(::GlobalNamespace::__MultiplayerStatusData__UserMessage*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerStatusData__UserMessage*, 0x30>(this, std::forward<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>(value));
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage* GlobalNamespace::MultiplayerStatusData::__get_user_message()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerStatusData__UserMessage*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerStatusData__UserMessage*> GlobalNamespace::MultiplayerStatusData::__get_user_message() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerStatusData__UserMessage*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_use_gamelift(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__get_use_gamelift()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__get_use_gamelift() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_use_xplatform_auth(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__get_use_xplatform_auth()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__get_use_xplatform_auth() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
inline ::StringW GlobalNamespace::MultiplayerStatusData::get_minimumAppVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_minimumAppVersion(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_minimumAppVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MultiplayerStatusData::get_maintenanceStartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_maintenanceStartTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_maintenanceStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MultiplayerStatusData::get_maintenanceEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_maintenanceEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_maintenanceEndTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_maintenanceEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* GlobalNamespace::MultiplayerStatusData::get_userMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerStatusData__UserMessage*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_userMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get_useGamelift()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_useGamelift(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_useGamelift",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get_useXPlatformAuth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "get_useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set_useXPlatformAuth(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            "set_useXPlatformAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerStatusData* GlobalNamespace::MultiplayerStatusData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerStatusData*>());
}
inline void GlobalNamespace::MultiplayerStatusData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
