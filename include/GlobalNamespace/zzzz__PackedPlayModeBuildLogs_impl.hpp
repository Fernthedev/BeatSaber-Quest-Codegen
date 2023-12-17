#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::*)(::UnityEngine::LogType, ::StringW)>(&::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a0eff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__set_Type(::UnityEngine::LogType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LogType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::LogType>(value));
}
constexpr ::UnityEngine::LogType& GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__get_Type()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LogType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::LogType const& GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__get_Type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LogType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__set_Message(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__get_Message()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__get_Message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::_ctor(::UnityEngine::LogType  type, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, message);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog::__PackedPlayModeBuildLogs__RuntimeBuildLog(::UnityEngine::LogType  Type, ::StringW  Message) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Type = Type;
this->Message = Message;
}
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs.get_RuntimeBuildLogs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* (::GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&::GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ef6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                            "get_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs.set_RuntimeBuildLogs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs::*)(::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*)>(&::GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ef74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                            "set_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&::GlobalNamespace::PackedPlayModeBuildLogs::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a0ef7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PackedPlayModeBuildLogs::__set_m_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* GlobalNamespace::PackedPlayModeBuildLogs::__get_m_RuntimeBuildLogs()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*> GlobalNamespace::PackedPlayModeBuildLogs::__get_m_RuntimeBuildLogs() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*, 0x10>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                            "get_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                            "set_RuntimeBuildLogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::PackedPlayModeBuildLogs* GlobalNamespace::PackedPlayModeBuildLogs::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PackedPlayModeBuildLogs*>());
}
inline void GlobalNamespace::PackedPlayModeBuildLogs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackedPlayModeBuildLogs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
