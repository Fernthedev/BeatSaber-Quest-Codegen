#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ControllerColliderHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void UnityEngine::ControllerColliderHit::__set_m_Controller(::UnityEngine::CharacterController*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CharacterController*, 0x10>(this, std::forward<::UnityEngine::CharacterController*>(value));
}
constexpr ::UnityEngine::CharacterController* UnityEngine::ControllerColliderHit::__get_m_Controller()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CharacterController*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CharacterController*> UnityEngine::ControllerColliderHit::__get_m_Controller() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CharacterController*, 0x10>(this);
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Collider(::UnityEngine::Collider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Collider*, 0x18>(this, std::forward<::UnityEngine::Collider*>(value));
}
constexpr ::UnityEngine::Collider* UnityEngine::ControllerColliderHit::__get_m_Collider()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> UnityEngine::ControllerColliderHit::__get_m_Collider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider*, 0x18>(this);
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Point(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__get_m_Point()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__get_m_Point() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Normal(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__get_m_Normal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__get_m_Normal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_MoveDirection(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__get_m_MoveDirection()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__get_m_MoveDirection() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_MoveLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ControllerColliderHit::__get_m_MoveLength()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& UnityEngine::ControllerColliderHit::__get_m_MoveLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Push(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ControllerColliderHit::__get_m_Push()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& UnityEngine::ControllerColliderHit::__get_m_Push() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
