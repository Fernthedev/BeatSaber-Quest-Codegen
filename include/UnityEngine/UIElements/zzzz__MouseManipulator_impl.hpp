#pragma once
#include "UnityEngine/UIElements/zzzz__Manipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ManipulatorActivationFilter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator.get_activators
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* (::UnityEngine::UIElements::MouseManipulator::*)()>(&::UnityEngine::UIElements::MouseManipulator::get_activators)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dbaf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "get_activators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator.set_activators
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MouseManipulator::*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*)>(&::UnityEngine::UIElements::MouseManipulator::set_activators)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dbaf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "set_activators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MouseManipulator::*)()>(&::UnityEngine::UIElements::MouseManipulator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2dbaf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator.CanStartManipulation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::MouseManipulator::*)(::UnityEngine::UIElements::IMouseEvent*)>(&::UnityEngine::UIElements::MouseManipulator::CanStartManipulation)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2dbafc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "CanStartManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMouseEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator.CanStopManipulation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::MouseManipulator::*)(::UnityEngine::UIElements::IMouseEvent*)>(&::UnityEngine::UIElements::MouseManipulator::CanStopManipulation)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2dbb144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "CanStopManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMouseEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::MouseManipulator::__set__activators_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* UnityEngine::UIElements::MouseManipulator::__get__activators_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*> UnityEngine::UIElements::MouseManipulator::__get__activators_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::MouseManipulator::__set_m_currentActivator(::UnityEngine::UIElements::ManipulatorActivationFilter  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ManipulatorActivationFilter, 0x20>(this, std::forward<::UnityEngine::UIElements::ManipulatorActivationFilter>(value));
}
constexpr ::UnityEngine::UIElements::ManipulatorActivationFilter& UnityEngine::UIElements::MouseManipulator::__get_m_currentActivator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ManipulatorActivationFilter, 0x20>(this);
}
constexpr ::UnityEngine::UIElements::ManipulatorActivationFilter const& UnityEngine::UIElements::MouseManipulator::__get_m_currentActivator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ManipulatorActivationFilter, 0x20>(this);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* UnityEngine::UIElements::MouseManipulator::get_activators()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "get_activators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::MouseManipulator::set_activators(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "set_activators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::MouseManipulator* UnityEngine::UIElements::MouseManipulator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::MouseManipulator*>());
}
inline void UnityEngine::UIElements::MouseManipulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::MouseManipulator::CanStartManipulation(::UnityEngine::UIElements::IMouseEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "CanStartManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMouseEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, e);
}
inline bool UnityEngine::UIElements::MouseManipulator::CanStopManipulation(::UnityEngine::UIElements::IMouseEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseManipulator*>::get(),
                            "CanStopManipulation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMouseEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, e);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
