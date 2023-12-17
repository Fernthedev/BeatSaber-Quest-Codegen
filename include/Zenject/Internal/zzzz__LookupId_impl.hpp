#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__LookupId_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::LookupId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::LookupId::*)()>(&::Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f213bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::LookupId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::LookupId::*)(::Zenject::IProvider*, ::Zenject::BindingId)>(&::Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f213c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::LookupId.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::Internal::LookupId::*)()>(&::Zenject::Internal::LookupId::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2f21460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::LookupId::__set_Provider(::Zenject::IProvider*  value)  {
::cordl_internals::setInstanceField<::Zenject::IProvider*, 0x10>(this, std::forward<::Zenject::IProvider*>(value));
}
constexpr ::Zenject::IProvider* Zenject::Internal::LookupId::__get_Provider()  {
return ::cordl_internals::getInstanceField<::Zenject::IProvider*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> Zenject::Internal::LookupId::__get_Provider() const {
return ::cordl_internals::getInstanceField<::Zenject::IProvider*, 0x10>(this);
}
constexpr void Zenject::Internal::LookupId::__set_BindingId(::Zenject::BindingId  value)  {
::cordl_internals::setInstanceField<::Zenject::BindingId, 0x18>(this, std::forward<::Zenject::BindingId>(value));
}
constexpr ::Zenject::BindingId& Zenject::Internal::LookupId::__get_BindingId()  {
return ::cordl_internals::getInstanceField<::Zenject::BindingId, 0x18>(this);
}
constexpr ::Zenject::BindingId const& Zenject::Internal::LookupId::__get_BindingId() const {
return ::cordl_internals::getInstanceField<::Zenject::BindingId, 0x18>(this);
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::LookupId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::LookupId*>());
}
inline void Zenject::Internal::LookupId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::LookupId::New_ctor(::Zenject::IProvider*  provider, ::Zenject::BindingId  bindingId)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::LookupId*>(provider, bindingId));
}
inline void Zenject::Internal::LookupId::_ctor(::Zenject::IProvider*  provider, ::Zenject::BindingId  bindingId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, provider, bindingId);
}
inline int32_t Zenject::Internal::LookupId::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
