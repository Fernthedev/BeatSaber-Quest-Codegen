#pragma once
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "System/Diagnostics/zzzz__ProcessModuleCollection_def.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/ComponentModel/zzzz__ISynchronizeInvoke_def.hpp"
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadCollection_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadTimes_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Diagnostics/zzzz__ProcessStartInfo_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/Diagnostics/zzzz__ProcessInfo_def.hpp"
constexpr void System::Diagnostics::__Process__StreamReadMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::__Process__StreamReadMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Diagnostics::__Process__StreamReadMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__StreamReadMode::__Process__StreamReadMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode  System::Diagnostics::__Process__StreamReadMode::undefined{static_cast<int32_t>(0x0)};
constexpr ::System::Diagnostics::__Process__StreamReadMode  System::Diagnostics::__Process__StreamReadMode::syncMode{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::__Process__StreamReadMode  System::Diagnostics::__Process__StreamReadMode::asyncMode{static_cast<int32_t>(0x2)};
constexpr void System::Diagnostics::__Process__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::__Process__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Diagnostics::__Process__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__State::__Process__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::HaveId{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::IsLocal{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::IsNt{static_cast<int32_t>(0x4)};
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::HaveProcessInfo{static_cast<int32_t>(0x8)};
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::Exited{static_cast<int32_t>(0x10)};
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::Associated{static_cast<int32_t>(0x20)};
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::IsWin2k{static_cast<int32_t>(0x40)};
constexpr ::System::Diagnostics::__Process__State  System::Diagnostics::__Process__State::HaveNtProcessInfo{static_cast<int32_t>(0xc)};
constexpr void System::Diagnostics::__Process__ProcInfo::__set_process_handle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Diagnostics::__Process__ProcInfo::__get_process_handle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Diagnostics::__Process__ProcInfo::__get_process_handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Diagnostics::__Process__ProcInfo::__set_pid(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::__Process__ProcInfo::__get_pid()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Diagnostics::__Process__ProcInfo::__get_pid() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Diagnostics::__Process__ProcInfo::__set_envVariables(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Diagnostics::__Process__ProcInfo::__get_envVariables()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Diagnostics::__Process__ProcInfo::__get_envVariables() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Diagnostics::__Process__ProcInfo::__set_UserName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Diagnostics::__Process__ProcInfo::__get_UserName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Diagnostics::__Process__ProcInfo::__get_UserName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Diagnostics::__Process__ProcInfo::__set_Domain(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Diagnostics::__Process__ProcInfo::__get_Domain()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Diagnostics::__Process__ProcInfo::__get_Domain() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Diagnostics::__Process__ProcInfo::__set_Password(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Diagnostics::__Process__ProcInfo::__get_Password()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Diagnostics::__Process__ProcInfo::__get_Password() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Diagnostics::__Process__ProcInfo::__set_LoadUserProfile(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::__Process__ProcInfo::__get_LoadUserProfile()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Diagnostics::__Process__ProcInfo::__get_LoadUserProfile() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "process_handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "envVariables", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Domain", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Password", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LoadUserProfile", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__ProcInfo::__Process__ProcInfo(::cordl_internals::intptr_t  process_handle, int32_t  pid, ::ArrayW<::StringW,::Array<::StringW>*>  envVariables, ::StringW  UserName, ::StringW  Domain, ::cordl_internals::intptr_t  Password, bool  LoadUserProfile) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->process_handle = process_handle;
this->pid = pid;
this->envVariables = envVariables;
this->UserName = UserName;
this->Domain = Domain;
this->Password = Password;
this->LoadUserProfile = LoadUserProfile;
}
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296ec58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::StringW, bool, int32_t, ::System::Diagnostics::ProcessInfo*)>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x296ece0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Associated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Associated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296ed7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_Associated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ExitCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ExitCode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x296ed9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_ExitCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_HasExited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_HasExited)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x296f000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_HasExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::ProcessThreadTimes* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::GetProcessTimes)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x296fa68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Handle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x296fd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296cdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StartInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::ProcessStartInfo* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_StartInfo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x296fe24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_StartInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.set_StartInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(&::System::Diagnostics::Process::set_StartInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x296ff14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "set_StartInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_SynchronizingObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISynchronizeInvoke* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_SynchronizingObject)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x296ff74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_SynchronizingObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_TotalProcessorTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2970114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_StandardOutput)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2970140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_StandardOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_StandardError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29701dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_StandardError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ReleaseProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(&::System::Diagnostics::Process::ReleaseProcessHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2970278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ReleaseProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CompletionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Object*, bool)>(&::System::Diagnostics::Process::CompletionCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29702a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "CompletionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(bool)>(&::System::Diagnostics::Process::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29703cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Close)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x297041c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::__Process__State)>(&::System::Diagnostics::Process::EnsureState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x296eec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "EnsureState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__Process__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureWatchingForExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::EnsureWatchingForExit)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2970588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "EnsureWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)(int32_t)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29707bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetCurrentProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)()>(&::System::Diagnostics::Process::GetCurrentProcess)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296cd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetCurrentProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OnExited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::OnExited)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x29709dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "OnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t, bool)>(&::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x296f370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2970c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OpenProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::OpenProcessHandle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x296fd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "OpenProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Refresh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2970574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(&::System::Diagnostics::Process::SetProcessHandle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2970c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "SetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::SetProcessId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2970c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "SetProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2970c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StopWatchingForExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::StopWatchingForExit)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29702b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "StopWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::ToString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2972540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, int32_t)>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29726ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::intptr_t)>(&::System::Diagnostics::Process::ProcessName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x297273c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ProcessName_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(&::System::Diagnostics::Process::ProcessName_internal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2972740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ProcessName_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ProcessName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ProcessName)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x296cde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_ProcessName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcess_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(int32_t)>(&::System::Diagnostics::Process::GetProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2972820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)(int32_t, ::StringW)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2970804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.IsLocalMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Diagnostics::Process::IsLocalMachine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2972824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "IsLocalMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ShellExecuteEx_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(&::System::Diagnostics::Process::ShellExecuteEx_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29728b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ShellExecuteEx_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreateProcess_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(&::System::Diagnostics::Process::CreateProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29728b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "CreateProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithShellExecuteEx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(&::System::Diagnostics::Process::StartWithShellExecuteEx)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2970da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "StartWithShellExecuteEx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreatePipe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::cordl_internals::intptr_t>, ByRef<::cordl_internals::intptr_t>, bool)>(&::System::Diagnostics::Process::CreatePipe)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2972a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "CreatePipe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_IsWindows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Diagnostics::Process::get_IsWindows)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2972bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_IsWindows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithCreateProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(&::System::Diagnostics::Process::StartWithCreateProcess)> {
  constexpr static std::size_t size = 0x13d8;
  constexpr static std::size_t addrs = 0x2971168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "StartWithCreateProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.FillUserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::ProcessStartInfo*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(&::System::Diagnostics::Process::FillUserInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2972910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "FillUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.RaiseOnExited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::RaiseOnExited)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x296f988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "RaiseOnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::Process::__set_haveProcessId(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_haveProcessId()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_haveProcessId() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void System::Diagnostics::Process::__set_processId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::Process::__get_processId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& System::Diagnostics::Process::__get_processId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void System::Diagnostics::Process::__set_haveProcessHandle(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_haveProcessHandle()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_haveProcessHandle() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void System::Diagnostics::Process::__set_m_processHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  value)  {
::cordl_internals::setInstanceField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, 0x38>(this, std::forward<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(value));
}
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::__get_m_processHandle()  {
return ::cordl_internals::getInstanceField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> System::Diagnostics::Process::__get_m_processHandle() const {
return ::cordl_internals::getInstanceField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, 0x38>(this);
}
constexpr void System::Diagnostics::Process::__set_isRemoteMachine(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_isRemoteMachine()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_isRemoteMachine() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void System::Diagnostics::Process::__set_machineName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Diagnostics::Process::__get_machineName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& System::Diagnostics::Process::__get_machineName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void System::Diagnostics::Process::__set_m_processAccess(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::Process::__get_m_processAccess()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& System::Diagnostics::Process::__get_m_processAccess() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void System::Diagnostics::Process::__set_threads(::System::Diagnostics::ProcessThreadCollection*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::ProcessThreadCollection*, 0x58>(this, std::forward<::System::Diagnostics::ProcessThreadCollection*>(value));
}
constexpr ::System::Diagnostics::ProcessThreadCollection* System::Diagnostics::Process::__get_threads()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessThreadCollection*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessThreadCollection*> System::Diagnostics::Process::__get_threads() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessThreadCollection*, 0x58>(this);
}
constexpr void System::Diagnostics::Process::__set_modules(::System::Diagnostics::ProcessModuleCollection*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::ProcessModuleCollection*, 0x60>(this, std::forward<::System::Diagnostics::ProcessModuleCollection*>(value));
}
constexpr ::System::Diagnostics::ProcessModuleCollection* System::Diagnostics::Process::__get_modules()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessModuleCollection*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessModuleCollection*> System::Diagnostics::Process::__get_modules() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessModuleCollection*, 0x60>(this);
}
constexpr void System::Diagnostics::Process::__set_haveWorkingSetLimits(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_haveWorkingSetLimits()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_haveWorkingSetLimits() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void System::Diagnostics::Process::__set_havePriorityClass(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_havePriorityClass()  {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_havePriorityClass() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr void System::Diagnostics::Process::__set_startInfo(::System::Diagnostics::ProcessStartInfo*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::ProcessStartInfo*, 0x70>(this, std::forward<::System::Diagnostics::ProcessStartInfo*>(value));
}
constexpr ::System::Diagnostics::ProcessStartInfo* System::Diagnostics::Process::__get_startInfo()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessStartInfo*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessStartInfo*> System::Diagnostics::Process::__get_startInfo() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::ProcessStartInfo*, 0x70>(this);
}
constexpr void System::Diagnostics::Process::__set_watchForExit(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_watchForExit()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_watchForExit() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void System::Diagnostics::Process::__set_watchingForExit(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x79>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_watchingForExit()  {
return ::cordl_internals::getInstanceField<bool, 0x79>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_watchingForExit() const {
return ::cordl_internals::getInstanceField<bool, 0x79>(this);
}
constexpr void System::Diagnostics::Process::__set_onExited(::System::EventHandler*  value)  {
::cordl_internals::setInstanceField<::System::EventHandler*, 0x80>(this, std::forward<::System::EventHandler*>(value));
}
constexpr ::System::EventHandler* System::Diagnostics::Process::__get_onExited()  {
return ::cordl_internals::getInstanceField<::System::EventHandler*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> System::Diagnostics::Process::__get_onExited() const {
return ::cordl_internals::getInstanceField<::System::EventHandler*, 0x80>(this);
}
constexpr void System::Diagnostics::Process::__set_exited(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_exited()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_exited() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void System::Diagnostics::Process::__set_exitCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Diagnostics::Process::__get_exitCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this);
}
constexpr int32_t const& System::Diagnostics::Process::__get_exitCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this);
}
constexpr void System::Diagnostics::Process::__set_signaled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_signaled()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_signaled() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void System::Diagnostics::Process::__set_haveExitTime(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_haveExitTime()  {
return ::cordl_internals::getInstanceField<bool, 0x91>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_haveExitTime() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this);
}
constexpr void System::Diagnostics::Process::__set_raisedOnExited(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x92>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_raisedOnExited()  {
return ::cordl_internals::getInstanceField<bool, 0x92>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_raisedOnExited() const {
return ::cordl_internals::getInstanceField<bool, 0x92>(this);
}
constexpr void System::Diagnostics::Process::__set_registeredWaitHandle(::System::Threading::RegisteredWaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::RegisteredWaitHandle*, 0x98>(this, std::forward<::System::Threading::RegisteredWaitHandle*>(value));
}
constexpr ::System::Threading::RegisteredWaitHandle* System::Diagnostics::Process::__get_registeredWaitHandle()  {
return ::cordl_internals::getInstanceField<::System::Threading::RegisteredWaitHandle*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::RegisteredWaitHandle*> System::Diagnostics::Process::__get_registeredWaitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::RegisteredWaitHandle*, 0x98>(this);
}
constexpr void System::Diagnostics::Process::__set_waitHandle(::System::Threading::WaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitHandle*, 0xa0>(this, std::forward<::System::Threading::WaitHandle*>(value));
}
constexpr ::System::Threading::WaitHandle* System::Diagnostics::Process::__get_waitHandle()  {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> System::Diagnostics::Process::__get_waitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitHandle*, 0xa0>(this);
}
constexpr void System::Diagnostics::Process::__set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke*  value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::ISynchronizeInvoke*, 0xa8>(this, std::forward<::System::ComponentModel::ISynchronizeInvoke*>(value));
}
constexpr ::System::ComponentModel::ISynchronizeInvoke* System::Diagnostics::Process::__get_synchronizingObject()  {
return ::cordl_internals::getInstanceField<::System::ComponentModel::ISynchronizeInvoke*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ISynchronizeInvoke*> System::Diagnostics::Process::__get_synchronizingObject() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::ISynchronizeInvoke*, 0xa8>(this);
}
constexpr void System::Diagnostics::Process::__set_standardOutput(::System::IO::StreamReader*  value)  {
::cordl_internals::setInstanceField<::System::IO::StreamReader*, 0xb0>(this, std::forward<::System::IO::StreamReader*>(value));
}
constexpr ::System::IO::StreamReader* System::Diagnostics::Process::__get_standardOutput()  {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> System::Diagnostics::Process::__get_standardOutput() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0xb0>(this);
}
constexpr void System::Diagnostics::Process::__set_standardInput(::System::IO::StreamWriter*  value)  {
::cordl_internals::setInstanceField<::System::IO::StreamWriter*, 0xb8>(this, std::forward<::System::IO::StreamWriter*>(value));
}
constexpr ::System::IO::StreamWriter* System::Diagnostics::Process::__get_standardInput()  {
return ::cordl_internals::getInstanceField<::System::IO::StreamWriter*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamWriter*> System::Diagnostics::Process::__get_standardInput() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamWriter*, 0xb8>(this);
}
constexpr void System::Diagnostics::Process::__set_standardError(::System::IO::StreamReader*  value)  {
::cordl_internals::setInstanceField<::System::IO::StreamReader*, 0xc0>(this, std::forward<::System::IO::StreamReader*>(value));
}
constexpr ::System::IO::StreamReader* System::Diagnostics::Process::__get_standardError()  {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> System::Diagnostics::Process::__get_standardError() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0xc0>(this);
}
constexpr void System::Diagnostics::Process::__set_disposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::Process::__get_disposed()  {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr bool const& System::Diagnostics::Process::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr void System::Diagnostics::Process::__set_outputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xcc>(this, std::forward<::System::Diagnostics::__Process__StreamReadMode>(value));
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__get_outputStreamReadMode()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xcc>(this);
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__get_outputStreamReadMode() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xcc>(this);
}
constexpr void System::Diagnostics::Process::__set_errorStreamReadMode(::System::Diagnostics::__Process__StreamReadMode  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xd0>(this, std::forward<::System::Diagnostics::__Process__StreamReadMode>(value));
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__get_errorStreamReadMode()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xd0>(this);
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__get_errorStreamReadMode() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xd0>(this);
}
constexpr void System::Diagnostics::Process::__set_inputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xd4>(this, std::forward<::System::Diagnostics::__Process__StreamReadMode>(value));
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__get_inputStreamReadMode()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xd4>(this);
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__get_inputStreamReadMode() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::__Process__StreamReadMode, 0xd4>(this);
}
constexpr void System::Diagnostics::Process::__set_output(::System::Diagnostics::AsyncStreamReader*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::AsyncStreamReader*, 0xd8>(this, std::forward<::System::Diagnostics::AsyncStreamReader*>(value));
}
constexpr ::System::Diagnostics::AsyncStreamReader* System::Diagnostics::Process::__get_output()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::AsyncStreamReader*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> System::Diagnostics::Process::__get_output() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::AsyncStreamReader*, 0xd8>(this);
}
constexpr void System::Diagnostics::Process::__set_error(::System::Diagnostics::AsyncStreamReader*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::AsyncStreamReader*, 0xe0>(this, std::forward<::System::Diagnostics::AsyncStreamReader*>(value));
}
constexpr ::System::Diagnostics::AsyncStreamReader* System::Diagnostics::Process::__get_error()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::AsyncStreamReader*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> System::Diagnostics::Process::__get_error() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::AsyncStreamReader*, 0xe0>(this);
}
constexpr void System::Diagnostics::Process::__set_process_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xe8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Diagnostics::Process::__get_process_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0xe8>(this);
}
constexpr ::StringW const& System::Diagnostics::Process::__get_process_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0xe8>(this);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Process*>());
}
inline void System::Diagnostics::Process::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::StringW  machineName, bool  isRemoteMachine, int32_t  processId, ::System::Diagnostics::ProcessInfo*  processInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Process*>(machineName, isRemoteMachine, processId, processInfo));
}
inline void System::Diagnostics::Process::_ctor(::StringW  machineName, bool  isRemoteMachine, int32_t  processId, ::System::Diagnostics::ProcessInfo*  processInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, machineName, isRemoteMachine, processId, processInfo);
}
inline bool System::Diagnostics::Process::get_Associated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_Associated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_ExitCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_ExitCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Diagnostics::Process::get_HasExited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_HasExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Diagnostics::ProcessThreadTimes* System::Diagnostics::Process::GetProcessTimes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessThreadTimes*, false>(*this, ___internal_method);
}
inline ::cordl_internals::intptr_t System::Diagnostics::Process::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Diagnostics::ProcessStartInfo* System::Diagnostics::Process::get_StartInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_StartInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessStartInfo*, false>(*this, ___internal_method);
}
inline void System::Diagnostics::Process::set_StartInfo(::System::Diagnostics::ProcessStartInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "set_StartInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::ComponentModel::ISynchronizeInvoke* System::Diagnostics::Process::get_SynchronizingObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_SynchronizingObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISynchronizeInvoke*, false>(*this, ___internal_method);
}
inline ::System::TimeSpan System::Diagnostics::Process::get_TotalProcessorTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardOutput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_StandardOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*, false>(*this, ___internal_method);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_StandardError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*, false>(*this, ___internal_method);
}
inline void System::Diagnostics::Process::ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ReleaseProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, handle);
}
inline void System::Diagnostics::Process::CompletionCallback(::System::Object*  context, bool  wasSignaled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "CompletionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, wasSignaled);
}
inline void System::Diagnostics::Process::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void System::Diagnostics::Process::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Diagnostics::Process::EnsureState(::System::Diagnostics::__Process__State  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "EnsureState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__Process__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void System::Diagnostics::Process::EnsureWatchingForExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "EnsureWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t  processId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method, processId);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetCurrentProcess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetCurrentProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method);
}
inline void System::Diagnostics::Process::OnExited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "OnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t  access, bool  throwIfExited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(*this, ___internal_method, access, throwIfExited);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t  access)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(*this, ___internal_method, access);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::OpenProcessHandle(int32_t  access)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "OpenProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(*this, ___internal_method, access);
}
inline void System::Diagnostics::Process::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Diagnostics::Process::SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  processHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "SetProcessHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, processHandle);
}
inline void System::Diagnostics::Process::SetProcessId(int32_t  processId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "SetProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, processId);
}
inline bool System::Diagnostics::Process::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Diagnostics::Process::StopWatchingForExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "StopWatchingForExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW System::Diagnostics::Process::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  handle, int32_t  id)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Process*>(handle, id));
}
inline void System::Diagnostics::Process::_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  handle, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, handle, id);
}
inline ::StringW System::Diagnostics::Process::ProcessName_icall(::cordl_internals::intptr_t  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ProcessName_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ProcessName_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::get_ProcessName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_ProcessName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::cordl_internals::intptr_t System::Diagnostics::Process::GetProcess_internal(int32_t  pid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, pid);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t  processId, ::StringW  machineName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "GetProcessById",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method, processId, machineName);
}
inline bool System::Diagnostics::Process::IsLocalMachine(::StringW  machineName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "IsLocalMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, machineName);
}
inline bool System::Diagnostics::Process::ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo*  startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo>  procInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "ShellExecuteEx_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, procInfo);
}
inline bool System::Diagnostics::Process::CreateProcess_internal(::System::Diagnostics::ProcessStartInfo*  startInfo, ::cordl_internals::intptr_t  stdin, ::cordl_internals::intptr_t  stdout, ::cordl_internals::intptr_t  stderr, ByRef<::System::Diagnostics::__Process__ProcInfo>  procInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "CreateProcess_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, stdin, stdout, stderr, procInfo);
}
inline bool System::Diagnostics::Process::StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo*  startInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "StartWithShellExecuteEx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::CreatePipe(ByRef<::cordl_internals::intptr_t>  read, ByRef<::cordl_internals::intptr_t>  write, bool  writeDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "CreatePipe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, read, write, writeDirection);
}
inline bool System::Diagnostics::Process::get_IsWindows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "get_IsWindows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::Process::StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo*  startInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "StartWithCreateProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::FillUserInfo(::System::Diagnostics::ProcessStartInfo*  startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo>  procInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "FillUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, startInfo, procInfo);
}
inline void System::Diagnostics::Process::RaiseOnExited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                            "RaiseOnExited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
