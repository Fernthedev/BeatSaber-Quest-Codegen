#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr void Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__set_subIdentifier(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr ::System::Object* Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__get_subIdentifier()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__get_subIdentifier() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr void Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__set_method(::System::Func_2<TObj,TContract>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TObj,TContract>*, 0x18>(this, std::forward<::System::Func_2<TObj,TContract>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr ::System::Func_2<TObj,TContract>* Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__get_method()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TObj,TContract>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj,TContract>*> Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__get_method() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TObj,TContract>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr void Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__set_source(::Zenject::InjectSources  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectSources, 0x20>(this, std::forward<::Zenject::InjectSources>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr ::Zenject::InjectSources& Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__get_source()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
constexpr ::Zenject::InjectSources const& Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__get_source() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>* Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
inline void Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
inline ::Zenject::IProvider* Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::_FromResolveGetter_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>*>::get(),
                            "<FromResolveGetter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(*this, ___internal_method, container);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
inline ::System::Object* Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TObj>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract,TObj>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::__set_method(::System::Func_2<::Zenject::DiContainer*,TContract>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::DiContainer*,TContract>*, 0x10>(this, std::forward<::System::Func_2<::Zenject::DiContainer*,TContract>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::System::Func_2<::Zenject::DiContainer*,TContract>* Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::__get_method()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::DiContainer*,TContract>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*,TContract>*> Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::__get_method() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::DiContainer*,TContract>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>* Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::IProvider* Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::_FromMethod_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>*>::get(),
                            "<FromMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(*this, ___internal_method, container);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Object* Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline void Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::setStaticF___9(::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*  value)  {
::cordl_internals::setStaticField<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get>(std::forward<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline ::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>* Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline void Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::setStaticF___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get>(std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::getStaticF___9__5_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline ::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>* Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline void Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline void Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::_FromFactory_b__5_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get(),
                            "<FromFactory>b__5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline ::System::Object* Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TSubFactory>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__5_1<TContract,TSubFactory>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__set___4__this(::Zenject::FactoryFromBinder_1<TContract>*  value)  {
::cordl_internals::setInstanceField<::Zenject::FactoryFromBinder_1<TContract>*, 0x10>(this, std::forward<::Zenject::FactoryFromBinder_1<TContract>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::FactoryFromBinder_1<TContract>* Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Zenject::FactoryFromBinder_1<TContract>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinder_1<TContract>*> Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Zenject::FactoryFromBinder_1<TContract>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__set_includeInactive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr bool& Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__get_includeInactive()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr bool const& Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__get_includeInactive() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__set___9__1(::System::Func_2<::UnityEngine::GameObject*,TContract>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::GameObject*,TContract>*, 0x20>(this, std::forward<::System::Func_2<::UnityEngine::GameObject*,TContract>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::System::Func_2<::UnityEngine::GameObject*,TContract>* Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__get___9__1()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::GameObject*,TContract>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::GameObject*,TContract>*> Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__get___9__1() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::GameObject*,TContract>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>* Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline TContract Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::_FromComponentInHierarchy_b__0(::Zenject::DiContainer*  _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>*>::get(),
                            "<FromComponentInHierarchy>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TContract, false>(*this, ___internal_method, _);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline TContract Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::_FromComponentInHierarchy_b__1(::UnityEngine::GameObject*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>*>::get(),
                            "<FromComponentInHierarchy>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TContract, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Object* Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::__FactoryFromBinder_1____c<TContract>::setStaticF___9(::Zenject::__FactoryFromBinder_1____c<TContract>*  value)  {
::cordl_internals::setStaticField<::Zenject::__FactoryFromBinder_1____c<TContract>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get>(std::forward<::Zenject::__FactoryFromBinder_1____c<TContract>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::__FactoryFromBinder_1____c<TContract>* Zenject::__FactoryFromBinder_1____c<TContract>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Zenject::__FactoryFromBinder_1____c<TContract>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::__FactoryFromBinder_1____c<TContract>::setStaticF___9__8_2(::System::Func_2<TContract,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TContract,bool>*, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get>(std::forward<::System::Func_2<TContract,bool>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Func_2<TContract,bool>* Zenject::__FactoryFromBinder_1____c<TContract>::getStaticF___9__8_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<TContract,bool>*, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::__FactoryFromBinder_1____c<TContract>* Zenject::__FactoryFromBinder_1____c<TContract>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder_1____c<TContract>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::__FactoryFromBinder_1____c<TContract>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline bool Zenject::__FactoryFromBinder_1____c<TContract>::_FromComponentInHierarchy_b__8_2(TContract  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get(),
                            "<FromComponentInHierarchy>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Object* Zenject::__FactoryFromBinder_1____c<TContract>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder_1____c<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_1____c<TContract>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::FactoryFromBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::New_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryFromBinder_1<TContract>*>(container, bindInfo, factoryBindInfo));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::FactoryFromBinder_1<TContract>::_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
template<typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Func_2<TObj,TContract>*  method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                        "FromResolveGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj,TContract>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(*this, ___internal_method, method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
template<typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Object*  subIdentifier, ::System::Func_2<TObj,TContract>*  method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                        "FromResolveGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj,TContract>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(*this, ___internal_method, subIdentifier, method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
template<typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Object*  subIdentifier, ::System::Func_2<TObj,TContract>*  method, ::Zenject::InjectSources  source)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                        "FromResolveGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj,TContract>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(*this, ___internal_method, subIdentifier, method, source);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromMethod(::System::Func_2<::Zenject::DiContainer*,TContract>*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                            "FromMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::DiContainer*,TContract>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(*this, ___internal_method, method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
template<typename TSubFactory>
inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromFactory()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                        "FromFactory",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::FactorySubContainerBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::FromSubContainerResolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                            "FromSubContainerResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_1<TContract>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::FactorySubContainerBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::FromSubContainerResolve(::System::Object*  subIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                            "FromSubContainerResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_1<TContract>*, false>(*this, ___internal_method, subIdentifier);
}
/// @param includeInactive: bool (default: true)
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromComponentInHierarchy(bool  includeInactive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                            "FromComponentInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(*this, ___internal_method, includeInactive);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
