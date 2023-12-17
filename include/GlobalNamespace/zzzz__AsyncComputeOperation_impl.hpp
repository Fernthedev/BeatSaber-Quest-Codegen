#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation.get_elapsedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::AsyncComputeOperation::*)()>(&::GlobalNamespace::AsyncComputeOperation::get_elapsedTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe292b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                            "get_elapsedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation.get_hasTimedOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AsyncComputeOperation::*)()>(&::GlobalNamespace::AsyncComputeOperation::get_hasTimedOut)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe2933c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                            "get_hasTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncComputeOperation::*)(int32_t)>(&::GlobalNamespace::AsyncComputeOperation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe2936c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeOperation.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncComputeOperation::*)(bool)>(&::GlobalNamespace::AsyncComputeOperation::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AsyncComputeOperation::__set__timeoutMs(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::AsyncComputeOperation::__get__timeoutMs()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::AsyncComputeOperation::__get__timeoutMs() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::AsyncComputeOperation::__set__stopwatch(::System::Diagnostics::Stopwatch*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::Stopwatch*, 0x18>(this, std::forward<::System::Diagnostics::Stopwatch*>(value));
}
constexpr ::System::Diagnostics::Stopwatch* GlobalNamespace::AsyncComputeOperation::__get__stopwatch()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Stopwatch*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> GlobalNamespace::AsyncComputeOperation::__get__stopwatch() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Stopwatch*, 0x18>(this);
}
inline double_t GlobalNamespace::AsyncComputeOperation::get_elapsedTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                            "get_elapsedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::AsyncComputeOperation::get_hasTimedOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                            "get_hasTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::AsyncComputeOperation* GlobalNamespace::AsyncComputeOperation::New_ctor(int32_t  timeoutMs)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AsyncComputeOperation*>(timeoutMs));
}
inline void GlobalNamespace::AsyncComputeOperation::_ctor(int32_t  timeoutMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timeoutMs);
}
inline void GlobalNamespace::AsyncComputeOperation::Execute(bool  disposed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation*>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposed);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
