#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__CharSet_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute.GetCustomAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (*)(::System::Reflection::RuntimeMethodInfo*)>(&::System::Runtime::InteropServices::DllImportAttribute::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x24d7310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            "GetCustomAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::RuntimeMethodInfo*)>(&::System::Runtime::InteropServices::DllImportAttribute::IsDefined)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d7554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::DllImportAttribute::*)(::StringW, ::StringW, ::System::Runtime::InteropServices::CharSet, bool, bool, bool, ::System::Runtime::InteropServices::CallingConvention, bool, bool)>(&::System::Runtime::InteropServices::DllImportAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24d74c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::CharSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::CallingConvention>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::DllImportAttribute::*)(::StringW)>(&::System::Runtime::InteropServices::DllImportAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d757c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::InteropServices::DllImportAttribute::*)()>(&::System::Runtime::InteropServices::DllImportAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d75a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set__val(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::InteropServices::DllImportAttribute::__get__val()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::InteropServices::DllImportAttribute::__get__val() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_EntryPoint(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::InteropServices::DllImportAttribute::__get_EntryPoint()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Runtime::InteropServices::DllImportAttribute::__get_EntryPoint() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_CharSet(::System::Runtime::InteropServices::CharSet  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::CharSet, 0x20>(this, std::forward<::System::Runtime::InteropServices::CharSet>(value));
}
constexpr ::System::Runtime::InteropServices::CharSet& System::Runtime::InteropServices::DllImportAttribute::__get_CharSet()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::CharSet, 0x20>(this);
}
constexpr ::System::Runtime::InteropServices::CharSet const& System::Runtime::InteropServices::DllImportAttribute::__get_CharSet() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::CharSet, 0x20>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_SetLastError(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__get_SetLastError()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__get_SetLastError() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_ExactSpelling(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__get_ExactSpelling()  {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__get_ExactSpelling() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_PreserveSig(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x26>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__get_PreserveSig()  {
return ::cordl_internals::getInstanceField<bool, 0x26>(this);
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__get_PreserveSig() const {
return ::cordl_internals::getInstanceField<bool, 0x26>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_CallingConvention(::System::Runtime::InteropServices::CallingConvention  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::CallingConvention, 0x28>(this, std::forward<::System::Runtime::InteropServices::CallingConvention>(value));
}
constexpr ::System::Runtime::InteropServices::CallingConvention& System::Runtime::InteropServices::DllImportAttribute::__get_CallingConvention()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::CallingConvention, 0x28>(this);
}
constexpr ::System::Runtime::InteropServices::CallingConvention const& System::Runtime::InteropServices::DllImportAttribute::__get_CallingConvention() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::CallingConvention, 0x28>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_BestFitMapping(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__get_BestFitMapping()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__get_BestFitMapping() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__set_ThrowOnUnmappableChar(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2d>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__get_ThrowOnUnmappableChar()  {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this);
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__get_ThrowOnUnmappableChar() const {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this);
}
inline ::System::Attribute* System::Runtime::InteropServices::DllImportAttribute::GetCustomAttribute(::System::Reflection::RuntimeMethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            "GetCustomAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*, false>(nullptr, ___internal_method, method);
}
inline bool System::Runtime::InteropServices::DllImportAttribute::IsDefined(::System::Reflection::RuntimeMethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, method);
}
inline ::System::Runtime::InteropServices::DllImportAttribute* System::Runtime::InteropServices::DllImportAttribute::New_ctor(::StringW  dllName, ::StringW  entryPoint, ::System::Runtime::InteropServices::CharSet  charSet, bool  exactSpelling, bool  setLastError, bool  preserveSig, ::System::Runtime::InteropServices::CallingConvention  callingConvention, bool  bestFitMapping, bool  throwOnUnmappableChar)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::DllImportAttribute*>(dllName, entryPoint, charSet, exactSpelling, setLastError, preserveSig, callingConvention, bestFitMapping, throwOnUnmappableChar));
}
inline void System::Runtime::InteropServices::DllImportAttribute::_ctor(::StringW  dllName, ::StringW  entryPoint, ::System::Runtime::InteropServices::CharSet  charSet, bool  exactSpelling, bool  setLastError, bool  preserveSig, ::System::Runtime::InteropServices::CallingConvention  callingConvention, bool  bestFitMapping, bool  throwOnUnmappableChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::CharSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::CallingConvention>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dllName, entryPoint, charSet, exactSpelling, setLastError, preserveSig, callingConvention, bestFitMapping, throwOnUnmappableChar);
}
inline ::System::Runtime::InteropServices::DllImportAttribute* System::Runtime::InteropServices::DllImportAttribute::New_ctor(::StringW  dllName)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::DllImportAttribute*>(dllName));
}
inline void System::Runtime::InteropServices::DllImportAttribute::_ctor(::StringW  dllName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dllName);
}
inline ::StringW System::Runtime::InteropServices::DllImportAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DllImportAttribute*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
