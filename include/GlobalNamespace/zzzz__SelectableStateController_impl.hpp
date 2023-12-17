#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
constexpr void GlobalNamespace::__SelectableStateController__ViewState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SelectableStateController__ViewState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SelectableStateController__ViewState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectableStateController__ViewState::__SelectableStateController__ViewState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__SelectableStateController__ViewState  GlobalNamespace::__SelectableStateController__ViewState::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__SelectableStateController__ViewState  GlobalNamespace::__SelectableStateController__ViewState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__SelectableStateController__ViewState  GlobalNamespace::__SelectableStateController__ViewState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__SelectableStateController__ViewState  GlobalNamespace::__SelectableStateController__ViewState::Disabled{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__SelectableStateController__ViewState  GlobalNamespace::__SelectableStateController__ViewState::Selected{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__SelectableStateController__ViewState  GlobalNamespace::__SelectableStateController__ViewState::SelectedAndHighlighted{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.add_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*)>(&::GlobalNamespace::SelectableStateController::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x227cab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.remove_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*)>(&::GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x227cbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.get_tweeningManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tweening::TimeTweeningManager* (::GlobalNamespace::SelectableStateController::*)()>(&::GlobalNamespace::SelectableStateController::get_tweeningManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227f5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "get_tweeningManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.get_viewState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectableStateController__ViewState (::GlobalNamespace::SelectableStateController::*)()>(&::GlobalNamespace::SelectableStateController::get_viewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227cb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "get_viewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.get_currentViewState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectableStateController__ViewState (::GlobalNamespace::SelectableStateController::*)()>(&::GlobalNamespace::SelectableStateController::get_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227f5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "get_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.set_currentViewState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::GlobalNamespace::__SelectableStateController__ViewState)>(&::GlobalNamespace::SelectableStateController::set_currentViewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227f5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "set_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)(::GlobalNamespace::__SelectableStateController__ViewState, bool)>(&::GlobalNamespace::SelectableStateController::SetState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x227f5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController::*)()>(&::GlobalNamespace::SelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227f604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectableStateController::__set__tweeningManager(::Tweening::TimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager*, 0x18>(this, std::forward<::Tweening::TimeTweeningManager*>(value));
}
constexpr ::Tweening::TimeTweeningManager* GlobalNamespace::SelectableStateController::__get__tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> GlobalNamespace::SelectableStateController::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x18>(this);
}
constexpr void GlobalNamespace::SelectableStateController::__set_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*, 0x20>(this, std::forward<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>* GlobalNamespace::SelectableStateController::__get_stateDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*> GlobalNamespace::SelectableStateController::__get_stateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*, 0x20>(this);
}
constexpr void GlobalNamespace::SelectableStateController::__set__currentViewState_k__BackingField(::GlobalNamespace::__SelectableStateController__ViewState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SelectableStateController__ViewState, 0x28>(this, std::forward<::GlobalNamespace::__SelectableStateController__ViewState>(value));
}
constexpr ::GlobalNamespace::__SelectableStateController__ViewState& GlobalNamespace::SelectableStateController::__get__currentViewState_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectableStateController__ViewState, 0x28>(this);
}
constexpr ::GlobalNamespace::__SelectableStateController__ViewState const& GlobalNamespace::SelectableStateController::__get__currentViewState_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectableStateController__ViewState, 0x28>(this);
}
inline void GlobalNamespace::SelectableStateController::add_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectableStateController::remove_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Tweening::TimeTweeningManager* GlobalNamespace::SelectableStateController::get_tweeningManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "get_tweeningManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tweening::TimeTweeningManager*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::SelectableStateController::get_viewState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "get_viewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectableStateController__ViewState, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__SelectableStateController__ViewState GlobalNamespace::SelectableStateController::get_currentViewState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "get_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectableStateController__ViewState, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectableStateController::set_currentViewState(::GlobalNamespace::__SelectableStateController__ViewState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "set_currentViewState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectableStateController::SetState(::GlobalNamespace::__SelectableStateController__ViewState  state, bool  animated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectableStateController__ViewState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, animated);
}
inline ::GlobalNamespace::SelectableStateController* GlobalNamespace::SelectableStateController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectableStateController*>());
}
inline void GlobalNamespace::SelectableStateController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
