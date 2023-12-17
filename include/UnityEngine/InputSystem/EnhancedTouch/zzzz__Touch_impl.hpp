#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__set_touchscreens(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_touchscreens()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> const& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_touchscreens() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__set_historyLengthPerFinger(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_historyLengthPerFinger()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_historyLengthPerFinger() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__set_onFingerDown(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_onFingerDown()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_onFingerDown() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__set_onFingerMove(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_onFingerMove()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_onFingerMove() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__set_onFingerUp(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_onFingerUp()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_onFingerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__set_playerState(::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState, 0x110>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>(value));
}
constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_playerState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState, 0x110>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState const& UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__get_playerState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState, 0x110>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFingerDown", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerState", ty: "::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState::__Touch__GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  touchscreens, int32_t  historyLengthPerFinger, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerDown, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerMove, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerUp, ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState  playerState) noexcept : ::bs_hook::ValueTypeWrapper<0x150>() {this->touchscreens = touchscreens;
this->historyLengthPerFinger = historyLengthPerFinger;
this->onFingerDown = onFingerDown;
this->onFingerMove = onFingerMove;
this->onFingerUp = onFingerUp;
this->playerState = playerState;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState.AddFingers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::AddFingers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2ae3040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "AddFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState.RemoveFingers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::RemoveFingers)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2ae323c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "RemoveFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::Destroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ae369c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState.UpdateActiveFingers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::UpdateActiveFingers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ae2550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "UpdateActiveFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState.UpdateActiveTouches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::UpdateActiveTouches)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x2ae1e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "UpdateActiveTouches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_updateMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_updateMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_fingers(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_fingers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_fingers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_activeFingers(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeFingers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeFingers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_activeTouches(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeTouches()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeTouches() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_activeFingerCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeFingerCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeFingerCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_activeTouchCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeTouchCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeTouchCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_totalFingerCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_totalFingerCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_totalFingerCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_lastId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_lastId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_lastId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_haveBuiltActiveTouches(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_haveBuiltActiveTouches()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_haveBuiltActiveTouches() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_haveActiveTouchesNeedingRefreshNextUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_haveActiveTouchesNeedingRefreshNextUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_haveActiveTouchesNeedingRefreshNextUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__set_activeTouchState(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeTouchState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*> UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__get_activeTouchState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::AddFingers(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "AddFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::RemoveFingers(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "RemoveFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::UpdateActiveFingers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "UpdateActiveFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::UpdateActiveTouches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState>::get(),
                            "UpdateActiveTouches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: Some("{}") }, CppParam { name: "fingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "activeFingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "activeFingerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalFingerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveBuiltActiveTouches", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeTouchState", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState::__Touch__FingerAndTouchState(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  fingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  activeFingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  activeTouches, int32_t  activeFingerCount, int32_t  activeTouchCount, int32_t  totalFingerCount, uint32_t  lastId, bool  haveBuiltActiveTouches, bool  haveActiveTouchesNeedingRefreshNextUpdate, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  activeTouchState) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->updateMask = updateMask;
this->fingers = fingers;
this->activeFingers = activeFingers;
this->activeTouches = activeTouches;
this->activeFingerCount = activeFingerCount;
this->activeTouchCount = activeTouchCount;
this->totalFingerCount = totalFingerCount;
this->lastId = lastId;
this->haveBuiltActiveTouches = haveBuiltActiveTouches;
this->haveActiveTouchesNeedingRefreshNextUpdate = haveActiveTouchesNeedingRefreshNextUpdate;
this->activeTouchState = activeTouchState;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState::__set_accumulatedDelta(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState::__get_accumulatedDelta()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState::__get_accumulatedDelta() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState::__set_uniqueId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState::__get_uniqueId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState::__get_uniqueId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState::__Touch__ExtraDataPerTouchState(::UnityEngine::Vector2  accumulatedDelta, uint32_t  uniqueId) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->accumulatedDelta = accumulatedDelta;
this->uniqueId = uniqueId;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch____c::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae378c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c._SaveAndResetState_b__78_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch____c::*)(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>)>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch____c::_SaveAndResetState_b__78_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ae3794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get(),
                            "<SaveAndResetState>b__78_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c._SaveAndResetState_b__78_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::__Touch____c::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::__Touch____c::_SaveAndResetState_b__78_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae3818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get(),
                            "<SaveAndResetState>b__78_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch____c::setStaticF___9(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get>(std::forward<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>(value));
}
inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* UnityEngine::InputSystem::EnhancedTouch::__Touch____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch____c::setStaticF___9__78_0(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*, "<>9__78_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get>(std::forward<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* UnityEngine::InputSystem::EnhancedTouch::__Touch____c::getStaticF___9__78_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*, "<>9__78_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch____c::setStaticF___9__78_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__78_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::EnhancedTouch::__Touch____c::getStaticF___9__78_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__78_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get>();
}
inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* UnityEngine::InputSystem::EnhancedTouch::__Touch____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>());
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch____c::_SaveAndResetState_b__78_0(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get(),
                            "<SaveAndResetState>b__78_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::EnhancedTouch::__Touch____c::_SaveAndResetState_b__78_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*>::get(),
                            "<SaveAndResetState>b__78_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_valid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_valid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ae0c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_finger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Finger* (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_finger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae1ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_finger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_phase)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_began
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_began)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae1b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_began",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_inProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_inProgress)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ae1b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_inProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_ended
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_ended)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ae1b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_ended",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_touchId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_touchId)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_touchId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_pressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_pressure)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_radius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_radius)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_startTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_time)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ae1bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Touchscreen* (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screen)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae1c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_screen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screenPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screenPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae0d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_screenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_startScreenPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_startScreenPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_startScreenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_tapCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_tapCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_tapCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_isTap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_isTap)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ae1c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_isTap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_isInProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_isInProgress)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ae0d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_isInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_updateStepCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_updateStepCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae0dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_updateStepCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_uniqueId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_uniqueId)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ae1a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_uniqueId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_state)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ae1ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_extraData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState> (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_extraData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ae1cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_extraData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_history
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_history)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ae1d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_history",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_activeTouches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeTouches)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ae1dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_activeTouches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_fingers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_fingers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ae2420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_fingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_activeFingers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeFingers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ae24b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_activeFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_screens
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_screens)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae2644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_screens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerDown)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ae26d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "add_onFingerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerDown)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ae2798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "remove_onFingerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerUp)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ae2860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "add_onFingerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerUp)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ae2928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "remove_onFingerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.add_onFingerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerMove)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ae29f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "add_onFingerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.remove_onFingerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerMove)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ae2ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "remove_onFingerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.get_maxHistoryLengthPerFinger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::get_maxHistoryLengthPerFinger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ae1168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_maxHistoryLengthPerFinger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ae0d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Finger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::ToString)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2ae2b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::UnityEngine::InputSystem::EnhancedTouch::Touch)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ae2e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)(::System::Object*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ae2eb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Touch::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ae2f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.AddTouchscreen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::AddTouchscreen)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae2fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "AddTouchscreen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.RemoveTouchscreen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::RemoveTouchscreen)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2ae3158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "RemoveTouchscreen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.BeginUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::BeginUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ae3380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "BeginUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.CreateGlobalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::CreateGlobalState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ae33f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "CreateGlobalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Touch.SaveAndResetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Touch::SaveAndResetState)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2ae3420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr  UnityEngine::InputSystem::EnhancedTouch::Touch::operator ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::Touch::__set_m_Finger(::UnityEngine::InputSystem::EnhancedTouch::Finger*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::EnhancedTouch::Finger*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(value));
}
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Finger* UnityEngine::InputSystem::EnhancedTouch::Touch::__get_m_Finger()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::EnhancedTouch::Finger*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::EnhancedTouch::Finger*> UnityEngine::InputSystem::EnhancedTouch::Touch::__get_m_Finger() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::EnhancedTouch::Finger*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::Touch::__set_m_TouchRecord(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>& UnityEngine::InputSystem::EnhancedTouch::Touch::__get_m_TouchRecord()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> const& UnityEngine::InputSystem::EnhancedTouch::Touch::__get_m_TouchRecord() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::setStaticF_s_GlobalState(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get>(std::forward<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>(value));
}
inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState UnityEngine::InputSystem::EnhancedTouch::Touch::getStaticF_s_GlobalState()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get>();
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_valid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* UnityEngine::InputSystem::EnhancedTouch::Touch::get_finger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_finger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Finger*, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::TouchPhase UnityEngine::InputSystem::EnhancedTouch::Touch::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_began()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_began",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_inProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_inProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_ended()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_ended",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_touchId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_touchId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_pressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_radius()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::EnhancedTouch::Touch::get_screen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_screen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_screenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_startScreenPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_startScreenPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Touch::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_tapCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_tapCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_isTap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_isTap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::get_isInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_isInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_updateStepCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_updateStepCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_uniqueId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_uniqueId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> UnityEngine::InputSystem::EnhancedTouch::Touch::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>, false>(*this, ___internal_method);
}
inline ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState> UnityEngine::InputSystem::EnhancedTouch::Touch::get_extraData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_extraData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory UnityEngine::InputSystem::EnhancedTouch::Touch::get_history()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_history",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeTouches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_activeTouches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> UnityEngine::InputSystem::EnhancedTouch::Touch::get_fingers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_fingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> UnityEngine::InputSystem::EnhancedTouch::Touch::get_activeFingers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_activeFingers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* UnityEngine::InputSystem::EnhancedTouch::Touch::get_screens()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_screens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "add_onFingerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "remove_onFingerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "add_onFingerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "remove_onFingerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "add_onFingerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "remove_onFingerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::get_maxHistoryLengthPerFinger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "get_maxHistoryLengthPerFinger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::_ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger*  finger, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  touchRecord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Finger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, finger, touchRecord);
}
inline ::StringW UnityEngine::InputSystem::EnhancedTouch::Touch::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Touch::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Touch::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::AddTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "AddTouchscreen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "RemoveTouchscreen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, screen);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Touch::BeginUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "BeginUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState UnityEngine::InputSystem::EnhancedTouch::Touch::CreateGlobalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "CreateGlobalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::EnhancedTouch::Touch::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::EnhancedTouch::Touch>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_TouchRecord", ty: "::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Touch::Touch(::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  m_TouchRecord) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->m_Finger = m_Finger;
this->m_TouchRecord = m_TouchRecord;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
