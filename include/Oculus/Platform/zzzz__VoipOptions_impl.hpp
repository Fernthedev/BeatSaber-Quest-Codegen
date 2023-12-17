#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__VoipOptions_def.hpp"
#include "Oculus/Platform/zzzz__VoipBitrate_def.hpp"
#include "Oculus/Platform/zzzz__VoipDtxState_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::VoipOptions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipOptions::*)()>(&::Oculus::Platform::VoipOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27020d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.SetBitrateForNewConnections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipOptions::*)(::Oculus::Platform::VoipBitrate)>(&::Oculus::Platform::VoipOptions::SetBitrateForNewConnections)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x270213c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            "SetBitrateForNewConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipBitrate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.SetCreateNewConnectionUseDtx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipOptions::*)(::Oculus::Platform::VoipDtxState)>(&::Oculus::Platform::VoipOptions::SetCreateNewConnectionUseDtx)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27021a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            "SetCreateNewConnectionUseDtx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipDtxState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.op_Explicit___cordl_internals__intptr_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::Oculus::Platform::VoipOptions*)>(&::Oculus::Platform::VoipOptions::op_Explicit___cordl_internals__intptr_t)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f89a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipOptions*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipOptions::*)()>(&::Oculus::Platform::VoipOptions::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x270220c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::VoipOptions::__set_Handle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& Oculus::Platform::VoipOptions::__get_Handle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
constexpr ::cordl_internals::intptr_t const& Oculus::Platform::VoipOptions::__get_Handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
inline ::Oculus::Platform::VoipOptions* Oculus::Platform::VoipOptions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::VoipOptions*>());
}
inline void Oculus::Platform::VoipOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Oculus::Platform::VoipOptions::SetBitrateForNewConnections(::Oculus::Platform::VoipBitrate  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            "SetBitrateForNewConnections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipBitrate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void Oculus::Platform::VoipOptions::SetCreateNewConnectionUseDtx(::Oculus::Platform::VoipDtxState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            "SetCreateNewConnectionUseDtx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipDtxState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::cordl_internals::intptr_t Oculus::Platform::VoipOptions::op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::VoipOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::VoipOptions*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::VoipOptions::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipOptions*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
