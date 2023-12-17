#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UnhandledExceptionEventArgs::*)(::System::Object*, bool)>(&::System::UnhandledExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25cdf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_ExceptionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::UnhandledExceptionEventArgs::*)()>(&::System::UnhandledExceptionEventArgs::get_ExceptionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cdfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                            "get_ExceptionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_IsTerminating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UnhandledExceptionEventArgs::*)()>(&::System::UnhandledExceptionEventArgs::get_IsTerminating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cdfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                            "get_IsTerminating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::UnhandledExceptionEventArgs::__set__exception(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::UnhandledExceptionEventArgs::__get__exception()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::UnhandledExceptionEventArgs::__get__exception() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr void System::UnhandledExceptionEventArgs::__set__isTerminating(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& System::UnhandledExceptionEventArgs::__get__isTerminating()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& System::UnhandledExceptionEventArgs::__get__isTerminating() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::System::UnhandledExceptionEventArgs* System::UnhandledExceptionEventArgs::New_ctor(::System::Object*  exception, bool  isTerminating)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::UnhandledExceptionEventArgs*>(exception, isTerminating));
}
inline void System::UnhandledExceptionEventArgs::_ctor(::System::Object*  exception, bool  isTerminating)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, exception, isTerminating);
}
inline ::System::Object* System::UnhandledExceptionEventArgs::get_ExceptionObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                            "get_ExceptionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline bool System::UnhandledExceptionEventArgs::get_IsTerminating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                            "get_IsTerminating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
