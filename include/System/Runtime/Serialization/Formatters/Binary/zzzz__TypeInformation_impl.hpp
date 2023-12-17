#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__TypeInformation_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_FullTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_FullTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24cb3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            "get_FullTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_AssemblyString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_AssemblyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24cb3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            "get_AssemblyString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_HasTypeForwardedFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_HasTypeForwardedFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24cb3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            "get_HasTypeForwardedFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)(::StringW, ::StringW, bool)>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24cb3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::TypeInformation::__set_fullTypeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_fullTypeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_fullTypeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::TypeInformation::__set_assemblyString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_assemblyString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_assemblyString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::TypeInformation::__set_hasTypeForwardedFrom(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_hasTypeForwardedFrom()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_hasTypeForwardedFrom() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_FullTypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            "get_FullTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_AssemblyString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            "get_AssemblyString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_HasTypeForwardedFrom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            "get_HasTypeForwardedFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::TypeInformation* System::Runtime::Serialization::Formatters::Binary::TypeInformation::New_ctor(::StringW  fullTypeName, ::StringW  assemblyString, bool  hasTypeForwardedFrom)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>(fullTypeName, assemblyString, hasTypeForwardedFrom));
}
inline void System::Runtime::Serialization::Formatters::Binary::TypeInformation::_ctor(::StringW  fullTypeName, ::StringW  assemblyString, bool  hasTypeForwardedFrom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fullTypeName, assemblyString, hasTypeForwardedFrom);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
