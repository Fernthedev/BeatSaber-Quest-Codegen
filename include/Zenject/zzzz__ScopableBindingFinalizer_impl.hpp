#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__ScopableBindingFinalizer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__ScopableBindingFinalizer_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::*)()>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee629c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0._FinalizeBindingConcrete_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::*)(::Zenject::DiContainer*, ::System::Type*)>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ee62ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            "<FinalizeBindingConcrete>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ee62e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ee633c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__set___4__this(::Zenject::ScopableBindingFinalizer*  value)  {
::cordl_internals::setInstanceField<::Zenject::ScopableBindingFinalizer*, 0x10>(this, std::forward<::Zenject::ScopableBindingFinalizer*>(value));
}
constexpr ::Zenject::ScopableBindingFinalizer* Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Zenject::ScopableBindingFinalizer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ScopableBindingFinalizer*> Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Zenject::ScopableBindingFinalizer*, 0x10>(this);
}
constexpr void Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__set_container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x18>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__get_container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__get_container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
inline ::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0* Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>());
}
inline void Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::_FinalizeBindingConcrete_b__0(::Zenject::DiContainer*  _, ::System::Type*  concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            "<FinalizeBindingConcrete>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(*this, ___internal_method, _, concreteType);
}
inline ::System::Object* Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::*)()>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ee62a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0._FinalizeBindingSelf_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::*)(::Zenject::DiContainer*, ::System::Type*)>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ee64fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            "<FinalizeBindingSelf>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ee6530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ee658c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__set___4__this(::Zenject::ScopableBindingFinalizer*  value)  {
::cordl_internals::setInstanceField<::Zenject::ScopableBindingFinalizer*, 0x10>(this, std::forward<::Zenject::ScopableBindingFinalizer*>(value));
}
constexpr ::Zenject::ScopableBindingFinalizer* Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Zenject::ScopableBindingFinalizer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ScopableBindingFinalizer*> Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Zenject::ScopableBindingFinalizer*, 0x10>(this);
}
constexpr void Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__set_container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x18>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__get_container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__get_container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
inline ::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0* Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>());
}
inline void Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::_FinalizeBindingSelf_b__0(::Zenject::DiContainer*  _, ::System::Type*  contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            "<FinalizeBindingSelf>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(*this, ___internal_method, _, contractType);
}
inline ::System::Object* Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(::Zenject::BindInfo*, ::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*)>(&::Zenject::ScopableBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ee5f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer.OnFinalizeBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::ScopableBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ee5fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer.FinalizeBindingConcrete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Zenject::ScopableBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2ee6158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                            "FinalizeBindingConcrete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScopableBindingFinalizer.FinalizeBindingSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ScopableBindingFinalizer::*)(::Zenject::DiContainer*)>(&::Zenject::ScopableBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2ee6048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                            "FinalizeBindingSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::ScopableBindingFinalizer::__set__providerFactory(::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*  value)  {
::cordl_internals::setInstanceField<::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*, 0x18>(this, std::forward<::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*>(value));
}
constexpr ::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>* Zenject::ScopableBindingFinalizer::__get__providerFactory()  {
return ::cordl_internals::getInstanceField<::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*> Zenject::ScopableBindingFinalizer::__get__providerFactory() const {
return ::cordl_internals::getInstanceField<::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*, 0x18>(this);
}
inline ::Zenject::ScopableBindingFinalizer* Zenject::ScopableBindingFinalizer::New_ctor(::Zenject::BindInfo*  bindInfo, ::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*  providerFactory)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ScopableBindingFinalizer*>(bindInfo, providerFactory));
}
inline void Zenject::ScopableBindingFinalizer::_ctor(::Zenject::BindInfo*  bindInfo, ::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*  providerFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::Zenject::DiContainer*,::System::Type*,::Zenject::IProvider*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindInfo, providerFactory);
}
inline void Zenject::ScopableBindingFinalizer::OnFinalizeBinding(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                            "OnFinalizeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline void Zenject::ScopableBindingFinalizer::FinalizeBindingConcrete(::Zenject::DiContainer*  container, ::System::Collections::Generic::List_1<::System::Type*>*  concreteTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                            "FinalizeBindingConcrete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, concreteTypes);
}
inline void Zenject::ScopableBindingFinalizer::FinalizeBindingSelf(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScopableBindingFinalizer*>::get(),
                            "FinalizeBindingSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
