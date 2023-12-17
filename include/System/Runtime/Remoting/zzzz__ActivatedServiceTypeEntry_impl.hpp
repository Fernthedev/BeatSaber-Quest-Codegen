#pragma once
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ActivatedServiceTypeEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedServiceTypeEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::ActivatedServiceTypeEntry::*)(::StringW, ::StringW)>(&::System::Runtime::Remoting::ActivatedServiceTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2484ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedServiceTypeEntry.get_ObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2485020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ActivatedServiceTypeEntry.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(&::System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2485028;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::ActivatedServiceTypeEntry::__set_obj_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x20>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Remoting::ActivatedServiceTypeEntry::__get_obj_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Remoting::ActivatedServiceTypeEntry::__get_obj_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
inline ::System::Runtime::Remoting::ActivatedServiceTypeEntry* System::Runtime::Remoting::ActivatedServiceTypeEntry::New_ctor(::StringW  typeName, ::StringW  assemblyName)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>(typeName, assemblyName));
}
inline void System::Runtime::Remoting::ActivatedServiceTypeEntry::_ctor(::StringW  typeName, ::StringW  assemblyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, typeName, assemblyName);
}
inline ::System::Type* System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::ActivatedServiceTypeEntry*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
