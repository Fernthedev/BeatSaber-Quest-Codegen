#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__TypeInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::TypeInfo::*)(::System::Type*)>(&::System::Runtime::Remoting::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2492d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo.get_TypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::TypeInfo::*)()>(&::System::Runtime::Remoting::TypeInfo::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2495654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::TypeInfo.CanCastTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::TypeInfo::*)(::System::Type*, ::System::Object*)>(&::System::Runtime::Remoting::TypeInfo::CanCastTo)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x249565c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr  System::Runtime::Remoting::TypeInfo::operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept {
return static_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(static_cast<void*>(this));
}
constexpr void System::Runtime::Remoting::TypeInfo::__set_serverType(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::TypeInfo::__get_serverType()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::TypeInfo::__get_serverType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::Remoting::TypeInfo::__set_serverHierarchy(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Runtime::Remoting::TypeInfo::__get_serverHierarchy()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Runtime::Remoting::TypeInfo::__get_serverHierarchy() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void System::Runtime::Remoting::TypeInfo::__set_interfacesImplemented(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x20>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Runtime::Remoting::TypeInfo::__get_interfacesImplemented()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x20>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Runtime::Remoting::TypeInfo::__get_interfacesImplemented() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x20>(this);
}
inline ::System::Runtime::Remoting::TypeInfo* System::Runtime::Remoting::TypeInfo::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::TypeInfo*>(type));
}
inline void System::Runtime::Remoting::TypeInfo::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
inline ::StringW System::Runtime::Remoting::TypeInfo::get_TypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::TypeInfo::CanCastTo(::System::Type*  fromType, ::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::TypeInfo*>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, fromType, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
