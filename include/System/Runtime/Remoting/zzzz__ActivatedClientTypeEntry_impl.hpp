#pragma once
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedClientTypeEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)(::StringW, ::StringW, ::StringW)>(&::System::Runtime::Remoting::ActivatedClientTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2484d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ApplicationUrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2484ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            "get_ApplicationUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ContextAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*,::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*> (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2484ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            "get_ContextAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.get_ObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2484edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedClientTypeEntry.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedClientTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2484ee4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::ActivatedClientTypeEntry::__set_applicationUrl(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::ActivatedClientTypeEntry::__get_applicationUrl()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::ActivatedClientTypeEntry::__get_applicationUrl() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void System::Runtime::Remoting::ActivatedClientTypeEntry::__set_obj_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x28>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Remoting::ActivatedClientTypeEntry::__get_obj_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Remoting::ActivatedClientTypeEntry::__get_obj_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x28>(this);
}
inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* System::Runtime::Remoting::ActivatedClientTypeEntry::New_ctor(::StringW  typeName, ::StringW  assemblyName, ::StringW  appUrl)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::ActivatedClientTypeEntry*>(typeName, assemblyName, appUrl));
}
inline void System::Runtime::Remoting::ActivatedClientTypeEntry::_ctor(::StringW  typeName, ::StringW  assemblyName, ::StringW  appUrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, typeName, assemblyName, appUrl);
}
inline ::StringW System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            "get_ApplicationUrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*,::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*> System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            "get_ContextAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*,::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*>, false>(*this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::ActivatedClientTypeEntry::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedClientTypeEntry*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
