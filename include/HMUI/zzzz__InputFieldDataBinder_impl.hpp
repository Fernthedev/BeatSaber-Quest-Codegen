#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__InputFieldDataBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "HMUI/zzzz__InputFieldDataBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "GlobalNamespace/zzzz__IObservableChange_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
//  Writing Method size for method: ::HMUI::InputFieldDataBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldDataBinder::*)()>(&::HMUI::InputFieldDataBinder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21188d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldDataBinder.ClearBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldDataBinder::*)()>(&::HMUI::InputFieldDataBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2118954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::InputFieldDataBinder::__set__bindings(::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>* HMUI::InputFieldDataBinder::__get__bindings()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*> HMUI::InputFieldDataBinder::__get__bindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,::GlobalNamespace::IObservableChange*,::UnityEngine::Events::UnityAction_1<::StringW>*,::System::Action*>*>*, 0x10>(this);
}
inline ::HMUI::InputFieldDataBinder* HMUI::InputFieldDataBinder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::InputFieldDataBinder*>());
}
inline void HMUI::InputFieldDataBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename T0,typename T1>
inline void HMUI::InputFieldDataBinder::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,T0,::System::Func_2<::StringW,T1>*,::System::Func_2<T1,::StringW>*>*>*  bindingData)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(),
                        "AddBindings",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_4<::UnityEngine::UI::InputField*,T0,::System::Func_2<::StringW,T1>*,::System::Func_2<T1,::StringW>*>*>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindingData);
}
template<typename T>
inline void HMUI::InputFieldDataBinder::AddStringBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::InputField*,T>*>*  bindingData)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(),
                        "AddStringBindings",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::InputField*,T>*>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindingData);
}
inline void HMUI::InputFieldDataBinder::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_toValueConvertor(::System::Func_2<::StringW,T1>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::StringW,T1>*, 0x10>(this, std::forward<::System::Func_2<::StringW,T1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::System::Func_2<::StringW,T1>* HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_toValueConvertor()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::StringW,T1>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW,T1>*> HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_toValueConvertor() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::StringW,T1>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_valueItem(T0  value)  {
::cordl_internals::setInstanceField<T0, 0x18>(this, std::forward<T0>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr T0& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_valueItem()  {
return ::cordl_internals::getInstanceField<T0, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr T0 const& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_valueItem() const {
return ::cordl_internals::getInstanceField<T0, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_inputField(::UnityEngine::UI::InputField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::InputField*, 0x20>(this, std::forward<::UnityEngine::UI::InputField*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::UnityEngine::UI::InputField* HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_inputField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_inputField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_toStringConvertor(::System::Func_2<T1,::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<T1,::StringW>*, 0x28>(this, std::forward<::System::Func_2<T1,::StringW>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::System::Func_2<T1,::StringW>* HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_toStringConvertor()  {
return ::cordl_internals::getInstanceField<::System::Func_2<T1,::StringW>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T1,::StringW>*> HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_toStringConvertor() const {
return ::cordl_internals::getInstanceField<::System::Func_2<T1,::StringW>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline ::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>* HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::_AddBindings_b__0(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>*>::get(),
                            "<AddBindings>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::_AddBindings_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>*>::get(),
                            "<AddBindings>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::__InputFieldDataBinder____c__3_1<T>::setStaticF___9(::HMUI::__InputFieldDataBinder____c__3_1<T>*  value)  {
::cordl_internals::setStaticField<::HMUI::__InputFieldDataBinder____c__3_1<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>(std::forward<::HMUI::__InputFieldDataBinder____c__3_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::HMUI::__InputFieldDataBinder____c__3_1<T>* HMUI::__InputFieldDataBinder____c__3_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::HMUI::__InputFieldDataBinder____c__3_1<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::__InputFieldDataBinder____c__3_1<T>::setStaticF___9__3_0(::System::Func_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>(std::forward<::System::Func_2<::StringW,::StringW>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Func_2<::StringW,::StringW>* HMUI::__InputFieldDataBinder____c__3_1<T>::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::HMUI::__InputFieldDataBinder____c__3_1<T>* HMUI::__InputFieldDataBinder____c__3_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__InputFieldDataBinder____c__3_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::__InputFieldDataBinder____c__3_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW HMUI::__InputFieldDataBinder____c__3_1<T>::_AddStringBindings_b__3_0(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get(),
                            "<AddStringBindings>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
