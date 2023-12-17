#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCache_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheValidator_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Cache::RequestCacheBinding::*)(::System::Net::Cache::RequestCache*, ::System::Net::Cache::RequestCacheValidator*, ::System::Net::Cache::RequestCachePolicy*)>(&::System::Net::Cache::RequestCacheBinding::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29f13f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheValidator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Cache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCache* (::System::Net::Cache::RequestCacheBinding::*)()>(&::System::Net::Cache::RequestCacheBinding::get_Cache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f146c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            "get_Cache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Validator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheValidator* (::System::Net::Cache::RequestCacheBinding::*)()>(&::System::Net::Cache::RequestCacheBinding::get_Validator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f1474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            "get_Validator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Policy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCachePolicy* (::System::Net::Cache::RequestCacheBinding::*)()>(&::System::Net::Cache::RequestCacheBinding::get_Policy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f147c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            "get_Policy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Cache::RequestCacheBinding::__set_m_RequestCache(::System::Net::Cache::RequestCache*  value)  {
::cordl_internals::setInstanceField<::System::Net::Cache::RequestCache*, 0x10>(this, std::forward<::System::Net::Cache::RequestCache*>(value));
}
constexpr ::System::Net::Cache::RequestCache* System::Net::Cache::RequestCacheBinding::__get_m_RequestCache()  {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCache*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCache*> System::Net::Cache::RequestCacheBinding::__get_m_RequestCache() const {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCache*, 0x10>(this);
}
constexpr void System::Net::Cache::RequestCacheBinding::__set_m_CacheValidator(::System::Net::Cache::RequestCacheValidator*  value)  {
::cordl_internals::setInstanceField<::System::Net::Cache::RequestCacheValidator*, 0x18>(this, std::forward<::System::Net::Cache::RequestCacheValidator*>(value));
}
constexpr ::System::Net::Cache::RequestCacheValidator* System::Net::Cache::RequestCacheBinding::__get_m_CacheValidator()  {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCacheValidator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCacheValidator*> System::Net::Cache::RequestCacheBinding::__get_m_CacheValidator() const {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCacheValidator*, 0x18>(this);
}
constexpr void System::Net::Cache::RequestCacheBinding::__set_m_Policy(::System::Net::Cache::RequestCachePolicy*  value)  {
::cordl_internals::setInstanceField<::System::Net::Cache::RequestCachePolicy*, 0x20>(this, std::forward<::System::Net::Cache::RequestCachePolicy*>(value));
}
constexpr ::System::Net::Cache::RequestCachePolicy* System::Net::Cache::RequestCacheBinding::__get_m_Policy()  {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCachePolicy*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> System::Net::Cache::RequestCacheBinding::__get_m_Policy() const {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCachePolicy*, 0x20>(this);
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheBinding::New_ctor(::System::Net::Cache::RequestCache*  requestCache, ::System::Net::Cache::RequestCacheValidator*  cacheValidator, ::System::Net::Cache::RequestCachePolicy*  policy)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Cache::RequestCacheBinding*>(requestCache, cacheValidator, policy));
}
inline void System::Net::Cache::RequestCacheBinding::_ctor(::System::Net::Cache::RequestCache*  requestCache, ::System::Net::Cache::RequestCacheValidator*  cacheValidator, ::System::Net::Cache::RequestCachePolicy*  policy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheValidator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, requestCache, cacheValidator, policy);
}
inline ::System::Net::Cache::RequestCache* System::Net::Cache::RequestCacheBinding::get_Cache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            "get_Cache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCache*, false>(*this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheValidator* System::Net::Cache::RequestCacheBinding::get_Validator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            "get_Validator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheValidator*, false>(*this, ___internal_method);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::Cache::RequestCacheBinding::get_Policy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                            "get_Policy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
