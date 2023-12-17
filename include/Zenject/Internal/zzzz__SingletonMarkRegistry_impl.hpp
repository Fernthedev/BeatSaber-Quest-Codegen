#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__SingletonMarkRegistry_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.MarkNonSingleton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&::Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f214b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            "MarkNonSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.MarkSingleton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&::Zenject::Internal::SingletonMarkRegistry::MarkSingleton)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2f2155c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            "MarkSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry.Unmark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&::Zenject::Internal::SingletonMarkRegistry::Unmark)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f21630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            "Unmark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::SingletonMarkRegistry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::SingletonMarkRegistry::*)()>(&::Zenject::Internal::SingletonMarkRegistry::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f2169c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::SingletonMarkRegistry::__set__boundSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::System::Type*>*, 0x10>(this, std::forward<::System::Collections::Generic::HashSet_1<::System::Type*>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* Zenject::Internal::SingletonMarkRegistry::__get__boundSingletons()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Type*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> Zenject::Internal::SingletonMarkRegistry::__get__boundSingletons() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Type*>*, 0x10>(this);
}
constexpr void Zenject::Internal::SingletonMarkRegistry::__set__boundNonSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::System::Type*>*, 0x18>(this, std::forward<::System::Collections::Generic::HashSet_1<::System::Type*>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* Zenject::Internal::SingletonMarkRegistry::__get__boundNonSingletons()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Type*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> Zenject::Internal::SingletonMarkRegistry::__get__boundNonSingletons() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Type*>*, 0x18>(this);
}
inline void Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            "MarkNonSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
inline void Zenject::Internal::SingletonMarkRegistry::MarkSingleton(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            "MarkSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
inline void Zenject::Internal::SingletonMarkRegistry::Unmark(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            "Unmark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
inline ::Zenject::Internal::SingletonMarkRegistry* Zenject::Internal::SingletonMarkRegistry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::SingletonMarkRegistry*>());
}
inline void Zenject::Internal::SingletonMarkRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::SingletonMarkRegistry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
