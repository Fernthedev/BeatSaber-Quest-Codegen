#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__CachedProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::CachedProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::CachedProvider::*)(::Zenject::IProvider*)>(&::Zenject::CachedProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f052dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedProvider.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::CachedProvider::*)()>(&::Zenject::CachedProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f058b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedProvider.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::CachedProvider::*)()>(&::Zenject::CachedProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f058bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedProvider.get_NumInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::CachedProvider::*)()>(&::Zenject::CachedProvider::get_NumInstances)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f0564c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "get_NumInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedProvider.ClearCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::CachedProvider::*)()>(&::Zenject::CachedProvider::ClearCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f058e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "ClearCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedProvider.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::CachedProvider::*)(::Zenject::InjectContext*)>(&::Zenject::CachedProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f058ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::CachedProvider.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::CachedProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::CachedProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2f05304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IProvider"
constexpr  Zenject::CachedProvider::operator ::Zenject::IProvider*() noexcept {
return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
constexpr void Zenject::CachedProvider::__set__creator(::Zenject::IProvider*  value)  {
::cordl_internals::setInstanceField<::Zenject::IProvider*, 0x10>(this, std::forward<::Zenject::IProvider*>(value));
}
constexpr ::Zenject::IProvider* Zenject::CachedProvider::__get__creator()  {
return ::cordl_internals::getInstanceField<::Zenject::IProvider*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> Zenject::CachedProvider::__get__creator() const {
return ::cordl_internals::getInstanceField<::Zenject::IProvider*, 0x10>(this);
}
constexpr void Zenject::CachedProvider::__set__instances(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::System::Object*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* Zenject::CachedProvider::__get__instances()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> Zenject::CachedProvider::__get__instances() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x18>(this);
}
constexpr void Zenject::CachedProvider::__set__isCreatingInstance(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::CachedProvider::__get__isCreatingInstance()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& Zenject::CachedProvider::__get__isCreatingInstance() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
inline ::Zenject::CachedProvider* Zenject::CachedProvider::New_ctor(::Zenject::IProvider*  creator)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::CachedProvider*>(creator));
}
inline void Zenject::CachedProvider::_ctor(::Zenject::IProvider*  creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, creator);
}
inline bool Zenject::CachedProvider::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Zenject::CachedProvider::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t Zenject::CachedProvider::get_NumInstances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "get_NumInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Zenject::CachedProvider::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "ClearCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Type* Zenject::CachedProvider::GetInstanceType(::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method, context);
}
inline void Zenject::CachedProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::CachedProvider*>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, args, injectAction, buffer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
