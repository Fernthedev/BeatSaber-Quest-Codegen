#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IdBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::IdBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IdBinder::*)(::Zenject::BindInfo*)>(&::Zenject::IdBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2eda128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IdBinder.WithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IdBinder::*)(::System::Object*)>(&::Zenject::IdBinder::WithId)> {
  constexpr static std::size_t size = 0x101c;
  constexpr static std::size_t addrs = 0x2eda150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdBinder*>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::IdBinder::__set__bindInfo(::Zenject::BindInfo*  value)  {
::cordl_internals::setInstanceField<::Zenject::BindInfo*, 0x10>(this, std::forward<::Zenject::BindInfo*>(value));
}
constexpr ::Zenject::BindInfo* Zenject::IdBinder::__get__bindInfo()  {
return ::cordl_internals::getInstanceField<::Zenject::BindInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> Zenject::IdBinder::__get__bindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::BindInfo*, 0x10>(this);
}
inline ::Zenject::IdBinder* Zenject::IdBinder::New_ctor(::Zenject::BindInfo*  bindInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::IdBinder*>(bindInfo));
}
inline void Zenject::IdBinder::_ctor(::Zenject::BindInfo*  bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindInfo);
}
inline void Zenject::IdBinder::WithId(::System::Object*  identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IdBinder*>::get(),
                            "WithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, identifier);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
