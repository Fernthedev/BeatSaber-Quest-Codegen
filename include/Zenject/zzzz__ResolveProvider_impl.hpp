#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ResolveProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Zenject::ResolveProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ResolveProvider::*)(::System::Type*, ::Zenject::DiContainer*, ::System::Object*, bool, ::Zenject::InjectSources, bool)>(&::Zenject::ResolveProvider::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f09df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResolveProvider.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ResolveProvider::*)()>(&::Zenject::ResolveProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f09e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResolveProvider.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ResolveProvider::*)()>(&::Zenject::ResolveProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f09e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResolveProvider.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::ResolveProvider::*)(::Zenject::InjectContext*)>(&::Zenject::ResolveProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f09e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResolveProvider.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ResolveProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::ResolveProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2f09e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ResolveProvider.GetSubContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectContext* (::Zenject::ResolveProvider::*)(::Zenject::InjectContext*)>(&::Zenject::ResolveProvider::GetSubContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f0a008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "GetSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IProvider"
constexpr  Zenject::ResolveProvider::operator ::Zenject::IProvider*() noexcept {
return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
constexpr void Zenject::ResolveProvider::__set__identifier(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Zenject::ResolveProvider::__get__identifier()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::ResolveProvider::__get__identifier() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr void Zenject::ResolveProvider::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x18>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* Zenject::ResolveProvider::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::ResolveProvider::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
constexpr void Zenject::ResolveProvider::__set__contractType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x20>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* Zenject::ResolveProvider::__get__contractType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> Zenject::ResolveProvider::__get__contractType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
constexpr void Zenject::ResolveProvider::__set__isOptional(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::ResolveProvider::__get__isOptional()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Zenject::ResolveProvider::__get__isOptional() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void Zenject::ResolveProvider::__set__source(::Zenject::InjectSources  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectSources, 0x2c>(this, std::forward<::Zenject::InjectSources>(value));
}
constexpr ::Zenject::InjectSources& Zenject::ResolveProvider::__get__source()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x2c>(this);
}
constexpr ::Zenject::InjectSources const& Zenject::ResolveProvider::__get__source() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x2c>(this);
}
constexpr void Zenject::ResolveProvider::__set__matchAll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::ResolveProvider::__get__matchAll()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& Zenject::ResolveProvider::__get__matchAll() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline ::Zenject::ResolveProvider* Zenject::ResolveProvider::New_ctor(::System::Type*  contractType, ::Zenject::DiContainer*  container, ::System::Object*  identifier, bool  isOptional, ::Zenject::InjectSources  source, bool  matchAll)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ResolveProvider*>(contractType, container, identifier, isOptional, source, matchAll));
}
inline void Zenject::ResolveProvider::_ctor(::System::Type*  contractType, ::Zenject::DiContainer*  container, ::System::Object*  identifier, bool  isOptional, ::Zenject::InjectSources  source, bool  matchAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, contractType, container, identifier, isOptional, source, matchAll);
}
inline bool Zenject::ResolveProvider::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Zenject::ResolveProvider::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Type* Zenject::ResolveProvider::GetInstanceType(::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method, context);
}
inline void Zenject::ResolveProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::InjectContext* Zenject::ResolveProvider::GetSubContext(::Zenject::InjectContext*  parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ResolveProvider*>::get(),
                            "GetSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*, false>(*this, ___internal_method, parent);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
