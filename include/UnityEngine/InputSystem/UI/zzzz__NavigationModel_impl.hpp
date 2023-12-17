#pragma once
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::NavigationModel.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::NavigationModel::*)()>(&::UnityEngine::InputSystem::UI::NavigationModel::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ad3f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::NavigationModel>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::UI::NavigationModel::__set_move(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::UI::NavigationModel::__get_move()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::UI::NavigationModel::__get_move() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::UI::NavigationModel::__set_consecutiveMoveCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::UI::NavigationModel::__get_consecutiveMoveCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::UI::NavigationModel::__get_consecutiveMoveCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::UI::NavigationModel::__set_lastMoveDirection(::UnityEngine::EventSystems::MoveDirection  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::MoveDirection, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::EventSystems::MoveDirection>(value));
}
constexpr ::UnityEngine::EventSystems::MoveDirection& UnityEngine::InputSystem::UI::NavigationModel::__get_lastMoveDirection()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::MoveDirection, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::EventSystems::MoveDirection const& UnityEngine::InputSystem::UI::NavigationModel::__get_lastMoveDirection() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::MoveDirection, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::UI::NavigationModel::__set_lastMoveTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::UI::NavigationModel::__get_lastMoveTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::InputSystem::UI::NavigationModel::__get_lastMoveTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::UI::NavigationModel::__set_eventData(::UnityEngine::EventSystems::AxisEventData*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::AxisEventData*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::EventSystems::AxisEventData*>(value));
}
constexpr ::UnityEngine::EventSystems::AxisEventData* UnityEngine::InputSystem::UI::NavigationModel::__get_eventData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::AxisEventData*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::AxisEventData*> UnityEngine::InputSystem::UI::NavigationModel::__get_eventData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::AxisEventData*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::InputSystem::UI::NavigationModel::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::NavigationModel>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "move", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "consecutiveMoveCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastMoveDirection", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastMoveTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::AxisEventData*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::UI::NavigationModel::NavigationModel(::UnityEngine::Vector2  move, int32_t  consecutiveMoveCount, ::UnityEngine::EventSystems::MoveDirection  lastMoveDirection, float_t  lastMoveTime, ::UnityEngine::EventSystems::AxisEventData*  eventData) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->move = move;
this->consecutiveMoveCount = consecutiveMoveCount;
this->lastMoveDirection = lastMoveDirection;
this->lastMoveTime = lastMoveTime;
this->eventData = eventData;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
