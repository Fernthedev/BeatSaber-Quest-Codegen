#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
constexpr void UnityEngine::Collision::__set_m_Impulse(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::Collision::__get_m_Impulse()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Collision::__get_m_Impulse() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr void UnityEngine::Collision::__set_m_RelativeVelocity(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x1c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::Collision::__get_m_RelativeVelocity()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Collision::__get_m_RelativeVelocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr void UnityEngine::Collision::__set_m_Body(::UnityEngine::Component*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Component*, 0x28>(this, std::forward<::UnityEngine::Component*>(value));
}
constexpr ::UnityEngine::Component* UnityEngine::Collision::__get_m_Body()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Component*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Component*> UnityEngine::Collision::__get_m_Body() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Component*, 0x28>(this);
}
constexpr void UnityEngine::Collision::__set_m_Collider(::UnityEngine::Collider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Collider*, 0x30>(this, std::forward<::UnityEngine::Collider*>(value));
}
constexpr ::UnityEngine::Collider* UnityEngine::Collision::__get_m_Collider()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> UnityEngine::Collision::__get_m_Collider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider*, 0x30>(this);
}
constexpr void UnityEngine::Collision::__set_m_ContactCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Collision::__get_m_ContactCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& UnityEngine::Collision::__get_m_ContactCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void UnityEngine::Collision::__set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>& UnityEngine::Collision::__get_m_ReusedContacts()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> const& UnityEngine::Collision::__get_m_ReusedContacts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, 0x40>(this);
}
constexpr void UnityEngine::Collision::__set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, 0x48>(this, std::forward<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>& UnityEngine::Collision::__get_m_LegacyContacts()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, 0x48>(this);
}
constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> const& UnityEngine::Collision::__get_m_LegacyContacts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, 0x48>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
