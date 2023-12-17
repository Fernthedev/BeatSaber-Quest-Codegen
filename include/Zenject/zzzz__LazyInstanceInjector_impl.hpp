#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__LazyInstanceInjector_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Zenject::LazyInstanceInjector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::Zenject::DiContainer*)>(&::Zenject::LazyInstanceInjector::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2f04158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.get_Instances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::LazyInstanceInjector::*)()>(&::Zenject::LazyInstanceInjector::get_Instances)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f041e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "get_Instances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.AddInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Object*)>(&::Zenject::LazyInstanceInjector::AddInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f041f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "AddInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.AddInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::Zenject::LazyInstanceInjector::AddInstances)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f04248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "AddInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.LazyInject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Object*)>(&::Zenject::LazyInstanceInjector::LazyInject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f042a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "LazyInject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.LazyInjectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)()>(&::Zenject::LazyInstanceInjector::LazyInjectAll)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2f0431c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "LazyInjectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::LazyInstanceInjector::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x10>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* Zenject::LazyInstanceInjector::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::LazyInstanceInjector::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
constexpr void Zenject::LazyInstanceInjector::__set__instancesToInject(::System::Collections::Generic::HashSet_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::System::Object*>*, 0x18>(this, std::forward<::System::Collections::Generic::HashSet_1<::System::Object*>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* Zenject::LazyInstanceInjector::__get__instancesToInject()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Object*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Object*>*> Zenject::LazyInstanceInjector::__get__instancesToInject() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::System::Object*>*, 0x18>(this);
}
inline ::Zenject::LazyInstanceInjector* Zenject::LazyInstanceInjector::New_ctor(::Zenject::DiContainer*  container)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::LazyInstanceInjector*>(container));
}
inline void Zenject::LazyInstanceInjector::_ctor(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::LazyInstanceInjector::get_Instances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "get_Instances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*, false>(*this, ___internal_method);
}
inline void Zenject::LazyInstanceInjector::AddInstance(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "AddInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, instance);
}
inline void Zenject::LazyInstanceInjector::AddInstances(::System::Collections::Generic::IEnumerable_1<::System::Object*>*  instances)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "AddInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, instances);
}
inline void Zenject::LazyInstanceInjector::LazyInject(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "LazyInject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, instance);
}
inline void Zenject::LazyInstanceInjector::LazyInjectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(),
                            "LazyInjectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
