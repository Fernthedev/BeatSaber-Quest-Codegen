#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)(::System::Exception*)>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24da590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_BinaryStackTraceArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24da6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "get_BinaryStackTraceArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Capture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (*)(::System::Exception*)>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24da14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_SourceException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24da6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "get_SourceException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24da218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24da6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__set_m_Exception(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x10>(this, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* System::Runtime::ExceptionServices::ExceptionDispatchInfo::__get_m_Exception()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> System::Runtime::ExceptionServices::ExceptionDispatchInfo::__get_m_Exception() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x10>(this);
}
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__set_m_stackTrace(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::ExceptionServices::ExceptionDispatchInfo::__get_m_stackTrace()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::ExceptionServices::ExceptionDispatchInfo::__get_m_stackTrace() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Runtime::ExceptionServices::ExceptionDispatchInfo::New_ctor(::System::Exception*  exception)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(exception));
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, exception);
}
inline ::System::Object* System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "get_BinaryStackTraceArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture(::System::Exception*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(nullptr, ___internal_method, source);
}
inline ::System::Exception* System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "get_SourceException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(*this, ___internal_method);
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw(::System::Exception*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
